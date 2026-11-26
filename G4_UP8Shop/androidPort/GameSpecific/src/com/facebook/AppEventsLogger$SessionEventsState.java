// Decompiled from classes.dex (SourceFile: AppEventsLogger$SessionEventsState.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import com.facebook.model.GraphObject$Factory;
import com.facebook.internal.Utility;
import com.facebook.model.GraphObject;
class AppEventsLogger$SessionEventsState {
    // Fields
    public static java.lang.String ENCODED_EVENTS_KEY;
    public static java.lang.String EVENT_COUNT_KEY;
    public static java.lang.String NUM_SKIPPED_KEY;
    private final int MAX_ACCUMULATED_LOG_EVENTS;
    private java.util.List accumulatedEvents;
    private java.lang.String anonymousAppDeviceGUID;
    private com.facebook.internal.AttributionIdentifiers attributionIdentifiers;
    private java.util.List inFlightEvents;
    private int numSkippedEventsDueToFullBuffer;
    private java.lang.String packageName;

    // Methods
    public AppEventsLogger$SessionEventsState(com.facebook.internal.AttributionIdentifiers p0, String p1, String p2)
    {
      super();
      this.accumulatedEvents = new java.util.ArrayList();
      this.inFlightEvents = new java.util.ArrayList();
      this.MAX_ACCUMULATED_LOG_EVENTS = 1000;
      this.attributionIdentifiers = p0;
      this.packageName = p1;
      this.anonymousAppDeviceGUID = p2;
    }

    private byte[] getStringAsByteArray(String p0)
    {
      byte[] v2;
      v2 = null;
      try
      {
        return p0.getBytes("UTF-8");
      }
      catch ( java.io.UnsupportedEncodingException v4 )
      {
        Utility.logd("Encoding exception: ", v4);
      }
      return (byte[])v2;
    }

    private void populateRequest(
            com.facebook.Request p0,
            int p1,
            org.json.JSONArray p2,
            boolean p3)
    {
      com.facebook.model.GraphObject v5;
      android.os.Bundle Parameters;
      String v7; // RETVAL
      Object v8;
      v5 = GraphObject$Factory.create();
      v5.setProperty("event", "CUSTOM_APP_EVENTS");
      if ( this.numSkippedEventsDueToFullBuffer > 0 )
        v5.setProperty("num_skipped_events", Integer.valueOf(p1));
      Utility.setAppEventAttributionParameters(v5, this.attributionIdentifiers, this.anonymousAppDeviceGUID, p3);
      try
      {
        Utility.setAppEventExtendedDeviceInfoParameters(v5, AppEventsLogger.access$1000());
      }
      catch ( Exception e )
      {
      }
      v5.setProperty("application_package_name", this.packageName);
      p0.setGraphObject(v5);
      Parameters = p0.getParameters();
      if ( Parameters == null )
        Parameters = new android.os.Bundle();
      v7 = p2.toString();
      v8 = v7;
      if ( v7 != null )
      {
        Parameters.putByteArray("custom_events_file", this.getStringAsByteArray(v7));
        p0.setTag(v8);
      }
      p0.setParameters(Parameters);
    }

    public synchronized void accumulatePersistedEvents(
            java.util.List<com.facebook.AppEventsLogger$AppEvent> p0)
    {
      this.accumulatedEvents.addAll(p0);
    }

    public synchronized void addEvent(com.facebook.AppEventsLogger$AppEvent p0)
    {
      if ( this.accumulatedEvents.size() + this.inFlightEvents.size() < 1000 )
      {
        try
        {
          this.accumulatedEvents.add(p0);
        }
        finally
        {
        }
      }
      else
      {
        ++this.numSkippedEventsDueToFullBuffer;
      }
    }

    public synchronized void clearInFlightAndStats(boolean p0)
    {
      if ( p0 )
        this.accumulatedEvents.addAll(this.inFlightEvents);
      this.inFlightEvents.clear();
      this.numSkippedEventsDueToFullBuffer = 0;
    }

    public synchronized int getAccumulatedEventCount()
    {
      return this.accumulatedEvents.size();
    }

    public synchronized java.util.List<com.facebook.AppEventsLogger$AppEvent> getEventsToPersist()
    {
      this.accumulatedEvents = new java.util.ArrayList();
      return this.accumulatedEvents;
    }

    public int populateRequest(com.facebook.Request p0, boolean p1, boolean p2)
    {
      int numSkippedEventsDueToFullBuffer;
      org.json.JSONArray v5;
      java.util.Iterator v6;
      com.facebook.AppEventsLogger$AppEvent v7;
      synchronized ( this )
      {
        numSkippedEventsDueToFullBuffer = this.numSkippedEventsDueToFullBuffer;
        this.inFlightEvents.addAll(this.accumulatedEvents);
        this.accumulatedEvents.clear();
        v5 = new org.json.JSONArray();
        v6 = this.inFlightEvents.iterator();
        while ( v6.hasNext() )
        {
          v7 = (com.facebook.AppEventsLogger$AppEvent)v6.next();
          if ( p1 || !v7.getIsImplicit() )
            v5.put(v7.getJSONObject());
        }
        if ( v5.length() == 0 )
          return 0;
        this.populateRequest(p0, numSkippedEventsDueToFullBuffer, v5, p2);
        return v5.length();
      }
    }

}

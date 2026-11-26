// Decompiled from classes.dex (SourceFile: GoogleAnalyticsTracker.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.utils;

import com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils;
import com.google.android.gms.analytics.GoogleAnalytics;
public class GoogleAnalyticsTracker {
    // Fields
    public static android.content.Context a;
    private static java.util.HashMap b;
    private static java.lang.String c;
    private static com.google.android.gms.analytics.Tracker d;

    // Methods
    static
    {
      b = new java.util.HashMap();
      c = "GoogleAnalyticsTracking";
      d = null;
      a = null;
    }

    public GoogleAnalyticsTracker()
    {
      super();
    }

    public static void Init(android.content.Context p0)
    {
      a = p0;
      getTracker();
    }

    public static void activityStart(android.app.Activity p0)
    {
      try
      {
        GoogleAnalytics.getInstance(p0).a(p0);
      }
      catch ( Exception e )
      {
      }
    }

    public static void activityStop(android.app.Activity p0)
    {
      try
      {
        GoogleAnalytics.getInstance(p0).b(p0);
      }
      catch ( Exception e )
      {
      }
    }

    private static String getKey(String p0, String p1, String p2)
    {
      StringBuilder v3;
      try
      {
        v3 = new StringBuilder("");
        v3.append(p0);
        v3.append("_");
        if ( p1 != null )
          v3.append(p1);
        else
          v3.append("null");
        v3.append("_");
        if ( p2 != null )
          v3.append(p2);
        else
          v3.append("null");
        return v3.toString();
      }
      catch ( Exception e )
      {
        return "";
      }
    }

    public static synchronized com.google.android.gms.analytics.Tracker getTracker()
    {
      if ( d == null )
        d = GoogleAnalytics.getInstance(a).a(0x7f040001);
      return d;
    }

    public static void sendTimingTracking(String p0, long p1, String p3, String p4)
    {
      String Key;
      long PreferenceLong;
      try
      {
        if ( d != null )
        {
          stopTimingTracking(p0, p1, p3, p4);
          Key = getKey(p0, p3, p4);
          PreferenceLong = SUtils.getPreferenceLong(Key, new Long(0).longValue(), c);
          if ( PreferenceLong != 0 )
            d.a(new com.google.android.gms.analytics.HitBuilders$TimingBuilder().b(p0).a(PreferenceLong).a(p3).c(p4).a());
          SUtils.setPreference(Key, new Long(0), c);
        }
      }
      catch ( Exception e )
      {
      }
    }

    public static void startTimingTracking(String p0, long p1, String p3, String p4)
    {
      try
      {
        b.put(getKey(p0, p3, p4), Long.valueOf(p1));
      }
      catch ( Exception e )
      {
      }
    }

    public static void stopTimingTracking(String p0, long p1, String p3, String p4)
    {
      String Key;
      long v5;
      try
      {
        Key = getKey(p0, p3, p4);
        v5 = new Long(0).longValue();
        if ( b.containsKey(Key) )
          v5 = p1 - ((Long)b.get(Key)).longValue();
        SUtils.setPreference(Key, new Long(v5 + SUtils.getPreferenceLong(Key, new Long(0).longValue(), c)), c);
      }
      catch ( Exception e )
      {
      }
    }

    public static void trackEvent(String p0, String p1, String p2, Long p3)
    {
      try
      {
        if ( d != null )
        {
          if ( p3 != null )
            d.a(new com.google.android.gms.analytics.HitBuilders$EventBuilder().a(p0).b(p1).c(p2).a(p3.longValue()).a());
          else
            d.a(new com.google.android.gms.analytics.HitBuilders$EventBuilder().a(p0).b(p1).c(p2).a());
        }
      }
      catch ( Exception e )
      {
      }
    }

}

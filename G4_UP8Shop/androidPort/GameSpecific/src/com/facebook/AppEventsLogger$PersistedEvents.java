// Decompiled from classes.dex (SourceFile: AppEventsLogger$PersistedEvents.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import android.util.Log;
import com.facebook.internal.Utility;
class AppEventsLogger$PersistedEvents {
    // Fields
    static java.lang.String PERSISTED_EVENTS_FILENAME;
    private static java.lang.Object staticLock;
    private android.content.Context context;
    private java.util.HashMap persistedEvents;

    // Methods
    static
    {
      staticLock = new Object();
    }

    private AppEventsLogger$PersistedEvents(android.content.Context p0)
    {
      super();
      this.persistedEvents = new java.util.HashMap();
      this.context = p0;
    }

    public static void persistEvents(
            android.content.Context p0,
            com.facebook.AppEventsLogger$AccessTokenAppIdPair p1,
            com.facebook.AppEventsLogger$SessionEventsState p2)
    {
      java.util.HashMap v3;
      v3 = new java.util.HashMap();
      v3.put(p1, p2);
      persistEvents(p0, v3);
    }

    public static void persistEvents(
            android.content.Context p0,
            java.util.Map<com.facebook.AppEventsLogger$AccessTokenAppIdPair, com.facebook.AppEventsLogger$SessionEventsState> p1)
    {
      Object v2;
      com.facebook.AppEventsLogger$PersistedEvents v3;
      java.util.Iterator v4;
      java.util.Map.Entry v5;
      java.util.List EventsToPersist;
      v2 = staticLock;
      synchronized ( v2 )
      {
        v3 = readAndClearStore(p0);
        v4 = p1.entrySet().iterator();
        while ( v4.hasNext() )
        {
          v5 = (java.util.Map.Entry)v4.next();
          EventsToPersist = ((com.facebook.AppEventsLogger$SessionEventsState)v5.getValue()).getEventsToPersist();
          if ( EventsToPersist.size() != 0 )
            v3.addEvents((com.facebook.AppEventsLogger$AccessTokenAppIdPair)v5.getKey(), EventsToPersist);
        }
        v3.write();
      }
    }

    public static com.facebook.AppEventsLogger$PersistedEvents readAndClearStore(
            android.content.Context p0)
    {
      Object v1;
      com.facebook.AppEventsLogger$PersistedEvents v2;
      v1 = staticLock;
      synchronized ( v1 )
      {
        v2 = new com.facebook.AppEventsLogger$PersistedEvents(p0);
        v2.readAndClearStore();
        return v2;
      }
    }

    private void readAndClearStore()
    {
      java.io.Closeable v1 = null;
      java.io.ObjectInputStream v2 = null;
      java.util.HashMap v3 = null;
      Exception v5 = null;
      Object v7 = null;
      Object v8 = null;
      Exception v9 = null;
      Exception _cv_1 = null;
      Throwable _cv_2 = null;
      Exception _cv_3 = null;
      Throwable _cv_4 = null;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              v1 = null;
              _ehCatchPc = 10;
              v2 = new java.io.ObjectInputStream(new java.io.BufferedInputStream(this.context.openFileInput("AppEventsLogger.persistedevents")));
              _ehCatchPc = 7;
              _ehCatchPc = 1;
              v3 = (java.util.HashMap)v2.readObject();
              this.context.getFileStreamPath("AppEventsLogger.persistedevents").delete();
              this.persistedEvents = v3;
              Utility.closeQuietly(v2);
              return;
            case 1:
              _ehCatchPc = 7;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.FileNotFoundException) ) { _pc = 3; continue _sm; }
              v1 = v2;
              _pc = 2;
              continue _sm;
            case 2:
              Utility.closeQuietly(v1);
              return;
            case 3:
              if ( !(_ehCaught instanceof Exception) ) { _pc = 5; continue _sm; }
              _cv_1 = (Exception)_ehCaught;
              v9 = _cv_1;
              _pc = 4;
              continue _sm;
            case 4:
              Log.d(AppEventsLogger.access$1300(), "Got unexpected exception: " + v9.toString());
              _pc = 6;
              continue _sm;
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
              _ehCatchPc = 10;
              _pc = 9;
              continue _sm;
            case 7:
              _ehCatchPc = 10;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 8; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v8 = _cv_2;
              _pc = 13;
              continue _sm;
            case 8:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 9:
              Utility.closeQuietly(v2);
              _ehCatchPc = -1;
              _pc = 15;
              continue _sm;
            case 10:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.FileNotFoundException) ) { _pc = 11; continue _sm; }
              _pc = 2;
              continue _sm;
            case 11:
              if ( !(_ehCaught instanceof Exception) ) { _pc = 12; continue _sm; }
              _cv_3 = (Exception)_ehCaught;
              v5 = _cv_3;
              v2 = null;
              v9 = v5;
              _pc = 4;
              continue _sm;
            case 12:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 14; continue _sm; }
              _cv_4 = (Throwable)_ehCaught;
              v7 = _cv_4;
              v2 = null;
              v8 = v7;
              _pc = 13;
              continue _sm;
            case 13:
              Utility.closeQuietly(v2);
              throw com.gameloft.android.DecompRT.sneakyThrow(v8);
            case 14:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 15:
              return;
          }
        }
        catch ( Throwable _ehT )
        {
          if ( _ehCatchPc >= 0 )
          {
            _ehEx = _ehT;
            _pc = _ehCatchPc;
            continue _sm;
          }
          throw com.gameloft.android.DecompRT.sneakyThrow(_ehT);
        }
      }
}

    private void write()
    {
      java.io.ObjectOutputStream v1 = null;
      Exception _cv_1 = null;
      Throwable _cv_2 = null;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              _ehCatchPc = 8;
              v1 = new java.io.ObjectOutputStream(new java.io.BufferedOutputStream(this.context.openFileOutput("AppEventsLogger.persistedevents", 0)));
              _ehCatchPc = 5;
              _ehCatchPc = 1;
              v1.writeObject(this.persistedEvents);
              Utility.closeQuietly(v1);
              return;
            case 1:
              _ehCatchPc = 5;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 3; continue _sm; }
              _cv_1 = (Exception)_ehCaught;
              _pc = 2;
              continue _sm;
            case 2:
              Log.d(AppEventsLogger.access$1300(), "Got unexpected exception: " + _cv_1.toString());
              _pc = 4;
              continue _sm;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              _ehCatchPc = 8;
              _pc = 7;
              continue _sm;
            case 5:
              _ehCatchPc = 8;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 6; continue _sm; }
              _pc = 10;
              continue _sm;
            case 6:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 7:
              Utility.closeQuietly(v1);
              _ehCatchPc = -1;
              _pc = 12;
              continue _sm;
            case 8:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 9; continue _sm; }
              v1 = null;
              _pc = 2;
              continue _sm;
            case 9:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 11; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v1 = null;
              _pc = 10;
              continue _sm;
            case 10:
              Utility.closeQuietly(v1);
              throw _cv_2;
            case 11:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 12:
              return;
          }
        }
        catch ( Throwable _ehT )
        {
          if ( _ehCatchPc >= 0 )
          {
            _ehEx = _ehT;
            _pc = _ehCatchPc;
            continue _sm;
          }
          throw com.gameloft.android.DecompRT.sneakyThrow(_ehT);
        }
      }
}

    public void addEvents(
            com.facebook.AppEventsLogger$AccessTokenAppIdPair p0,
            java.util.List<com.facebook.AppEventsLogger$AppEvent> p1)
    {
      if ( !this.persistedEvents.containsKey(p0) )
        this.persistedEvents.put(p0, new java.util.ArrayList());
      ((java.util.List)this.persistedEvents.get(p0)).addAll(p1);
    }

    public java.util.List<com.facebook.AppEventsLogger$AppEvent> getEvents(
            com.facebook.AppEventsLogger$AccessTokenAppIdPair p0)
    {
      return (java.util.List)this.persistedEvents.get(p0);
    }

    public java.util.Set<com.facebook.AppEventsLogger$AccessTokenAppIdPair> keySet()
    {
      return this.persistedEvents.keySet();
    }

}

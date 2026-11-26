// Decompiled from classes.dex (SourceFile: DriveEventService.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.events;

import android.util.Log;
import com.google.android.gms.internal.hn;
public abstract class DriveEventService extends android.app.IntentService {
    // Fields
    private static final java.util.concurrent.LinkedBlockingDeque a;
    private final java.lang.String b;

    // Methods
    static
    {
      a = new java.util.concurrent.LinkedBlockingDeque();
    }

    protected DriveEventService()
    {
      this("DriveEventService");
    }

    private DriveEventService(String p0)
    {
      super(p0);
      this.b = p0;
    }

    private void a(com.google.android.gms.drive.events.DriveEvent p0)
    {
      Object[] v2;
      Object[] v4;
      try
      {
        switch ( p0.a() )
        {
          case 1:
            v2 = new Object[1];
            v2[0] = p0;
            hn.a(p0 instanceof com.google.android.gms.drive.events.ChangeEvent, "Unexpected event type: %s", v2);
            Log.w("DriveEventService", "Unhandled ChangeEvent: " + (com.google.android.gms.drive.events.ChangeEvent)p0);
            break;
          case 2:
            v4 = new Object[1];
            v4[0] = p0;
            hn.a(p0 instanceof com.google.android.gms.drive.events.FileConflictEvent, "Unexpected event type: %s", v4);
            Log.w(
              "DriveEventService",
              "Unhandled FileConflictEvent: " + (com.google.android.gms.drive.events.FileConflictEvent)p0);
            break;
          default:
            Log.w(this.b, "Unrecognized event: " + p0);
            break;
        }
      }
      catch ( ClassCastException v3 )
      {
        Log.wtf(this.b, "Service does not implement listener for type:" + p0.a(), v3);
      }
      catch ( Exception v5 )
      {
        Log.w(this.b, "Error handling event: " + p0, v5);
      }
    }

    private static void a(com.google.android.gms.drive.events.FileConflictEvent p0)
    {
      Log.w("DriveEventService", "Unhandled FileConflictEvent: " + p0);
    }

    /* synthetic */ static java.util.concurrent.LinkedBlockingDeque gi()
    {
      return a;
    }

    private static void onChangeEvent(com.google.android.gms.drive.events.ChangeEvent p0)
    {
      Log.w("DriveEventService", "Unhandled ChangeEvent: " + p0);
    }

    public android.os.IBinder onBind(android.content.Intent p0)
    {
      return new com.google.android.gms.drive.events.DriveEventService$1(this);
    }

    protected final void onHandleIntent(android.content.Intent p0)
    {
      com.google.android.gms.drive.events.DriveEvent v2;
      com.google.android.gms.drive.events.DriveEvent v3;
      Object[] v4;
      Object[] v6;
      p0.setExtrasClassLoader(this.getClassLoader());
      v2 = (com.google.android.gms.drive.events.DriveEvent)p0.getParcelableExtra("event");
      if ( v2 != null )
        v3 = v2;
      else
        v3 = (com.google.android.gms.drive.events.DriveEvent)a.poll();
      if ( v3 == null )
      {
        Log.e("DriveEventService", "The event queue is unexpectedly empty.");
        return;
      }
      try
      {
        switch ( v3.a() )
        {
          case 1:
            v4 = new Object[1];
            v4[0] = v3;
            hn.a(v3 instanceof com.google.android.gms.drive.events.ChangeEvent, "Unexpected event type: %s", v4);
            Log.w("DriveEventService", "Unhandled ChangeEvent: " + (com.google.android.gms.drive.events.ChangeEvent)v3);
            break;
          case 2:
            v6 = new Object[1];
            v6[0] = v3;
            hn.a(v3 instanceof com.google.android.gms.drive.events.FileConflictEvent, "Unexpected event type: %s", v6);
            Log.w(
              "DriveEventService",
              "Unhandled FileConflictEvent: " + (com.google.android.gms.drive.events.FileConflictEvent)v3);
            break;
          default:
            Log.w(this.b, "Unrecognized event: " + v3);
            break;
        }
      }
      catch ( ClassCastException v5 )
      {
        Log.wtf(this.b, "Service does not implement listener for type:" + v3.a(), v5);
      }
      catch ( Exception v7 )
      {
        Log.w(this.b, "Error handling event: " + v3, v7);
      }
    }

}

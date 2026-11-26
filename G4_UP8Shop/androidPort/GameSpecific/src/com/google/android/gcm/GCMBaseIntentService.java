// Decompiled from classes.dex (SourceFile: GCMBaseIntentService.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gcm;

import android.app.PendingIntent;
import android.content.Intent;
import android.os.SystemClock;
import android.util.Log;
import java.util.concurrent.TimeUnit;
public abstract class GCMBaseIntentService extends android.app.IntentService {
    // Fields
    private static java.lang.String a;
    public static java.lang.String b;
    private static android.os.PowerManager.WakeLock c;
    private static final java.lang.Object d;
    private static int f;
    private static final java.util.Random g;
    private static final int h;
    private static final java.lang.String i;
    private static java.lang.String j;
    private final java.lang.String[] e;

    // Methods
    static
    {
      long v0; // RETVAL
    
      d = com.google.android.gcm.GCMBaseIntentService.class;
      f = 0;
      g = new java.util.Random();
      v0 = TimeUnit.SECONDS.toMillis(3600);
      h = (int)v0;
      i = Long.toBinaryString(g.nextLong());
    }

    protected GCMBaseIntentService()
    {
      this(getName("DynamicSenderIds"), null);
    }

    private GCMBaseIntentService(String p0, String[] p1)
    {
      super(p0);
      this.e = p1;
    }

    protected GCMBaseIntentService(String[] p0)
    {
      this(getName(p0), p0);
    }

    private void b(android.content.Context p0, android.content.Intent p1)
    {
      String StringExtra;
      String v4;
      String v5;
      int Backoff;
      int v7;
      android.content.Intent v8;
      StringExtra = p1.getStringExtra("registration_id");
      v4 = p1.getStringExtra("error");
      v5 = p1.getStringExtra("unregistered");
      Log.d(
        "GCMBaseIntentService",
        "handleRegistration: registrationId = " + StringExtra + ", error = " + v4 + ", unregistered = " + v5);
      if ( StringExtra != null )
      {
        GCMRegistrar.resetBackoff(p0);
        GCMRegistrar.setRegistrationId(p0, StringExtra);
        this.a(StringExtra);
      }
      else if ( v5 != null )
      {
        GCMRegistrar.resetBackoff(p0);
        GCMRegistrar.clearRegistrationId(p0);
        this.a(p0);
      }
      else
      {
        Log.d("GCMBaseIntentService", "Registration error: " + v4);
        if ( "SERVICE_NOT_AVAILABLE".equals(v4) )
        {
          if ( this.a(p0, v4) )
          {
            Backoff = GCMRegistrar.getBackoff(p0);
            v7 = g.nextInt(Backoff) + Backoff / 2;
            Log.d("GCMBaseIntentService", "Scheduling registration retry, backoff = " + v7 + " (" + Backoff + ")");
            v8 = new android.content.Intent("com.google.android.gcm.intent.RETRY");
            v8.putExtra("token", i);
            ((android.app.AlarmManager)p0.getSystemService("alarm")).set(3, SystemClock.elapsedRealtime() + v7, PendingIntent.getBroadcast(p0, 0, v8, 0));
            if ( Backoff < h )
              GCMRegistrar.setBackoff(p0, 2 * Backoff);
          }
          else
          {
            Log.d("GCMBaseIntentService", "Not retrying failed operation");
          }
        }
      }
    }

    private String[] c()
    {
      if ( this.e == null )
        throw new IllegalStateException("sender id not set on constructor");
      return this.e;
    }

    private static String getName(String p0)
    {
      int v1;
      String v2;
      v1 = f + 1;
      f = v1;
      v2 = "GCMIntentService-" + p0 + "-" + v1;
      Log.v("GCMBaseIntentService", "Intent service name: " + v2);
      return v2;
    }

    private static String getName(String[] p0)
    {
      return getName(GCMRegistrar.getFlatSenderIds(p0));
    }

    static void runIntentInService(android.content.Context p0, android.content.Intent p1, String p2)
    {
      Object v3;
      v3 = d;
      synchronized ( v3 )
      {
        if ( c == null )
          c = ((android.os.PowerManager)p0.getSystemService("power")).newWakeLock(1, "GCM_LIB");
      }
      Log.v("GCMBaseIntentService", "Acquiring wakelock");
      c.acquire();
      p1.setClassName(p0, p2);
      p0.startService(p1);
    }

    protected void a()
    {
      ;
    }

    protected abstract void a(android.content.Context p0);

    protected abstract void a(android.content.Context p0, android.content.Intent p1);

    protected abstract void a(java.lang.String p0);

    protected boolean a(android.content.Context p0, String p1)
    {
      return true;
    }

    protected abstract void b();

    public final void onHandleIntent(android.content.Intent p0)
    {
      android.content.Context ApplicationContext = null;
      String Action = null;
      String StringExtra = null;
      String v5 = null;
      String v6 = null;
      Object v7 = null;
      Object v9 = null;
      int Backoff = 0;
      int v11 = 0;
      android.content.Intent v12 = null;
      String v13 = null; // RETVAL
      String v14 = null;
      String v15 = null; // RETVAL
      String v16 = null;
      String v17 = null;
      Throwable _cv_1 = null;
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
              _ehCatchPc = 6;
              ApplicationContext = this.getApplicationContext();
              Action = p0.getAction();
              if ( !(Action.equals("com.google.android.c2dm.intent.REGISTRATION")) ) { _pc = 5; continue _sm; }
              GCMRegistrar.setRetryBroadcastReceiver(ApplicationContext);
              StringExtra = p0.getStringExtra("registration_id");
              v5 = p0.getStringExtra("error");
              v6 = p0.getStringExtra("unregistered");
              Log.d(
              "GCMBaseIntentService",
              "handleRegistration: registrationId = " + StringExtra + ", error = " + v5 + ", unregistered = " + v6);
              if ( !(StringExtra != null) ) { _pc = 4; continue _sm; }
              GCMRegistrar.resetBackoff(ApplicationContext);
              GCMRegistrar.setRegistrationId(ApplicationContext, StringExtra);
              this.a(StringExtra);
              _pc = 1;
              continue _sm;
            case 1:
              v7 = d;
              com.gameloft.android.DecompRT.monitorEnter(v7);
              if ( !(c != null) ) { _pc = 3; continue _sm; }
              _pc = 2;
              continue _sm;
            case 2:
              Log.v("GCMBaseIntentService", "Releasing wakelock");
              c.release();
              return;
            case 3:
              Log.e("GCMBaseIntentService", "Wakelock reference is null");
              return;
            case 4:
              if ( v6 != null )
              {
              GCMRegistrar.resetBackoff(ApplicationContext);
              GCMRegistrar.clearRegistrationId(ApplicationContext);
              this.a(ApplicationContext);
              { _pc = 1; continue _sm; }
              }
              Log.d("GCMBaseIntentService", "Registration error: " + v5);
              if ( "SERVICE_NOT_AVAILABLE".equals(v5) )
              {
              if ( this.a(ApplicationContext, v5) )
              {
              Backoff = GCMRegistrar.getBackoff(ApplicationContext);
              v11 = g.nextInt(Backoff) + Backoff / 2;
              Log.d("GCMBaseIntentService", "Scheduling registration retry, backoff = " + v11 + " (" + Backoff + ")");
              v12 = new android.content.Intent("com.google.android.gcm.intent.RETRY");
              v12.putExtra("token", i);
              ((android.app.AlarmManager)ApplicationContext.getSystemService("alarm")).set(3, SystemClock.elapsedRealtime()
              + v11, PendingIntent.getBroadcast(
              ApplicationContext,
              0,
              v12,
              0));
              if ( Backoff < h )
              GCMRegistrar.setBackoff(ApplicationContext, 2 * Backoff);
              }
              else
              {
              Log.d("GCMBaseIntentService", "Not retrying failed operation");
              }
              }
              _pc = 8;
              continue _sm;
            case 5:
              if ( Action.equals("com.google.android.c2dm.intent.RECEIVE") )
              {
              v13 = p0.getStringExtra("message_type");
              v14 = v13;
              if ( v13 != null )
              {
              if ( v13.equals("deleted_messages") )
              {
              v15 = p0.getStringExtra("total_deleted");
              v16 = v15;
              if ( v15 == null )
              { _pc = 1; continue _sm; }
              try
              {
              Log.v("GCMBaseIntentService", "Received deleted messages notification: " + Integer.parseInt(v15));
              }
              catch ( NumberFormatException e )
              {
              Log.e("GCMBaseIntentService", "GCM returned invalid number of deleted messages: " + v16);
              }
              }
              else
              {
              Log.e("GCMBaseIntentService", "Received unknown special message: " + v14);
              }
              }
              else
              {
              this.a(ApplicationContext, p0);
              }
              { _pc = 8; continue _sm; }
              }
              if ( !Action.equals("com.google.android.gcm.intent.RETRY") )
              { _pc = 8; continue _sm; }
              v17 = p0.getStringExtra("token");
              if ( i.equals(v17) )
              {
              if ( GCMRegistrar.isRegistered(ApplicationContext) )
              {
              GCMRegistrar.internalUnregister(ApplicationContext);
              }
              else
              {
              if ( this.e == null )
              throw new IllegalStateException("sender id not set on constructor");
              GCMRegistrar.internalRegister(ApplicationContext, this.e);
              }
              { _pc = 8; continue _sm; }
              }
              Log.e("GCMBaseIntentService", "Received invalid token: " + v17);
              v7 = d;
              synchronized ( v7 )
              {
              if ( c != null )
              { _pc = 2; continue _sm; }
              { _pc = 3; continue _sm; }
              }
            case 6:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 7; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              v9 = d;
              synchronized ( v9 )
              {
              if ( c != null )
              {
              Log.v("GCMBaseIntentService", "Releasing wakelock");
              c.release();
              }
              else
              {
              Log.e("GCMBaseIntentService", "Wakelock reference is null");
              }
              com.gameloft.android.DecompRT.monitorExit(v9);
              throw _cv_1;
              }
            case 7:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 8:
              _pc = 1;
              continue _sm;
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

}

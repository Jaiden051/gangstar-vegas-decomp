// Decompiled from classes.dex (SourceFile: WearableListenerService.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable;

import android.os.Binder;
import android.util.Log;
import com.google.android.gms.common.GooglePlayServicesUtil;
public abstract class WearableListenerService extends android.app.Service implements com.google.android.gms.wearable.DataApi$DataListener, com.google.android.gms.wearable.MessageApi$MessageListener, com.google.android.gms.wearable.NodeApi$NodeListener {
    // Fields
    public static java.lang.String a;
    private volatile int b;
    private java.lang.String c;
    private android.os.Handler d;
    private android.os.IBinder e;
    private java.lang.Object f;
    private boolean g;

    // Methods
    public WearableListenerService()
    {
      super();
      this.b = -1;
      this.f = new Object();
    }

    /* synthetic */ static String a(com.google.android.gms.wearable.WearableListenerService p0)
    {
      return p0.c;
    }

    private boolean a(int p0)
    {
      boolean v2;
      Object[] PackagesForUid;
      int i;
      v2 = false;
      PackagesForUid = this.getPackageManager().getPackagesForUid(p0);
      if ( PackagesForUid != null )
      {
        for ( i = 0; i < PackagesForUid.length; ++i )
        {
          if ( "com.google.android.gms".equals(PackagesForUid[i]) )
            return true;
        }
      }
      return v2;
    }

    /* synthetic */ static void b(com.google.android.gms.wearable.WearableListenerService p0)
    {
      int v1 = 0;
      int CallingUid = 0;
      int b = 0;
      Object[] PackagesForUid = null;
      int i = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v1 = 0;
            CallingUid = Binder.getCallingUid();
            b = p0.b;
            if ( !(CallingUid != b) ) { _pc = 3; continue _sm; }
            if ( !GooglePlayServicesUtil.b(p0.getPackageManager(), "com.google.android.gms") )
            { _pc = 1; continue _sm; }
            PackagesForUid = p0.getPackageManager().getPackagesForUid(CallingUid);
            if ( PackagesForUid != null )
            {
            for ( i = 0; i < PackagesForUid.length; ++i )
            {
            if ( "com.google.android.gms".equals(PackagesForUid[i]) )
            {
            v1 = 1;
            break;
            }
            }
            }
            if ( v1 == 0 ) { _pc = 1; continue _sm; } else { _pc = 2; continue _sm; }
          case 1:
            throw new SecurityException("Caller is not GooglePlayServices");
          case 2:
            p0.b = CallingUid;
            _pc = 3;
            continue _sm;
          case 3:
            return;
        }
      }
}

    /* synthetic */ static Object c(com.google.android.gms.wearable.WearableListenerService p0)
    {
      return p0.f;
    }

    /* synthetic */ static boolean d(com.google.android.gms.wearable.WearableListenerService p0)
    {
      return p0.g;
    }

    /* synthetic */ static android.os.Handler e(
            com.google.android.gms.wearable.WearableListenerService p0)
    {
      return p0.d;
    }

    private void e()
    {
      int v1 = 0;
      int CallingUid = 0;
      int b = 0;
      Object[] PackagesForUid = null;
      int i = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v1 = 0;
            CallingUid = Binder.getCallingUid();
            b = this.b;
            if ( !(CallingUid != b) ) { _pc = 3; continue _sm; }
            if ( !GooglePlayServicesUtil.b(this.getPackageManager(), "com.google.android.gms") )
            { _pc = 1; continue _sm; }
            PackagesForUid = this.getPackageManager().getPackagesForUid(CallingUid);
            if ( PackagesForUid != null )
            {
            for ( i = 0; i < PackagesForUid.length; ++i )
            {
            if ( "com.google.android.gms".equals(PackagesForUid[i]) )
            {
            v1 = 1;
            break;
            }
            }
            }
            if ( v1 == 0 ) { _pc = 1; continue _sm; } else { _pc = 2; continue _sm; }
          case 1:
            throw new SecurityException("Caller is not GooglePlayServices");
          case 2:
            this.b = CallingUid;
            _pc = 3;
            continue _sm;
          case 3:
            return;
        }
      }
}

    public final void a()
    {
      ;
    }

    public final void b()
    {
      ;
    }

    public final void c()
    {
      ;
    }

    public final void d()
    {
      ;
    }

    public final android.os.IBinder onBind(android.content.Intent p0)
    {
      if ( "com.google.android.gms.wearable.BIND_LISTENER".equals(p0.getAction()) )
        return this.e;
      else
        return null;
    }

    public void onCreate()
    {
      android.os.HandlerThread v1;
      super.onCreate();
      if ( Log.isLoggable("WearableLS", 3) )
        Log.d("WearableLS", "onCreate: " + this.getPackageName());
      this.c = this.getPackageName();
      v1 = new android.os.HandlerThread("WearableListenerService");
      v1.start();
      this.d = new android.os.Handler(v1.getLooper());
      this.e = new com.google.android.gms.wearable.WearableListenerService$a(this, 0);
    }

    public void onDestroy()
    {
      Object f;
      f = this.f;
      synchronized ( f )
      {
        this.g = true;
        this.d.getLooper().quit();
      }
      super.onDestroy();
    }

}

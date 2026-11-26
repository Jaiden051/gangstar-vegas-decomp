// Decompiled from classes.dex (SourceFile: WearableListenerService$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable;

import android.util.Log;
class WearableListenerService$a extends com.google.android.gms.wearable.internal.ac$a {
    // Fields
    final com.google.android.gms.wearable.WearableListenerService a;

    // Methods
    private WearableListenerService$a(com.google.android.gms.wearable.WearableListenerService p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ WearableListenerService$a(com.google.android.gms.wearable.WearableListenerService p0, int p1)
    {
      this(p0);
    }

    public final void a(com.google.android.gms.common.data.DataHolder p0)
    {
      Object v2; // RETVAL
      Object v3;
      if ( Log.isLoggable("WearableLS", 3) )
        Log.d("WearableLS", "onDataItemChanged: " + WearableListenerService.a(this.a) + ": " + p0);
      WearableListenerService.b(this.a);
      v2 = WearableListenerService.c(this.a);
      v3 = v2;
      synchronized ( v3 )
      {
        if ( WearableListenerService.d(this.a) )
          p0.i();
        else
          WearableListenerService.e(this.a).post((Runnable)new com.google.android.gms.wearable.WearableListenerService$a$1(this, p0));
        com.gameloft.android.DecompRT.monitorExit(v3);
        return;
      }
    }

    public final void a(com.google.android.gms.wearable.internal.af p0)
    {
      Object v2; // RETVAL
      Object v3;
      if ( Log.isLoggable("WearableLS", 3) )
        Log.d("WearableLS", "onMessageReceived: " + p0);
      WearableListenerService.b(this.a);
      v2 = WearableListenerService.c(this.a);
      v3 = v2;
      synchronized ( v3 )
      {
        if ( !WearableListenerService.d(this.a) )
          WearableListenerService.e(this.a).post((Runnable)new com.google.android.gms.wearable.WearableListenerService$a$2(this, p0));
        com.gameloft.android.DecompRT.monitorExit(v3);
        return;
      }
    }

    public final void a(com.google.android.gms.wearable.internal.ai p0)
    {
      Object v2; // RETVAL
      Object v3;
      if ( Log.isLoggable("WearableLS", 3) )
        Log.d("WearableLS", "onPeerConnected: " + WearableListenerService.a(this.a) + ": " + p0);
      WearableListenerService.b(this.a);
      v2 = WearableListenerService.c(this.a);
      v3 = v2;
      synchronized ( v3 )
      {
        if ( !WearableListenerService.d(this.a) )
          WearableListenerService.e(this.a).post((Runnable)new com.google.android.gms.wearable.WearableListenerService$a$3(this, p0));
        com.gameloft.android.DecompRT.monitorExit(v3);
        return;
      }
    }

    public final void b(com.google.android.gms.wearable.internal.ai p0)
    {
      Object v2; // RETVAL
      Object v3;
      if ( Log.isLoggable("WearableLS", 3) )
        Log.d("WearableLS", "onPeerDisconnected: " + WearableListenerService.a(this.a) + ": " + p0);
      WearableListenerService.b(this.a);
      v2 = WearableListenerService.c(this.a);
      v3 = v2;
      synchronized ( v3 )
      {
        if ( !WearableListenerService.d(this.a) )
          WearableListenerService.e(this.a).post((Runnable)new com.google.android.gms.wearable.WearableListenerService$a$4(this, p0));
        com.gameloft.android.DecompRT.monitorExit(v3);
        return;
      }
    }

}

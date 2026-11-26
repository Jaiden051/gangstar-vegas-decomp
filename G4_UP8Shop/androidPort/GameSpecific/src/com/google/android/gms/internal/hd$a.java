// Decompiled from classes.dex (SourceFile: hd$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.util.Log;
final class hd$a extends android.os.Handler {
    // Fields
    final com.google.android.gms.internal.hd a;

    // Methods
    public hd$a(com.google.android.gms.internal.hd p0, android.os.Looper p1)
    {
      super(p1);
      this.a = p0;
    
    }

    public final void handleMessage(android.os.Message p0)
    {
      try {
      java.util.ArrayList v2; // RETVAL
      Object v3;
      if ( p0.what != 1 )
      {
        Log.wtf("GmsClientEvents", "Don't know how to handle this message.");
        return;
      }
      v2 = hd.a(this.a);
      v3 = v2;
      synchronized ( v3 )
      {
        if ( hd.b(this.a).e_() && hd.b(this.a).c() && hd.a(this.a).contains(p0.obj) )
          ((com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks)p0.obj).a(hd.b(this.a).d_());
        com.gameloft.android.DecompRT.monitorExit(v3);
      }
      } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
    }

}

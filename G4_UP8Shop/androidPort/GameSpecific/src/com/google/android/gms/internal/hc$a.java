// Decompiled from classes.dex (SourceFile: hc$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.util.Log;
final class hc$a extends android.os.Handler {
    // Fields
    final com.google.android.gms.internal.hc a;

    // Methods
    public hc$a(com.google.android.gms.internal.hc p0, android.os.Looper p1)
    {
      super(p1);
      this.a = p0;
    
    }

    public final void handleMessage(android.os.Message p0)
    {
  try {
      com.google.android.gms.internal.hc$b v2 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( p0.what == 1 && !this.a.D() )
            { _pc = 3; continue _sm; }
            if ( !(p0.what == 3) ) { _pc = 1; continue _sm; }
            {
            hc.a(this.a).a(new com.google.android.gms.common.ConnectionResult(((Integer)p0.obj).intValue(), null));
            }
            _pc = 5;
            continue _sm;
          case 1:
            if ( !(p0.what == 4) ) { _pc = 2; continue _sm; }
            {
            hc.a(this.a, 1);
            hc.a(this.a, (android.os.IInterface)null);
            hc.a(this.a).a(((Integer)p0.obj).intValue());
            }
            _pc = 5;
            continue _sm;
          case 2:
            if ( !(p0.what == 2 && !this.a.c()) ) { _pc = 4; continue _sm; }
            _pc = 3;
            continue _sm;
          case 3:
            v2 = (com.google.android.gms.internal.hc$b)p0.obj;
            v2.a();
            v2.G_();
            return;
          case 4:
            if ( p0.what == 2 || p0.what == 1 )
            ((com.google.android.gms.internal.hc$b)p0.obj).b();
            else
            Log.wtf("GmsClient", "Don't know how to handle this message.");
            _pc = 5;
            continue _sm;
          case 5:
            return;
        }
      }
  } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
}

}

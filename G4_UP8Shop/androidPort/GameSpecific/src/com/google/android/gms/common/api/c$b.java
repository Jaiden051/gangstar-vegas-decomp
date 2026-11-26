// Decompiled from classes.dex (SourceFile: c$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.api;

import android.util.Log;
class c$b extends android.os.Handler {
    // Fields
    final com.google.android.gms.common.api.c a;

    // Methods
    c$b(com.google.android.gms.common.api.c p0, android.os.Looper p1)
    {
      super(p1);
      this.a = p0;
    
    }

    public void handleMessage(android.os.Message p0)
    {
      try {
      if ( p0.what == 1 )
      {
        c.a(this.a).lock();
        try
        {
          if ( !this.a.g() && !this.a.h() )
            this.a.b();
        }
        finally
        {
          c.a(this.a).unlock();
        }
        return;
      }
      Log.wtf("GoogleApiClientImpl", "Don't know how to handle this message.");
      } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
    }

}

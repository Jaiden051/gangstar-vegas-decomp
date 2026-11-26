// Decompiled from classes.dex (SourceFile: a$c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.api;

import android.os.Looper;
import android.util.Log;
public class a$c<R extends com.google.android.gms.common.api.Result> extends android.os.Handler {
    // Methods
    public a$c()
    {
      this(Looper.getMainLooper());
    }

    public a$c(android.os.Looper p0)
    {
      super(p0);
    }

    private static <R extends com.google.android.gms.common.api.Result> void b(com.google.android.gms.common.api.ResultCallback<R> p0, R p1)
 throws android.os.RemoteException {
      try
      {
        p0.a(p1);
      }
      catch ( RuntimeException v2 )
      {
        a.a(p1);
        throw v2;
      }
    }

    public final void a()
    {
      this.removeMessages(2);
    }

    public final void a(com.google.android.gms.common.api.ResultCallback<R> p0, R p1)
    {
      this.sendMessage(this.obtainMessage(1, new android.util.Pair(p0, p1)));
    }

    public final void a(com.google.android.gms.common.api.a$a<R> p0, long p1)
    {
      this.sendMessageDelayed(this.obtainMessage(2, p0), p1);
    }

    public void handleMessage(android.os.Message p0)
    {
      try {
      android.util.Pair v2;
      com.google.android.gms.common.api.ResultCallback v3;
      com.google.android.gms.common.api.Result v4;
      switch ( p0.what )
      {
        case 1:
          v2 = (android.util.Pair)p0.obj;
          v3 = (com.google.android.gms.common.api.ResultCallback)v2.first;
          v4 = (com.google.android.gms.common.api.Result)v2.second;
          try
          {
            v3.a(v4);
          }
          catch ( RuntimeException v5 )
          {
            a.a(v4);
            throw v5;
          }
          return;
        case 2:
          a$a.a((com.google.android.gms.common.api.a$a)p0.obj);
          break;
        default:
          Log.wtf("GoogleApi", "Don't know how to handle this message.");
          break;
      }
      } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
    }

}

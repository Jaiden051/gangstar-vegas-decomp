// Decompiled from classes.dex (SourceFile: Batch.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.api;

public final class Batch extends com.google.android.gms.common.api.a$a {
    // Fields
    private int a;
    private boolean b;
    private boolean c;
    private final com.google.android.gms.common.api.PendingResult[] d;
    private final java.lang.Object e;

    // Methods
    private Batch(java.util.List<com.google.android.gms.common.api.PendingResult<?>> p0, android.os.Looper p1)
 throws android.os.RemoteException {
      super(new com.google.android.gms.common.api.a$c(p1));
      int i;
      com.google.android.gms.common.api.PendingResult v4;
      this.e = new Object();
      this.a = p0.size();
      this.d = new com.google.android.gms.common.api.PendingResult[this.a];
      for ( i = 0; i < p0.size(); ++i )
      {
        v4 = (com.google.android.gms.common.api.PendingResult)p0.get(i);
        this.d[i] = v4;
        v4.a((com.google.android.gms.common.api.PendingResult$a)new com.google.android.gms.common.api.Batch$1(this));
      }
    
    }

    /* synthetic */ Batch(java.util.List p0, android.os.Looper p1, int p2)
 throws android.os.RemoteException {
      this(p0, p1);
    }

    /* synthetic */ static Object a(com.google.android.gms.common.api.Batch p0)
    {
      return p0.e;
    }

    /* synthetic */ static boolean a(com.google.android.gms.common.api.Batch p0, boolean p1)
    {
      p0.c = p1;
      return p1;
    }

    /* synthetic */ static int b(com.google.android.gms.common.api.Batch p0)
    {
      int a;
      a = p0.a;
      p0.a = a - 1;
      return a;
    }

    private com.google.android.gms.common.api.BatchResult b(com.google.android.gms.common.api.Status p0)
    {
      return new com.google.android.gms.common.api.BatchResult(p0, this.d);
    }

    /* synthetic */ static boolean b(com.google.android.gms.common.api.Batch p0, boolean p1)
    {
      p0.b = p1;
      return p1;
    }

    /* synthetic */ static int c(com.google.android.gms.common.api.Batch p0)
    {
      return p0.a;
    }

    /* synthetic */ static boolean d(com.google.android.gms.common.api.Batch p0)
    {
      return p0.c;
    }

    /* synthetic */ static void e(com.google.android.gms.common.api.Batch p0)
 throws android.os.RemoteException {
      p0.a();
    }

    /* synthetic */ static boolean f(com.google.android.gms.common.api.Batch p0)
    {
      return p0.b;
    }

    /* synthetic */ static com.google.android.gms.common.api.PendingResult[] g(com.google.android.gms.common.api.Batch p0)
    {
      return p0.d;
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.common.api.BatchResult(p0, this.d);
    }

    public final void a()
 throws android.os.RemoteException {
      com.google.android.gms.common.api.PendingResult[] d;
      int v2;
      int i;
      super.a();
      d = this.d;
      v2 = d.length;
      for ( i = 0; i < v2; ++i )
        d[i].a();
    }

}

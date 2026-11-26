// Decompiled from classes.dex (SourceFile: en.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class en {
    // Fields
    private final java.lang.Runnable a;
    private volatile java.lang.Thread b;

    // Methods
    public en()
    {
      super();
      this.a = (Runnable)new com.google.android.gms.internal.en$1(this);
    }

    /* synthetic */ static Thread a(com.google.android.gms.internal.en p0, Thread p1)
 throws com.google.android.gms.internal.Decomp_do$a {
      p0.b = p1;
      return p1;
    }

    public abstract void A_() throws android.os.RemoteException;

    public abstract void a() throws com.google.android.gms.internal.Decomp_do$a, android.os.RemoteException;

    public final void e()
    {
      eo.execute(this.a);
    }

    public final void f()
 throws android.os.RemoteException {
      Thread b;
      Thread v2;
      this.A_();
      b = this.b;
      if ( b != null )
      {
        v2 = this.b;
        v2.interrupt();
      }
    }

}

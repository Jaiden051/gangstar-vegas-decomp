// Decompiled from classes.dex (SourceFile: ck$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class ck$a {
    // Fields
    private final java.lang.Runnable a;
    private volatile boolean b;

    // Methods
    public ck$a(com.google.android.gms.internal.ck p0)
    {
      super();
      this.b = false;
      this.a = (Runnable)new com.google.android.gms.internal.ck$a$1(this, p0);
    }

    /* synthetic */ static boolean a(com.google.android.gms.internal.ck$a p0)
    {
      return p0.b;
    }

    public final void a()
    {
      this.b = true;
      eu.a.removeCallbacks(this.a);
    }

    public final void b()
    {
      eu.a.postDelayed(this.a, 250);
    }

}

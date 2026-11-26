// Decompiled from classes.dex (SourceFile: z$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class z$a {
    // Fields
    private final android.os.Handler a;

    // Methods
    public z$a(android.os.Handler p0)
    {
      super();
      this.a = p0;
    }

    public final void a(Runnable p0)
    {
      this.a.removeCallbacks(p0);
    }

    public final boolean a(Runnable p0, long p1)
    {
      return this.a.postDelayed(p0, p1);
    }

}

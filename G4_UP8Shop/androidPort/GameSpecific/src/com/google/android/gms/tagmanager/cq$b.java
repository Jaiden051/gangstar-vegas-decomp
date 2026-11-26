// Decompiled from classes.dex (SourceFile: cq$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

public class cq$b {
    // Fields
    private final java.util.Map a;
    private com.google.android.gms.internal.d$a b;

    // Methods
    private cq$b()
    {
      super();
      this.a = new java.util.HashMap();
    }

    /* synthetic */ cq$b(int p0)
    {
      this();
    }

    public final com.google.android.gms.tagmanager.cq$a a()
    {
      return new com.google.android.gms.tagmanager.cq$a(this.a, this.b, 0);
    }

    public final com.google.android.gms.tagmanager.cq$b a(com.google.android.gms.internal.d$a p0)
    {
      this.b = p0;
      return this;
    }

    public final com.google.android.gms.tagmanager.cq$b a(String p0, com.google.android.gms.internal.d$a p1)
    {
      this.a.put(p0, p1);
      return this;
    }

}

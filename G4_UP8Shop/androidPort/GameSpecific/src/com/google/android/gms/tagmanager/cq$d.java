// Decompiled from classes.dex (SourceFile: cq$d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

public class cq$d {
    // Fields
    private final java.util.List a;
    private final java.util.Map b;
    private java.lang.String c;
    private int d;

    // Methods
    private cq$d()
    {
      super();
      this.a = new java.util.ArrayList();
      this.b = new java.util.HashMap();
      this.c = "";
      this.d = 0;
    }

    /* synthetic */ cq$d(int p0)
    {
      this();
    }

    public final com.google.android.gms.tagmanager.cq$c a()
    {
      return new com.google.android.gms.tagmanager.cq$c(this.a, this.b, this.c, this.d, 0);
    }

    public final com.google.android.gms.tagmanager.cq$d a(int p0)
    {
      this.d = p0;
      return this;
    }

    public final com.google.android.gms.tagmanager.cq$d a(com.google.android.gms.tagmanager.cq$a p0)
    {
      String v2;
      java.util.List v3;
      v2 = dh.j((com.google.android.gms.internal.d$a)p0.a().get(com.google.android.gms.internal.b.aN.toString()));
      v3 = (java.util.List)this.b.get(v2);
      if ( v3 == null )
      {
        v3 = new java.util.ArrayList();
        this.b.put(v2, v3);
      }
      v3.add(p0);
      return this;
    }

    public final com.google.android.gms.tagmanager.cq$d a(com.google.android.gms.tagmanager.cq$e p0)
    {
      this.a.add(p0);
      return this;
    }

    public final com.google.android.gms.tagmanager.cq$d a(String p0)
    {
      this.c = p0;
      return this;
    }

}

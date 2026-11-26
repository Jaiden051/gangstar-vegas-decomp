// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class c extends com.google.android.gms.tagmanager.aj {
    // Fields
    private static final java.lang.String a;
    private final com.google.android.gms.tagmanager.a b;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.b.toString();
    }

    public c(android.content.Context p0)
    {
      this(com.google.android.gms.tagmanager.a.J(p0));
    }

    private c(com.google.android.gms.tagmanager.a p0)
    {
      super(a, new String[0]);
      this.b = p0;
    }

    public final com.google.android.gms.internal.d$a a(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      return dh.r(Boolean.valueOf(!this.b.b()));
    }

    public final boolean a()
    {
      return false;
    }

}

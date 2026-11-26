// Decompiled from classes.dex (SourceFile: f.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class f extends com.google.android.gms.tagmanager.aj {
    // Fields
    private static final java.lang.String a;
    private final android.content.Context b;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.c.toString();
    }

    public f(android.content.Context p0)
    {
      super(a, new String[0]);
      this.b = p0;
    }

    public final com.google.android.gms.internal.d$a a(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      return dh.r(this.b.getPackageName());
    }

    public final boolean a()
    {
      return true;
    }

}

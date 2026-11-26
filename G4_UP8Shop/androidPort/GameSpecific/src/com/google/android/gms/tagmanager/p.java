// Decompiled from classes.dex (SourceFile: p.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class p extends com.google.android.gms.tagmanager.aj {
    // Fields
    private static final java.lang.String a;
    private final java.lang.String b;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.j.toString();
    }

    public p(String p0)
    {
      super(a, new String[0]);
      this.b = p0;
    }

    public final com.google.android.gms.internal.d$a a(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      if ( this.b != null )
        return dh.r(this.b);
      else
        return dh.mY();
    }

    public final boolean a()
    {
      return true;
    }

}

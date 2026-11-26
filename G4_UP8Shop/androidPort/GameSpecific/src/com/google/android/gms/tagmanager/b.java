// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class b extends com.google.android.gms.tagmanager.aj {
    // Fields
    private static final java.lang.String a;
    private final com.google.android.gms.tagmanager.a b;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.a.toString();
    }

    public b(android.content.Context p0)
    {
      this(com.google.android.gms.tagmanager.a.J(p0));
    }

    private b(com.google.android.gms.tagmanager.a p0)
    {
      super(a, new String[0]);
      this.b = p0;
    }

    public final com.google.android.gms.internal.d$a a(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      String v2; // RETVAL
    
      v2 = this.b.a();
      if ( v2 != null )
        return dh.r(v2);
      else
        return dh.mY();
    }

    public final boolean a()
    {
      return false;
    }

}

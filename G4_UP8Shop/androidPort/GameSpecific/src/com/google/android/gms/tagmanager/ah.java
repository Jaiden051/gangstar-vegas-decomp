// Decompiled from classes.dex (SourceFile: ah.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class ah extends com.google.android.gms.tagmanager.aj {
    // Fields
    private static final java.lang.String a;
    private final com.google.android.gms.tagmanager.cs b;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.o.toString();
    }

    public ah(com.google.android.gms.tagmanager.cs p0)
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

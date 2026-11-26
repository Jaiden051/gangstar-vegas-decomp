// Decompiled from classes.dex (SourceFile: ad$5.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class ad$5 implements com.google.android.gms.internal.bd {
    // Fields
    final com.google.android.gms.internal.ad a;

    // Methods
    ad$5(com.google.android.gms.internal.ad p0)
    {
      super();
      this.a = p0;
    
    }

    public final void a(com.google.android.gms.internal.ey p0, java.util.Map<String, String> p1)
    {
      boolean v3;
      if ( p1.containsKey("isVisible") )
      {
        v3 = "1".equals(p1.get("isVisible")) || "true".equals(p1.get("isVisible"));
        this.a.a(Boolean.valueOf(v3).booleanValue());
      }
    }

}

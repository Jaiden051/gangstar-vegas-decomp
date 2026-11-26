// Decompiled from classes.dex (SourceFile: y.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class y implements com.google.android.gms.internal.aa {
    // Fields
    private com.google.android.gms.internal.ey a;

    // Methods
    public y(com.google.android.gms.internal.ey p0)
    {
      super();
      this.a = p0;
    }

    public final void a(boolean p0)
    {
      java.util.Map v2;
      String v3;
      v2 = new java.util.HashMap();
      if ( p0 )
        v3 = "1";
      else
        v3 = "0";
      v2.put("isVisible", v3);
      this.a.a("onAdVisibilityChanged", v2);
    }

}

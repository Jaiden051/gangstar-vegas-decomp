// Decompiled from classes.dex (SourceFile: dc.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

abstract class dc extends com.google.android.gms.tagmanager.cc {
    // Methods
    public dc(String p0)
    {
      super(p0);
    }

    protected final boolean a(
            com.google.android.gms.internal.d$a p0,
            com.google.android.gms.internal.d$a p1,
            java.util.Map<String, com.google.android.gms.internal.d$a> p2)
    {
      String v4;
      String v5;
      v4 = dh.j(p0);
      v5 = dh.j(p1);
      return v4 != dh.mX() && v5 != dh.mX() && this.a(v4, v5, p2);
    }

    protected abstract boolean a(java.lang.String p0, java.lang.String p1, java.util.Map<String, com.google.android.gms.internal.d$a> p2);

}

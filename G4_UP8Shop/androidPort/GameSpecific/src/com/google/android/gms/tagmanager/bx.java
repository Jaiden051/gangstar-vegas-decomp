// Decompiled from classes.dex (SourceFile: bx.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

abstract class bx extends com.google.android.gms.tagmanager.cc {
    // Methods
    public bx(String p0)
    {
      super(p0);
    }

    protected final boolean a(
            com.google.android.gms.internal.d$a p0,
            com.google.android.gms.internal.d$a p1,
            java.util.Map<String, com.google.android.gms.internal.d$a> p2)
    {
      com.google.android.gms.tagmanager.dg v4;
      com.google.android.gms.tagmanager.dg v5;
      v4 = dh.k(p0);
      v5 = dh.k(p1);
      return v4 != dh.mW() && v5 != dh.mW() && this.a(v4, v5);
    }

    protected abstract boolean a(com.google.android.gms.tagmanager.dg p0, com.google.android.gms.tagmanager.dg p1);

}

// Decompiled from classes.dex (SourceFile: bx.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class bx implements com.google.android.gms.ads.mediation.MediationAdRequest {
    // Fields
    private final java.util.Date d;
    private final int e;
    private final java.util.Set f;
    private final boolean g;
    private final int h;

    // Methods
    public bx(java.util.Date p0, int p1, java.util.Set<String> p2, boolean p3, int p4)
    {
      super();
      this.d = p0;
      this.e = p1;
      this.f = p2;
      this.g = p3;
      this.h = p4;
    }

    public final java.util.Date a()
    {
      return this.d;
    }

    public final int b()
    {
      return this.e;
    }

    public final java.util.Set<String> c()
    {
      return this.f;
    }

    public final int d()
    {
      return this.h;
    }

    public final boolean e()
    {
      return this.g;
    }

}

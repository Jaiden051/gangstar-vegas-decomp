// Decompiled from classes.dex (SourceFile: ax.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class ax implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.ay CREATOR;
    public final int a;
    public final int b;
    public final int c;
    public final int d;
    public final int e;
    public final int f;
    public final int g;
    public final int h;
    public final int i;
    public final java.lang.String j;
    public final int k;
    public final java.lang.String l;
    public final int m;
    public final int n;
    public final java.lang.String o;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.ay();
    }

    ax(
            int p0,
            int p1,
            int p2,
            int p3,
            int p4,
            int p5,
            int p6,
            int p7,
            int p8,
            String p9,
            int p10,
            String p11,
            int p12,
            int p13,
            String p14)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
      this.f = p5;
      this.g = p6;
      this.h = p7;
      this.i = p8;
      this.j = p9;
      this.k = p10;
      this.l = p11;
      this.m = p12;
      this.n = p13;
      this.o = p14;
    }

    public ax(com.google.android.gms.ads.search.SearchAdRequest p0)
    {
      super();
      this.a = 1;
      this.b = p0.a();
      this.c = p0.b();
      this.d = p0.c();
      this.e = p0.d();
      this.f = p0.e();
      this.g = p0.f();
      this.h = p0.g();
      this.i = p0.h();
      this.j = p0.i();
      this.k = p0.j();
      this.l = p0.k();
      this.m = p0.l();
      this.n = p0.m();
      this.o = p0.n();
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      ay.a(this, p0, p1);
    }

}

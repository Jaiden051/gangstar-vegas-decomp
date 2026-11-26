// Decompiled from classes.dex (SourceFile: ci.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class ci implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.ch CREATOR;
    public final int a;
    public final com.google.android.gms.internal.cf b;
    public final com.google.android.gms.internal.u c;
    public final com.google.android.gms.internal.cj d;
    public final com.google.android.gms.internal.ey e;
    public final com.google.android.gms.internal.bb f;
    public final java.lang.String g;
    public final boolean h;
    public final java.lang.String i;
    public final com.google.android.gms.internal.cm j;
    public final int k;
    public final int l;
    public final java.lang.String m;
    public final com.google.android.gms.internal.ew n;
    public final com.google.android.gms.internal.be o;
    public final java.lang.String p;
    public final com.google.android.gms.internal.w q;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.ch();
    }

    ci(
            int p0,
            com.google.android.gms.internal.cf p1,
            android.os.IBinder p2,
            android.os.IBinder p3,
            android.os.IBinder p4,
            android.os.IBinder p5,
            String p6,
            boolean p7,
            String p8,
            android.os.IBinder p9,
            int p10,
            int p11,
            String p12,
            com.google.android.gms.internal.ew p13,
            android.os.IBinder p14,
            String p15,
            com.google.android.gms.internal.w p16)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = (com.google.android.gms.internal.u)com.google.android.gms.dynamic.e.e(com.google.android.gms.dynamic.d$a.ag(p2));
      this.d = (com.google.android.gms.internal.cj)com.google.android.gms.dynamic.e.e(com.google.android.gms.dynamic.d$a.ag(p3));
      this.e = (com.google.android.gms.internal.ey)com.google.android.gms.dynamic.e.e(com.google.android.gms.dynamic.d$a.ag(p4));
      this.f = (com.google.android.gms.internal.bb)com.google.android.gms.dynamic.e.e(com.google.android.gms.dynamic.d$a.ag(p5));
      this.g = p6;
      this.h = p7;
      this.i = p8;
      this.j = (com.google.android.gms.internal.cm)com.google.android.gms.dynamic.e.e(com.google.android.gms.dynamic.d$a.ag(p9));
      this.k = p10;
      this.l = p11;
      this.m = p12;
      this.n = p13;
      this.o = (com.google.android.gms.internal.be)com.google.android.gms.dynamic.e.e(com.google.android.gms.dynamic.d$a.ag(p14));
      this.p = p15;
      this.q = p16;
    }

    public ci(
            com.google.android.gms.internal.cf p0,
            com.google.android.gms.internal.u p1,
            com.google.android.gms.internal.cj p2,
            com.google.android.gms.internal.cm p3,
            com.google.android.gms.internal.ew p4)
    {
      super();
      this.a = 4;
      this.b = p0;
      this.c = p1;
      this.d = p2;
      this.e = null;
      this.f = null;
      this.g = null;
      this.h = false;
      this.i = null;
      this.j = p3;
      this.k = -1;
      this.l = 4;
      this.m = null;
      this.n = p4;
      this.o = null;
      this.p = null;
      this.q = null;
    }

    public ci(
            com.google.android.gms.internal.u p0,
            com.google.android.gms.internal.cj p1,
            com.google.android.gms.internal.bb p2,
            com.google.android.gms.internal.cm p3,
            com.google.android.gms.internal.ey p4,
            boolean p5,
            int p6,
            String p7,
            com.google.android.gms.internal.ew p8,
            com.google.android.gms.internal.be p9)
    {
      super();
      this.a = 4;
      this.b = null;
      this.c = p0;
      this.d = p1;
      this.e = p4;
      this.f = p2;
      this.g = null;
      this.h = p5;
      this.i = null;
      this.j = p3;
      this.k = p6;
      this.l = 3;
      this.m = p7;
      this.n = p8;
      this.o = p9;
      this.p = null;
      this.q = null;
    }

    public ci(
            com.google.android.gms.internal.u p0,
            com.google.android.gms.internal.cj p1,
            com.google.android.gms.internal.bb p2,
            com.google.android.gms.internal.cm p3,
            com.google.android.gms.internal.ey p4,
            boolean p5,
            int p6,
            String p7,
            String p8,
            com.google.android.gms.internal.ew p9,
            com.google.android.gms.internal.be p10)
    {
      super();
      this.a = 4;
      this.b = null;
      this.c = p0;
      this.d = p1;
      this.e = p4;
      this.f = p2;
      this.g = p8;
      this.h = p5;
      this.i = p7;
      this.j = p3;
      this.k = p6;
      this.l = 3;
      this.m = null;
      this.n = p9;
      this.o = p10;
      this.p = null;
      this.q = null;
    }

    public ci(
            com.google.android.gms.internal.u p0,
            com.google.android.gms.internal.cj p1,
            com.google.android.gms.internal.cm p2,
            com.google.android.gms.internal.ey p3,
            int p4,
            com.google.android.gms.internal.ew p5,
            String p6,
            com.google.android.gms.internal.w p7)
    {
      super();
      this.a = 4;
      this.b = null;
      this.c = p0;
      this.d = p1;
      this.e = p3;
      this.f = null;
      this.g = null;
      this.h = false;
      this.i = null;
      this.j = p2;
      this.k = p4;
      this.l = 1;
      this.m = null;
      this.n = p5;
      this.o = null;
      this.p = p6;
      this.q = p7;
    }

    public ci(
            com.google.android.gms.internal.u p0,
            com.google.android.gms.internal.cj p1,
            com.google.android.gms.internal.cm p2,
            com.google.android.gms.internal.ey p3,
            boolean p4,
            int p5,
            com.google.android.gms.internal.ew p6)
    {
      super();
      this.a = 4;
      this.b = null;
      this.c = p0;
      this.d = p1;
      this.e = p3;
      this.f = null;
      this.g = null;
      this.h = p4;
      this.i = null;
      this.j = p2;
      this.k = p5;
      this.l = 2;
      this.m = null;
      this.n = p6;
      this.o = null;
      this.p = null;
      this.q = null;
    }

    public static com.google.android.gms.internal.ci a(android.content.Intent p0)
    {
      android.os.Bundle BundleExtra;
      try
      {
        BundleExtra = p0.getBundleExtra("com.google.android.gms.ads.inernal.overlay.AdOverlayInfo");
        BundleExtra.setClassLoader(com.google.android.gms.internal.ci.class.getClassLoader());
        return (com.google.android.gms.internal.ci)BundleExtra.getParcelable("com.google.android.gms.ads.inernal.overlay.AdOverlayInfo");
      }
      catch ( Exception e )
      {
        return null;
      }
    }

    public static void a(android.content.Intent p0, com.google.android.gms.internal.ci p1)
    {
      android.os.Bundle v2;
      v2 = new android.os.Bundle(1);
      v2.putParcelable("com.google.android.gms.ads.inernal.overlay.AdOverlayInfo", (android.os.Parcelable)p1);
      p0.putExtra("com.google.android.gms.ads.inernal.overlay.AdOverlayInfo", v2);
    }

    final android.os.IBinder a()
    {
      return com.google.android.gms.dynamic.e.h(this.c).asBinder();
    }

    final android.os.IBinder b()
    {
      return com.google.android.gms.dynamic.e.h(this.d).asBinder();
    }

    final android.os.IBinder c()
    {
      return com.google.android.gms.dynamic.e.h(this.e).asBinder();
    }

    final android.os.IBinder d()
    {
      return com.google.android.gms.dynamic.e.h(this.f).asBinder();
    }

    public final int describeContents()
    {
      return 0;
    }

    final android.os.IBinder e()
    {
      return com.google.android.gms.dynamic.e.h(this.o).asBinder();
    }

    final android.os.IBinder f()
    {
      return com.google.android.gms.dynamic.e.h(this.j).asBinder();
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      ch.a(this, p0, p1);
    }

}

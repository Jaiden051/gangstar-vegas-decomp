// Decompiled from classes.dex (SourceFile: LoyaltyWalletObject.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

import com.google.android.gms.internal.ih;
public final class LoyaltyWalletObject implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    java.lang.String a;
    java.lang.String b;
    java.lang.String c;
    java.lang.String d;
    java.lang.String e;
    java.lang.String f;
    java.lang.String g;
    java.lang.String h;
    java.lang.String i;
    java.lang.String j;
    int k;
    java.util.ArrayList l;
    com.google.android.gms.wallet.wobs.l m;
    java.util.ArrayList n;
    java.lang.String o;
    java.lang.String p;
    java.util.ArrayList q;
    boolean r;
    java.util.ArrayList s;
    java.util.ArrayList t;
    java.util.ArrayList u;
    com.google.android.gms.wallet.wobs.f v;
    private final int w;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wallet.j();
    }

    LoyaltyWalletObject()
    {
      super();
      this.w = 4;
      this.l = ih.fV();
      this.n = ih.fV();
      this.q = ih.fV();
      this.s = ih.fV();
      this.t = ih.fV();
      this.u = ih.fV();
    }

    LoyaltyWalletObject(
            int p0,
            String p1,
            String p2,
            String p3,
            String p4,
            String p5,
            String p6,
            String p7,
            String p8,
            String p9,
            String p10,
            int p11,
            java.util.ArrayList<com.google.android.gms.wallet.wobs.p> p12,
            com.google.android.gms.wallet.wobs.l p13,
            java.util.ArrayList<com.google.android.gms.maps.model.LatLng> p14,
            String p15,
            String p16,
            java.util.ArrayList<com.google.android.gms.wallet.wobs.d> p17,
            boolean p18,
            java.util.ArrayList<com.google.android.gms.wallet.wobs.n> p19,
            java.util.ArrayList<com.google.android.gms.wallet.wobs.j> p20,
            java.util.ArrayList<com.google.android.gms.wallet.wobs.n> p21,
            com.google.android.gms.wallet.wobs.f p22)
    {
      super();
      this.w = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p4;
      this.e = p5;
      this.f = p6;
      this.g = p7;
      this.h = p8;
      this.i = p9;
      this.j = p10;
      this.k = p11;
      this.l = p12;
      this.m = p13;
      this.n = p14;
      this.o = p15;
      this.p = p16;
      this.q = p17;
      this.r = p18;
      this.s = p19;
      this.t = p20;
      this.u = p21;
      this.v = p22;
    }

    private String b()
    {
      return this.a;
    }

    private String c()
    {
      return this.b;
    }

    private String d()
    {
      return this.c;
    }

    private String e()
    {
      return this.d;
    }

    private String f()
    {
      return this.e;
    }

    private String g()
    {
      return this.f;
    }

    private String h()
    {
      return this.g;
    }

    private String i()
    {
      return this.h;
    }

    public final int a()
    {
      return this.w;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.wallet.j.a(this, p0, p1);
    }

}

// Decompiled from classes.dex (SourceFile: CommonWalletObject.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet.wobs;

import com.google.android.gms.internal.ih;
public class CommonWalletObject implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
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
    int i;
    java.util.ArrayList j;
    com.google.android.gms.wallet.wobs.l k;
    java.util.ArrayList l;
    java.lang.String m;
    java.lang.String n;
    java.util.ArrayList o;
    boolean p;
    java.util.ArrayList q;
    java.util.ArrayList r;
    java.util.ArrayList s;
    private final int t;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wallet.wobs.a();
    }

    CommonWalletObject()
    {
      super();
      this.t = 1;
      this.j = ih.fV();
      this.l = ih.fV();
      this.o = ih.fV();
      this.q = ih.fV();
      this.r = ih.fV();
      this.s = ih.fV();
    }

    CommonWalletObject(
            int p0,
            String p1,
            String p2,
            String p3,
            String p4,
            String p5,
            String p6,
            String p7,
            String p8,
            int p9,
            java.util.ArrayList<com.google.android.gms.wallet.wobs.p> p10,
            com.google.android.gms.wallet.wobs.l p11,
            java.util.ArrayList<com.google.android.gms.maps.model.LatLng> p12,
            String p13,
            String p14,
            java.util.ArrayList<com.google.android.gms.wallet.wobs.d> p15,
            boolean p16,
            java.util.ArrayList<com.google.android.gms.wallet.wobs.n> p17,
            java.util.ArrayList<com.google.android.gms.wallet.wobs.j> p18,
            java.util.ArrayList<com.google.android.gms.wallet.wobs.n> p19)
    {
      super();
      this.t = p0;
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
    }

    public static com.google.android.gms.wallet.wobs.CommonWalletObject$a nf()
    {
      com.google.android.gms.wallet.wobs.CommonWalletObject v0;
      v0 = new com.google.android.gms.wallet.wobs.CommonWalletObject();
      v0.getClass();
      return new com.google.android.gms.wallet.wobs.CommonWalletObject$a(v0, 0);
    }

    public final int a()
    {
      return this.t;
    }

    public final String b()
    {
      return this.a;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.wallet.wobs.a.a(this, p0, p1);
    }

}

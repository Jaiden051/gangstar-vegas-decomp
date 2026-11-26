// Decompiled from classes.dex (SourceFile: g.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet.wobs;

public final class g implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    int a;
    java.lang.String b;
    double c;
    java.lang.String d;
    long e;
    int f;
    private final int g;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wallet.wobs.h();
    }

    g()
    {
      super();
      this.g = 1;
      this.f = -1;
      this.a = -1;
      this.c = -1.0;
    }

    g(int p0, int p1, String p2, double p3, String p5, long p6, int p8)
    {
      super();
      this.g = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p5;
      this.e = p6;
      this.f = p8;
    }

    public final int a()
    {
      return this.g;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.wallet.wobs.h.a(this, p0, p1);
    }

}

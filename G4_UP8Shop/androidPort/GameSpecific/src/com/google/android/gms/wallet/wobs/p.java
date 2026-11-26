// Decompiled from classes.dex (SourceFile: p.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet.wobs;

public final class p implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    java.lang.String a;
    java.lang.String b;
    com.google.android.gms.wallet.wobs.l c;
    com.google.android.gms.wallet.wobs.n d;
    com.google.android.gms.wallet.wobs.n e;
    private final int f;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wallet.wobs.q();
    }

    p()
    {
      super();
      this.f = 1;
    }

    p(
            int p0,
            String p1,
            String p2,
            com.google.android.gms.wallet.wobs.l p3,
            com.google.android.gms.wallet.wobs.n p4,
            com.google.android.gms.wallet.wobs.n p5)
    {
      super();
      this.f = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p4;
      this.e = p5;
    }

    public final int a()
    {
      return this.f;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.wallet.wobs.q.a(this, p0, p1);
    }

}

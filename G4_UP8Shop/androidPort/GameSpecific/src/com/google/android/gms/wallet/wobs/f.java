// Decompiled from classes.dex (SourceFile: f.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet.wobs;

public final class f implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    java.lang.String a;
    com.google.android.gms.wallet.wobs.g b;
    java.lang.String c;
    com.google.android.gms.wallet.wobs.l d;
    private final int e;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wallet.wobs.i();
    }

    f()
    {
      super();
      this.e = 1;
    }

    f(int p0, String p1, com.google.android.gms.wallet.wobs.g p2, String p3, com.google.android.gms.wallet.wobs.l p4)
    {
      super();
      this.e = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p4;
    }

    public final int a()
    {
      return this.e;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.wallet.wobs.i.a(this, p0, p1);
    }

}

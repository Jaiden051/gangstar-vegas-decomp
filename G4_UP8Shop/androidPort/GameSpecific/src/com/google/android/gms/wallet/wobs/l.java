// Decompiled from classes.dex (SourceFile: l.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet.wobs;

public final class l implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    long a;
    long b;
    private final int c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wallet.wobs.m();
    }

    l()
    {
      super();
      this.c = 1;
    }

    l(int p0, long p1, long p3)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = p3;
    }

    public final int a()
    {
      return this.c;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.wallet.wobs.m.a(this, p0, p1);
    }

}

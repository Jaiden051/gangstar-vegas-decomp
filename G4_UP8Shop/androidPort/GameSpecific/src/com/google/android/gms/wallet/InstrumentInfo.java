// Decompiled from classes.dex (SourceFile: InstrumentInfo.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

public final class InstrumentInfo implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    private final int a;
    private java.lang.String b;
    private java.lang.String c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wallet.h();
    }

    InstrumentInfo(int p0, String p1, String p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    public final int a()
    {
      return this.a;
    }

    public final String b()
    {
      return this.b;
    }

    public final String c()
    {
      return this.c;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.wallet.h.a(this, p0, p1);
    }

}

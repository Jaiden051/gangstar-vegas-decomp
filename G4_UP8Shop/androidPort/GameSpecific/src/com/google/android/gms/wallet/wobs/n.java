// Decompiled from classes.dex (SourceFile: n.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet.wobs;

public final class n implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    java.lang.String a;
    java.lang.String b;
    private final int c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wallet.wobs.o();
    }

    n()
    {
      super();
      this.c = 1;
    }

    n(int p0, String p1, String p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = p2;
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
      com.google.android.gms.wallet.wobs.o.a(this, p0, p1);
    }

}

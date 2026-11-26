// Decompiled from classes.dex (SourceFile: ProxyCard.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

public final class ProxyCard implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    java.lang.String a;
    java.lang.String b;
    int c;
    int d;
    private final int e;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wallet.o();
    }

    ProxyCard(int p0, String p1, String p2, int p3, int p4)
    {
      super();
      this.e = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p4;
    }

    private String b()
    {
      return this.a;
    }

    private String c()
    {
      return this.b;
    }

    private int d()
    {
      return this.c;
    }

    private int e()
    {
      return this.d;
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
      com.google.android.gms.wallet.o.a(this, p0, p1);
    }

}

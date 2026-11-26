// Decompiled from classes.dex (SourceFile: FullWalletRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

public final class FullWalletRequest implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    java.lang.String a;
    java.lang.String b;
    com.google.android.gms.wallet.Cart c;
    private final int d;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wallet.g();
    }

    FullWalletRequest()
    {
      super();
      this.d = 1;
    }

    FullWalletRequest(int p0, String p1, String p2, com.google.android.gms.wallet.Cart p3)
    {
      super();
      this.d = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
    }

    private String b()
    {
      return this.a;
    }

    private String c()
    {
      return this.b;
    }

    private com.google.android.gms.wallet.Cart d()
    {
      return this.c;
    }

    public static com.google.android.gms.wallet.FullWalletRequest$Builder newBuilder()
    {
      com.google.android.gms.wallet.FullWalletRequest v0;
      v0 = new com.google.android.gms.wallet.FullWalletRequest();
      v0.getClass();
      return new com.google.android.gms.wallet.FullWalletRequest$Builder(v0, 0);
    }

    public final int a()
    {
      return this.d;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.wallet.g.a(this, p0, p1);
    }

}

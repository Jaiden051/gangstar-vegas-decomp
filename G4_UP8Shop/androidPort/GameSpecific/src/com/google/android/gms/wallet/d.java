// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

public final class d implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    com.google.android.gms.wallet.LoyaltyWalletObject a;
    com.google.android.gms.wallet.OfferWalletObject b;
    private final int c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wallet.e();
    }

    d()
    {
      super();
      this.c = 2;
    }

    d(int p0, com.google.android.gms.wallet.LoyaltyWalletObject p1, com.google.android.gms.wallet.OfferWalletObject p2)
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
      com.google.android.gms.wallet.e.a(this, p0, p1);
    }

}

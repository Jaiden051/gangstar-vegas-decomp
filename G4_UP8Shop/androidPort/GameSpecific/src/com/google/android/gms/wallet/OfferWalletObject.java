// Decompiled from classes.dex (SourceFile: OfferWalletObject.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

import com.google.android.gms.wallet.wobs.CommonWalletObject;
public final class OfferWalletObject implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    java.lang.String a;
    java.lang.String b;
    com.google.android.gms.wallet.wobs.CommonWalletObject c;
    private final int d;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wallet.n();
    }

    OfferWalletObject()
    {
      super();
      this.d = 3;
    }

    OfferWalletObject(int p0, String p1, String p2, com.google.android.gms.wallet.wobs.CommonWalletObject p3)
    {
      super();
      this.d = p0;
      this.b = p2;
      if ( p0 >= 3 )
        this.c = p3;
      else
        this.c = CommonWalletObject.nf().a(p1).a();
    }

    private String b()
    {
      return this.c.b();
    }

    private String c()
    {
      return this.b;
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
      com.google.android.gms.wallet.n.a(this, p0, p1);
    }

}

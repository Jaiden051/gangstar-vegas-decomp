// Decompiled from classes.dex (SourceFile: MaskedWallet.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

import com.google.android.gms.internal.hn;
public final class MaskedWallet implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    java.lang.String a;
    java.lang.String b;
    java.lang.String[] c;
    java.lang.String d;
    com.google.android.gms.wallet.Address e;
    com.google.android.gms.wallet.Address f;
    com.google.android.gms.wallet.LoyaltyWalletObject[] g;
    com.google.android.gms.wallet.OfferWalletObject[] h;
    com.google.android.gms.identity.intents.model.UserAddress i;
    com.google.android.gms.identity.intents.model.UserAddress j;
    com.google.android.gms.wallet.InstrumentInfo[] k;
    private final int l;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wallet.k();
    }

    private MaskedWallet()
    {
      super();
      this.l = 2;
    }

    MaskedWallet(
            int p0,
            String p1,
            String p2,
            String[] p3,
            String p4,
            com.google.android.gms.wallet.Address p5,
            com.google.android.gms.wallet.Address p6,
            com.google.android.gms.wallet.LoyaltyWalletObject[] p7,
            com.google.android.gms.wallet.OfferWalletObject[] p8,
            com.google.android.gms.identity.intents.model.UserAddress p9,
            com.google.android.gms.identity.intents.model.UserAddress p10,
            com.google.android.gms.wallet.InstrumentInfo[] p11)
    {
      super();
      this.l = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p4;
      this.e = p5;
      this.f = p6;
      this.g = (com.google.android.gms.wallet.LoyaltyWalletObject[])p7;
      this.h = (com.google.android.gms.wallet.OfferWalletObject[])p8;
      this.i = p9;
      this.j = p10;
      this.k = (com.google.android.gms.wallet.InstrumentInfo[])p11;
    }

    private String b()
    {
      return this.a;
    }

    private String c()
    {
      return this.b;
    }

    private String[] d()
    {
      return this.c;
    }

    private com.google.android.gms.wallet.InstrumentInfo[] e()
    {
      return this.k;
    }

    private String f()
    {
      return this.d;
    }

    private com.google.android.gms.wallet.Address g()
    {
      return this.e;
    }

    private com.google.android.gms.wallet.Address h()
    {
      return this.f;
    }

    private com.google.android.gms.wallet.LoyaltyWalletObject[] i()
    {
      return this.g;
    }

    private com.google.android.gms.wallet.OfferWalletObject[] j()
    {
      return this.h;
    }

    private com.google.android.gms.identity.intents.model.UserAddress k()
    {
      return this.i;
    }

    private com.google.android.gms.identity.intents.model.UserAddress l()
    {
      return this.j;
    }

    public static com.google.android.gms.wallet.MaskedWallet$Builder nb()
    {
      com.google.android.gms.wallet.MaskedWallet v0;
      v0 = new com.google.android.gms.wallet.MaskedWallet();
      v0.getClass();
      return new com.google.android.gms.wallet.MaskedWallet$Builder(v0, 0);
    }

    public static com.google.android.gms.wallet.MaskedWallet$Builder newBuilderFrom(
            com.google.android.gms.wallet.MaskedWallet p0)
    {
      hn.f(p0);
      return nb().a(p0.a).b(p0.b).a(p0.c).a(p0.k).c(p0.d).a(p0.g).a(p0.h).a(p0.i).b(p0.j);
    }

    public final int a()
    {
      return this.l;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.wallet.k.a(this, p0, p1);
    }

}

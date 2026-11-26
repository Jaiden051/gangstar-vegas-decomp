// Decompiled from classes.dex (SourceFile: MaskedWallet$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

public final class MaskedWallet$Builder {
    // Fields
    final com.google.android.gms.wallet.MaskedWallet a;

    // Methods
    private MaskedWallet$Builder(com.google.android.gms.wallet.MaskedWallet p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ MaskedWallet$Builder(com.google.android.gms.wallet.MaskedWallet p0, int p1)
    {
      this(p0);
    }

    private com.google.android.gms.wallet.MaskedWallet$Builder a(
            com.google.android.gms.wallet.Address p0)
    {
      this.a.e = p0;
      return this;
    }

    private com.google.android.gms.wallet.MaskedWallet a()
    {
      return this.a;
    }

    private com.google.android.gms.wallet.MaskedWallet$Builder b(
            com.google.android.gms.wallet.Address p0)
    {
      this.a.f = p0;
      return this;
    }

    public final com.google.android.gms.wallet.MaskedWallet$Builder a(
            com.google.android.gms.identity.intents.model.UserAddress p0)
    {
      this.a.i = p0;
      return this;
    }

    public final com.google.android.gms.wallet.MaskedWallet$Builder a(String p0)
    {
      this.a.a = p0;
      return this;
    }

    public final com.google.android.gms.wallet.MaskedWallet$Builder a(
            com.google.android.gms.wallet.InstrumentInfo[] p0)
    {
      this.a.k = (com.google.android.gms.wallet.InstrumentInfo[])p0;
      return this;
    }

    public final com.google.android.gms.wallet.MaskedWallet$Builder a(
            com.google.android.gms.wallet.LoyaltyWalletObject[] p0)
    {
      this.a.g = (com.google.android.gms.wallet.LoyaltyWalletObject[])p0;
      return this;
    }

    public final com.google.android.gms.wallet.MaskedWallet$Builder a(
            com.google.android.gms.wallet.OfferWalletObject[] p0)
    {
      this.a.h = (com.google.android.gms.wallet.OfferWalletObject[])p0;
      return this;
    }

    public final com.google.android.gms.wallet.MaskedWallet$Builder a(String[] p0)
    {
      this.a.c = p0;
      return this;
    }

    public final com.google.android.gms.wallet.MaskedWallet$Builder b(
            com.google.android.gms.identity.intents.model.UserAddress p0)
    {
      this.a.j = p0;
      return this;
    }

    public final com.google.android.gms.wallet.MaskedWallet$Builder b(String p0)
    {
      this.a.b = p0;
      return this;
    }

    public final com.google.android.gms.wallet.MaskedWallet$Builder c(String p0)
    {
      this.a.d = p0;
      return this;
    }

}

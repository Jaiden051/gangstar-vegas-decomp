// Decompiled from classes.dex (SourceFile: MaskedWalletRequest$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

public final class MaskedWalletRequest$Builder {
    // Fields
    final com.google.android.gms.wallet.MaskedWalletRequest a;

    // Methods
    private MaskedWalletRequest$Builder(com.google.android.gms.wallet.MaskedWalletRequest p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ MaskedWalletRequest$Builder(com.google.android.gms.wallet.MaskedWalletRequest p0, int p1)
    {
      this(p0);
    }

    private com.google.android.gms.wallet.MaskedWalletRequest$Builder a(
            com.google.android.gms.identity.intents.model.CountrySpecification p0)
    {
      if ( this.a.n == null )
        this.a.n = new java.util.ArrayList();
      this.a.n.add(p0);
      return this;
    }

    private com.google.android.gms.wallet.MaskedWalletRequest$Builder a(
            com.google.android.gms.wallet.Cart p0)
    {
      this.a.h = p0;
      return this;
    }

    private com.google.android.gms.wallet.MaskedWalletRequest$Builder a(String p0)
    {
      this.a.a = p0;
      return this;
    }

    private com.google.android.gms.wallet.MaskedWalletRequest$Builder a(
            java.util.Collection<com.google.android.gms.identity.intents.model.CountrySpecification> p0)
    {
      if ( p0 != null )
      {
        if ( this.a.n == null )
          this.a.n = new java.util.ArrayList();
        this.a.n.addAll(p0);
      }
      return this;
    }

    private com.google.android.gms.wallet.MaskedWalletRequest$Builder a(boolean p0)
    {
      this.a.b = p0;
      return this;
    }

    private com.google.android.gms.wallet.MaskedWalletRequest a()
    {
      return this.a;
    }

    private com.google.android.gms.wallet.MaskedWalletRequest$Builder b(String p0)
    {
      this.a.e = p0;
      return this;
    }

    private com.google.android.gms.wallet.MaskedWalletRequest$Builder b(boolean p0)
    {
      this.a.c = p0;
      return this;
    }

    private com.google.android.gms.wallet.MaskedWalletRequest$Builder c(String p0)
    {
      this.a.f = p0;
      return this;
    }

    private com.google.android.gms.wallet.MaskedWalletRequest$Builder c(boolean p0)
    {
      this.a.d = p0;
      return this;
    }

    private com.google.android.gms.wallet.MaskedWalletRequest$Builder d(String p0)
    {
      this.a.g = p0;
      return this;
    }

    private com.google.android.gms.wallet.MaskedWalletRequest$Builder d(boolean p0)
    {
      this.a.i = p0;
      return this;
    }

    private com.google.android.gms.wallet.MaskedWalletRequest$Builder e(boolean p0)
    {
      this.a.j = p0;
      return this;
    }

    private com.google.android.gms.wallet.MaskedWalletRequest$Builder f(boolean p0)
    {
      this.a.l = p0;
      return this;
    }

    private com.google.android.gms.wallet.MaskedWalletRequest$Builder g(boolean p0)
    {
      this.a.m = p0;
      return this;
    }

}

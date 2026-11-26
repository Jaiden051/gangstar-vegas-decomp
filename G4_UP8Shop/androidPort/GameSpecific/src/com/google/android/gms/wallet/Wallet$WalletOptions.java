// Decompiled from classes.dex (SourceFile: Wallet$WalletOptions.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

public final class Wallet$WalletOptions implements com.google.android.gms.common.api.Api$ApiOptions$HasOptions {
    // Fields
    public final int a;
    public final int b;

    // Methods
    private Wallet$WalletOptions()
    {
      this(new com.google.android.gms.wallet.Wallet$WalletOptions$Builder());
    }

    /* synthetic */ Wallet$WalletOptions(int p0)
    {
      this();
    }

    private Wallet$WalletOptions(com.google.android.gms.wallet.Wallet$WalletOptions$Builder p0)
    {
      super();
      this.a = Wallet$WalletOptions$Builder.a(p0);
      this.b = Wallet$WalletOptions$Builder.b(p0);
    }

    /* synthetic */ Wallet$WalletOptions(com.google.android.gms.wallet.Wallet$WalletOptions$Builder p0, int p1)
    {
      this(p0);
    }

}

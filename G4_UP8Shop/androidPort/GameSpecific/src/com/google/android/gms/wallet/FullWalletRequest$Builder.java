// Decompiled from classes.dex (SourceFile: FullWalletRequest$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

public final class FullWalletRequest$Builder {
    // Fields
    final com.google.android.gms.wallet.FullWalletRequest a;

    // Methods
    private FullWalletRequest$Builder(com.google.android.gms.wallet.FullWalletRequest p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ FullWalletRequest$Builder(com.google.android.gms.wallet.FullWalletRequest p0, int p1)
    {
      this(p0);
    }

    private com.google.android.gms.wallet.FullWalletRequest$Builder a(
            com.google.android.gms.wallet.Cart p0)
    {
      this.a.c = p0;
      return this;
    }

    private com.google.android.gms.wallet.FullWalletRequest$Builder a(String p0)
    {
      this.a.a = p0;
      return this;
    }

    private com.google.android.gms.wallet.FullWalletRequest a()
    {
      return this.a;
    }

    private com.google.android.gms.wallet.FullWalletRequest$Builder b(String p0)
    {
      this.a.b = p0;
      return this;
    }

}

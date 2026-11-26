// Decompiled from classes.dex (SourceFile: Wallet$WalletOptions$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

import java.util.Locale;
public final class Wallet$WalletOptions$Builder {
    // Fields
    private int a;
    private int b;

    // Methods
    public Wallet$WalletOptions$Builder()
    {
      super();
      this.a = 0;
      this.b = 0;
    }

    /* synthetic */ static int a(
            com.google.android.gms.wallet.Wallet$WalletOptions$Builder p0)
    {
      return p0.a;
    }

    private com.google.android.gms.wallet.Wallet$WalletOptions$Builder a(int p0)
    {
      Object[] v3;
      if ( p0 != 0 && p0 != 2 && p0 != 1 )
      {
        v3 = new Object[1];
        v3[0] = Integer.valueOf(p0);
        throw new IllegalArgumentException(String.format(Locale.US, "Invalid environment value %d", v3));
      }
      this.a = p0;
      return this;
    }

    private com.google.android.gms.wallet.Wallet$WalletOptions a()
    {
      return new com.google.android.gms.wallet.Wallet$WalletOptions(this, 0);
    }

    /* synthetic */ static int b(
            com.google.android.gms.wallet.Wallet$WalletOptions$Builder p0)
    {
      return p0.b;
    }

    private com.google.android.gms.wallet.Wallet$WalletOptions$Builder b(int p0)
    {
      Object[] v3;
      if ( p0 != 0 && p0 != 1 )
      {
        v3 = new Object[1];
        v3[0] = Integer.valueOf(p0);
        throw new IllegalArgumentException(String.format(Locale.US, "Invalid theme value %d", v3));
      }
      this.b = p0;
      return this;
    }

}

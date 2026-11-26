// Decompiled from classes.dex (SourceFile: WalletFragmentInitParams$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet.fragment;

import com.google.android.gms.internal.hn;
import com.google.android.gms.wallet.MaskedWallet;
import com.google.android.gms.wallet.MaskedWalletRequest;
public final class WalletFragmentInitParams$Builder {
    // Fields
    final com.google.android.gms.wallet.fragment.WalletFragmentInitParams a;

    // Methods
    private WalletFragmentInitParams$Builder(com.google.android.gms.wallet.fragment.WalletFragmentInitParams p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ WalletFragmentInitParams$Builder(com.google.android.gms.wallet.fragment.WalletFragmentInitParams p0, int p1)
    {
      this(p0);
    }

    private com.google.android.gms.wallet.fragment.WalletFragmentInitParams$Builder a(
            int p0)
    {
      WalletFragmentInitParams.a(this.a, p0);
      return this;
    }

    private com.google.android.gms.wallet.fragment.WalletFragmentInitParams$Builder a(
            com.google.android.gms.wallet.MaskedWallet p0)
    {
      WalletFragmentInitParams.a(this.a, p0);
      return this;
    }

    private com.google.android.gms.wallet.fragment.WalletFragmentInitParams$Builder a(
            com.google.android.gms.wallet.MaskedWalletRequest p0)
    {
      WalletFragmentInitParams.a(this.a, p0);
      return this;
    }

    private com.google.android.gms.wallet.fragment.WalletFragmentInitParams$Builder a(
            String p0)
    {
      WalletFragmentInitParams.a(this.a, p0);
      return this;
    }

    private com.google.android.gms.wallet.fragment.WalletFragmentInitParams a()
    {
      boolean v1;
      boolean v2;
      v1 = true;
      v2 = WalletFragmentInitParams.a(this.a) != null && WalletFragmentInitParams.b(this.a) == null
        || WalletFragmentInitParams.a(this.a) == null && WalletFragmentInitParams.b(this.a) != null;
      hn.a(v2, "Exactly one of MaskedWallet or MaskedWalletRequest is required");
      if ( WalletFragmentInitParams.c(this.a) < 0 )
        v1 = false;
      hn.a(v1, "masked wallet request code is required and must be non-negative");
      return this.a;
    }

}

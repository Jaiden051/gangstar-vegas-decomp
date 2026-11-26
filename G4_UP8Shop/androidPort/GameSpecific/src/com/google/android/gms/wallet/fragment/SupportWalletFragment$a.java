// Decompiled from classes.dex (SourceFile: SupportWalletFragment$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet.fragment;

class SupportWalletFragment$a extends com.google.android.gms.internal.lm$a {
    // Fields
    private com.google.android.gms.wallet.fragment.SupportWalletFragment$OnStateChangedListener a;
    private final com.google.android.gms.wallet.fragment.SupportWalletFragment b;

    // Methods
    SupportWalletFragment$a(com.google.android.gms.wallet.fragment.SupportWalletFragment p0)
    {
      super();
      this.b = p0;
    }

    public final void a(int p0, int p1, android.os.Bundle p2)
    {
      if ( this.a != null )
        this.a.a();
    }

    public final void a(
            com.google.android.gms.wallet.fragment.SupportWalletFragment$OnStateChangedListener p0)
    {
      this.a = p0;
    }

}

// Decompiled from classes.dex (SourceFile: WalletFragmentInitParams.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet.fragment;

public final class WalletFragmentInitParams implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    private java.lang.String b;
    private com.google.android.gms.wallet.MaskedWalletRequest c;
    private int d;
    private com.google.android.gms.wallet.MaskedWallet e;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wallet.fragment.a();
    }

    private WalletFragmentInitParams()
    {
      super();
      this.a = 1;
      this.d = -1;
    }

    WalletFragmentInitParams(
            int p0,
            String p1,
            com.google.android.gms.wallet.MaskedWalletRequest p2,
            int p3,
            com.google.android.gms.wallet.MaskedWallet p4)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
    }

    /* synthetic */ static int a(
            com.google.android.gms.wallet.fragment.WalletFragmentInitParams p0,
            int p1)
    {
      p0.d = p1;
      return p1;
    }

    /* synthetic */ static com.google.android.gms.wallet.MaskedWallet a(
            com.google.android.gms.wallet.fragment.WalletFragmentInitParams p0)
    {
      return p0.e;
    }

    /* synthetic */ static com.google.android.gms.wallet.MaskedWallet a(
            com.google.android.gms.wallet.fragment.WalletFragmentInitParams p0,
            com.google.android.gms.wallet.MaskedWallet p1)
    {
      p0.e = p1;
      return p1;
    }

    /* synthetic */ static com.google.android.gms.wallet.MaskedWalletRequest a(
            com.google.android.gms.wallet.fragment.WalletFragmentInitParams p0,
            com.google.android.gms.wallet.MaskedWalletRequest p1)
    {
      p0.c = p1;
      return p1;
    }

    /* synthetic */ static String a(
            com.google.android.gms.wallet.fragment.WalletFragmentInitParams p0,
            String p1)
    {
      p0.b = p1;
      return p1;
    }

    /* synthetic */ static com.google.android.gms.wallet.MaskedWalletRequest b(
            com.google.android.gms.wallet.fragment.WalletFragmentInitParams p0)
    {
      return p0.c;
    }

    /* synthetic */ static int c(
            com.google.android.gms.wallet.fragment.WalletFragmentInitParams p0)
    {
      return p0.d;
    }

    public static com.google.android.gms.wallet.fragment.WalletFragmentInitParams$Builder newBuilder()
    {
      com.google.android.gms.wallet.fragment.WalletFragmentInitParams v0;
      v0 = new com.google.android.gms.wallet.fragment.WalletFragmentInitParams();
      v0.getClass();
      return new com.google.android.gms.wallet.fragment.WalletFragmentInitParams$Builder(v0, 0);
    }

    public final String a()
    {
      return this.b;
    }

    public final com.google.android.gms.wallet.MaskedWalletRequest b()
    {
      return this.c;
    }

    public final int c()
    {
      return this.d;
    }

    public final com.google.android.gms.wallet.MaskedWallet d()
    {
      return this.e;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.wallet.fragment.a.a(this, p0, p1);
    }

}

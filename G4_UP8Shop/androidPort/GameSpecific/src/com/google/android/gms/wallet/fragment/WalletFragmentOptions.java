// Decompiled from classes.dex (SourceFile: WalletFragmentOptions.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet.fragment;

import com.google.android.gms.R$styleable;
public final class WalletFragmentOptions implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    private int b;
    private int c;
    private com.google.android.gms.wallet.fragment.WalletFragmentStyle d;
    private int e;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wallet.fragment.b();
    }

    private WalletFragmentOptions()
    {
      super();
      this.a = 1;
    }

    WalletFragmentOptions(int p0, int p1, int p2, com.google.android.gms.wallet.fragment.WalletFragmentStyle p3, int p4)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
    }

    /* synthetic */ static int a(
            com.google.android.gms.wallet.fragment.WalletFragmentOptions p0,
            int p1)
    {
      p0.b = p1;
      return p1;
    }

    public static com.google.android.gms.wallet.fragment.WalletFragmentOptions a(
            android.content.Context p0,
            android.util.AttributeSet p1)
    {
      android.content.res.TypedArray v2;
      int Int;
      int v4;
      int ResourceId;
      int v6;
      com.google.android.gms.wallet.fragment.WalletFragmentOptions v7;
      v2 = p0.obtainStyledAttributes(p1, com.google.android.gms.R$styleable.t);
      Int = v2.getInt(0, 0);
      v4 = v2.getInt(1, 1);
      ResourceId = v2.getResourceId(2, 0);
      v6 = v2.getInt(3, 1);
      v2.recycle();
      v7 = new com.google.android.gms.wallet.fragment.WalletFragmentOptions();
      v7.c = Int;
      v7.b = v4;
      v7.d = new com.google.android.gms.wallet.fragment.WalletFragmentStyle().a(ResourceId);
      v7.d.a(p0);
      v7.e = v6;
      return v7;
    }

    /* synthetic */ static com.google.android.gms.wallet.fragment.WalletFragmentStyle a(
            com.google.android.gms.wallet.fragment.WalletFragmentOptions p0,
            com.google.android.gms.wallet.fragment.WalletFragmentStyle p1)
    {
      p0.d = p1;
      return p1;
    }

    /* synthetic */ static int b(
            com.google.android.gms.wallet.fragment.WalletFragmentOptions p0,
            int p1)
    {
      p0.c = p1;
      return p1;
    }

    /* synthetic */ static int c(
            com.google.android.gms.wallet.fragment.WalletFragmentOptions p0,
            int p1)
    {
      p0.e = p1;
      return p1;
    }

    public static com.google.android.gms.wallet.fragment.WalletFragmentOptions$Builder newBuilder()
    {
      com.google.android.gms.wallet.fragment.WalletFragmentOptions v0;
      v0 = new com.google.android.gms.wallet.fragment.WalletFragmentOptions();
      v0.getClass();
      return new com.google.android.gms.wallet.fragment.WalletFragmentOptions$Builder(v0, 0);
    }

    public final int a()
    {
      return this.b;
    }

    public final void a(android.content.Context p0)
    {
      if ( this.d != null )
        this.d.a(p0);
    }

    public final int b()
    {
      return this.c;
    }

    public final com.google.android.gms.wallet.fragment.WalletFragmentStyle c()
    {
      return this.d;
    }

    public final int d()
    {
      return this.e;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.wallet.fragment.b.a(this, p0, p1);
    }

}

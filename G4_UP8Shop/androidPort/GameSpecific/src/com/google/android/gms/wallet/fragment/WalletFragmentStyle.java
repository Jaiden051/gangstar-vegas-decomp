// Decompiled from classes.dex (SourceFile: WalletFragmentStyle.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet.fragment;

import com.google.android.gms.R$styleable;
public final class WalletFragmentStyle implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    android.os.Bundle b;
    int c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wallet.fragment.c();
    }

    public WalletFragmentStyle()
    {
      super();
      this.a = 1;
      this.b = new android.os.Bundle();
    }

    WalletFragmentStyle(int p0, android.os.Bundle p1, int p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    private com.google.android.gms.wallet.fragment.WalletFragmentStyle a(int p0, float p1)
    {
      this.b.putLong("buyButtonHeight", Dimension.a(p0, p1));
      return this;
    }

    private void a(android.content.res.TypedArray p0, int p1, String p2)
    {
      android.util.TypedValue v4; // RETVAL
    
      if ( !this.b.containsKey(p2) )
      {
        v4 = p0.peekValue(p1);
        if ( v4 != null )
          this.b.putLong(p2, Dimension.a(v4));
      }
    }

    private void a(android.content.res.TypedArray p0, int p1, String p2, String p3)
    {
      android.util.TypedValue v5; // RETVAL
    
      if ( !this.b.containsKey(p2) && !this.b.containsKey(p3) )
      {
        v5 = p0.peekValue(p1);
        if ( v5 != null )
        {
          if ( v5.type < 28 || v5.type > 31 )
            this.b.putInt(p3, v5.resourceId);
          else
            this.b.putInt(p2, v5.data);
        }
      }
    }

    private com.google.android.gms.wallet.fragment.WalletFragmentStyle b(int p0)
    {
      this.b.putInt("buyButtonText", p0);
      return this;
    }

    private com.google.android.gms.wallet.fragment.WalletFragmentStyle b(int p0, float p1)
    {
      this.b.putLong("buyButtonWidth", Dimension.a(p0, p1));
      return this;
    }

    private void b(android.content.res.TypedArray p0, int p1, String p2)
    {
      android.util.TypedValue v4; // RETVAL
    
      if ( !this.b.containsKey(p2) )
      {
        v4 = p0.peekValue(p1);
        if ( v4 != null )
          this.b.putInt(p2, v4.data);
      }
    }

    private com.google.android.gms.wallet.fragment.WalletFragmentStyle c(int p0)
    {
      this.b.putLong("buyButtonHeight", Dimension.dM(p0));
      return this;
    }

    private com.google.android.gms.wallet.fragment.WalletFragmentStyle d(int p0)
    {
      this.b.putLong("buyButtonWidth", Dimension.dM(p0));
      return this;
    }

    private com.google.android.gms.wallet.fragment.WalletFragmentStyle e(int p0)
    {
      this.b.putInt("buyButtonAppearance", p0);
      return this;
    }

    private com.google.android.gms.wallet.fragment.WalletFragmentStyle f(int p0)
    {
      this.b.putInt("maskedWalletDetailsTextAppearance", p0);
      return this;
    }

    private com.google.android.gms.wallet.fragment.WalletFragmentStyle g(int p0)
    {
      this.b.putInt("maskedWalletDetailsHeaderTextAppearance", p0);
      return this;
    }

    private com.google.android.gms.wallet.fragment.WalletFragmentStyle h(int p0)
    {
      this.b.remove("maskedWalletDetailsBackgroundResource");
      this.b.putInt("maskedWalletDetailsBackgroundColor", p0);
      return this;
    }

    private com.google.android.gms.wallet.fragment.WalletFragmentStyle i(int p0)
    {
      this.b.remove("maskedWalletDetailsBackgroundColor");
      this.b.putInt("maskedWalletDetailsBackgroundResource", p0);
      return this;
    }

    private com.google.android.gms.wallet.fragment.WalletFragmentStyle j(int p0)
    {
      this.b.putInt("maskedWalletDetailsButtonTextAppearance", p0);
      return this;
    }

    private com.google.android.gms.wallet.fragment.WalletFragmentStyle k(int p0)
    {
      this.b.remove("maskedWalletDetailsButtonBackgroundResource");
      this.b.putInt("maskedWalletDetailsButtonBackgroundColor", p0);
      return this;
    }

    private com.google.android.gms.wallet.fragment.WalletFragmentStyle l(int p0)
    {
      this.b.remove("maskedWalletDetailsButtonBackgroundColor");
      this.b.putInt("maskedWalletDetailsButtonBackgroundResource", p0);
      return this;
    }

    private com.google.android.gms.wallet.fragment.WalletFragmentStyle m(int p0)
    {
      this.b.putInt("maskedWalletDetailsLogoImageType", p0);
      return this;
    }

    private com.google.android.gms.wallet.fragment.WalletFragmentStyle n(int p0)
    {
      this.b.putInt("maskedWalletDetailsLogoTextColor", p0);
      return this;
    }

    public final int a(String p0, android.util.DisplayMetrics p1, int p2)
    {
      if ( this.b.containsKey(p0) )
        return Dimension.a(this.b.getLong(p0), p1);
      return p2;
    }

    public final com.google.android.gms.wallet.fragment.WalletFragmentStyle a(int p0)
    {
      this.c = p0;
      return this;
    }

    public final void a(android.content.Context p0)
    {
      int c;
      android.content.res.TypedArray v3; // RETVAL
    
      if ( this.c > 0 )
        c = this.c;
      else
        c = com.google.android.gms.R$style.e;
      v3 = p0.obtainStyledAttributes(c, com.google.android.gms.R$styleable.y);
      this.a(v3, 1, "buyButtonWidth");
      this.a(v3, 0, "buyButtonHeight");
      this.b(v3, 2, "buyButtonText");
      this.b(v3, 3, "buyButtonAppearance");
      this.b(v3, 4, "maskedWalletDetailsTextAppearance");
      this.b(v3, 5, "maskedWalletDetailsHeaderTextAppearance");
      this.a(v3, 6, "maskedWalletDetailsBackgroundColor", "maskedWalletDetailsBackgroundResource");
      this.b(v3, 7, "maskedWalletDetailsButtonTextAppearance");
      this.a(v3, 8, "maskedWalletDetailsButtonBackgroundColor", "maskedWalletDetailsButtonBackgroundResource");
      this.b(v3, 9, "maskedWalletDetailsLogoTextColor");
      this.b(v3, 10, "maskedWalletDetailsLogoImageType");
      v3.recycle();
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.wallet.fragment.c.a(this, p0, p1);
    }

}

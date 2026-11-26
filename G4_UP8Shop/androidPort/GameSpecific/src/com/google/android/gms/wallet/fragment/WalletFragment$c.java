// Decompiled from classes.dex (SourceFile: WalletFragment$c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet.fragment;

import com.google.android.gms.R$string;
import com.google.android.gms.common.GooglePlayServicesUtil;
import com.google.android.gms.internal.lt;
class WalletFragment$c extends com.google.android.gms.dynamic.a<com.google.android.gms.wallet.fragment.WalletFragment$b> implements android.view.View.OnClickListener {
    // Fields
    final com.google.android.gms.wallet.fragment.WalletFragment a;

    // Methods
    private WalletFragment$c(com.google.android.gms.wallet.fragment.WalletFragment p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ WalletFragment$c(com.google.android.gms.wallet.fragment.WalletFragment p0, int p1)
    {
      this(p0);
    }

    protected final void a(android.widget.FrameLayout p0)
 {
      int v2;
      int v3;
      android.widget.Button v4;
      com.google.android.gms.wallet.fragment.WalletFragmentStyle v5;
      android.util.DisplayMetrics DisplayMetrics;
      v2 = -1;
      v3 = -2;
      v4 = new android.widget.Button(WalletFragment.a(this.a).getActivity());
      v4.setText(R$string.F);
      if ( WalletFragment.e(this.a) != null )
      {
        v5 = WalletFragment.e(this.a).c();
        if ( v5 != null )
        {
          DisplayMetrics = WalletFragment.a(this.a).getResources().getDisplayMetrics();
          v2 = v5.a("buyButtonWidth", DisplayMetrics, -1);
          v3 = v5.a("buyButtonHeight", DisplayMetrics, -2);
        }
      }
      v4.setLayoutParams(new android.view.ViewGroup.LayoutParams(v2, v3));
      v4.setOnClickListener((android.view.View.OnClickListener)this);
      p0.addView(v4);
    }

    protected final void a(
            com.google.android.gms.dynamic.f<com.google.android.gms.wallet.fragment.WalletFragment$b> p0)
 {
      android.app.Activity Activity;
      Activity = WalletFragment.a(this.a).getActivity();
      if ( WalletFragment.b(this.a) != null || !WalletFragment.c(this.a) || Activity == null )
        return;
      try
      {
        WalletFragment.a(
          this.a,
          new com.google.android.gms.wallet.fragment.WalletFragment$b(lt.a(
                                                                        Activity,
                                                                        WalletFragment.d(this.a),
                                                                        WalletFragment.e(this.a),
                                                                        WalletFragment.f(this.a)), 0));
        WalletFragment.a(this.a, (Boolean)null);
        p0.a(WalletFragment.b(this.a));
        if ( WalletFragment.g(this.a) != null )
        {
          WalletFragment$b.a(WalletFragment.b(this.a), WalletFragment.g(this.a));
          WalletFragment.a(this.a, (WalletFragmentOptions)null);
        }
        if ( WalletFragment.h(this.a) != null )
        {
          WalletFragment$b.a(WalletFragment.b(this.a), WalletFragment.h(this.a));
          WalletFragment.a(this.a, (WalletFragmentInitParams)null);
        }
        if ( WalletFragment.i(this.a) != null )
        {
          WalletFragment$b.a(WalletFragment.b(this.a), WalletFragment.i(this.a));
          WalletFragment.a(this.a, (com.google.android.gms.wallet.MaskedWalletRequest)null);
        }
        if ( WalletFragment.j(this.a) != null )
        {
          WalletFragment$b.a(WalletFragment.b(this.a), WalletFragment.j(this.a).booleanValue());
          WalletFragment.a(this.a, (Boolean)null);
        }
      }
      catch ( com.google.android.gms.common.GooglePlayServicesNotAvailableException e )
      {
      }
    }

    public void onClick(android.view.View p0)
    {
      android.app.Activity Activity;
      Activity = WalletFragment.a(this.a).getActivity();
      GooglePlayServicesUtil.showErrorDialogFragment(
        GooglePlayServicesUtil.isGooglePlayServicesAvailable(Activity),
        Activity,
        -1);
    }

}

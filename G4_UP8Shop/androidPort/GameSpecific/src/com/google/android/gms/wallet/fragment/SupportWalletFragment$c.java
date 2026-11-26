// Decompiled from classes.dex (SourceFile: SupportWalletFragment$c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet.fragment;

import com.google.android.gms.R$string;
import com.google.android.gms.common.GooglePlayServicesUtil;
import com.google.android.gms.internal.lt;
class SupportWalletFragment$c extends com.google.android.gms.dynamic.a<com.google.android.gms.wallet.fragment.SupportWalletFragment$b> implements android.view.View.OnClickListener {
    // Fields
    final com.google.android.gms.wallet.fragment.SupportWalletFragment a;

    // Methods
    private SupportWalletFragment$c(com.google.android.gms.wallet.fragment.SupportWalletFragment p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ SupportWalletFragment$c(com.google.android.gms.wallet.fragment.SupportWalletFragment p0, int p1)
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
      v4 = new android.widget.Button(SupportWalletFragment.a(this.a).getActivity());
      v4.setText(R$string.F);
      if ( SupportWalletFragment.e(this.a) != null )
      {
        v5 = SupportWalletFragment.e(this.a).c();
        if ( v5 != null )
        {
          DisplayMetrics = SupportWalletFragment.a(this.a).getResources().getDisplayMetrics();
          v2 = v5.a("buyButtonWidth", DisplayMetrics, -1);
          v3 = v5.a("buyButtonHeight", DisplayMetrics, -2);
        }
      }
      v4.setLayoutParams(new android.view.ViewGroup.LayoutParams(v2, v3));
      v4.setOnClickListener((android.view.View.OnClickListener)this);
      p0.addView(v4);
    }

    protected final void a(
            com.google.android.gms.dynamic.f<com.google.android.gms.wallet.fragment.SupportWalletFragment$b> p0)
 {
      android.support.v4.app.FragmentActivity Activity;
      Activity = SupportWalletFragment.a(this.a).getActivity();
      if ( SupportWalletFragment.b(this.a) != null || !SupportWalletFragment.c(this.a) || Activity == null )
        return;
      try
      {
        SupportWalletFragment.a(
          this.a,
          new com.google.android.gms.wallet.fragment.SupportWalletFragment$b(lt.a(
                                                                               Activity,
                                                                               SupportWalletFragment.d(this.a),
                                                                               SupportWalletFragment.e(this.a),
                                                                               SupportWalletFragment.f(this.a)), 0));
        SupportWalletFragment.a(this.a, (Boolean)null);
        p0.a(SupportWalletFragment.b(this.a));
        if ( SupportWalletFragment.g(this.a) != null )
        {
          SupportWalletFragment$b.a(SupportWalletFragment.b(this.a), SupportWalletFragment.g(this.a));
          SupportWalletFragment.a(this.a, (WalletFragmentOptions)null);
        }
        if ( SupportWalletFragment.h(this.a) != null )
        {
          SupportWalletFragment$b.a(SupportWalletFragment.b(this.a), SupportWalletFragment.h(this.a));
          SupportWalletFragment.a(this.a, (WalletFragmentInitParams)null);
        }
        if ( SupportWalletFragment.i(this.a) != null )
        {
          SupportWalletFragment$b.a(SupportWalletFragment.b(this.a), SupportWalletFragment.i(this.a));
          SupportWalletFragment.a(this.a, (com.google.android.gms.wallet.MaskedWalletRequest)null);
        }
        if ( SupportWalletFragment.j(this.a) != null )
        {
          SupportWalletFragment$b.a(SupportWalletFragment.b(this.a), SupportWalletFragment.j(this.a).booleanValue());
          SupportWalletFragment.a(this.a, (Boolean)null);
        }
      }
      catch ( com.google.android.gms.common.GooglePlayServicesNotAvailableException e )
      {
      }
    }

    public void onClick(android.view.View p0)
    {
      android.app.Activity Activity;
      Activity = SupportWalletFragment.a(this.a).getActivity();
      GooglePlayServicesUtil.showErrorDialogFragment(
        GooglePlayServicesUtil.isGooglePlayServicesAvailable(Activity),
        Activity,
        -1);
    }

}

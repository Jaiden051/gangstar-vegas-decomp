// Decompiled from classes.dex (SourceFile: SupportWalletFragment.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet.fragment;

import android.util.Log;
import com.google.android.gms.common.GooglePlayServicesUtil;
public final class SupportWalletFragment extends android.support.v4.app.Fragment {
    // Fields
    private com.google.android.gms.wallet.fragment.SupportWalletFragment$b a;
    private boolean b;
    private final com.google.android.gms.dynamic.h c;
    private final com.google.android.gms.wallet.fragment.SupportWalletFragment$c d;
    private com.google.android.gms.wallet.fragment.SupportWalletFragment$a e;
    private final android.support.v4.app.Fragment f;
    private com.google.android.gms.wallet.fragment.WalletFragmentOptions g;
    private com.google.android.gms.wallet.fragment.WalletFragmentInitParams h;
    private com.google.android.gms.wallet.MaskedWalletRequest i;
    private com.google.android.gms.wallet.MaskedWallet j;
    private java.lang.Boolean k;

    // Methods
    public SupportWalletFragment()
    {
      super();
      this.b = false;
      this.c = com.google.android.gms.dynamic.h.a(this);
      this.d = new com.google.android.gms.wallet.fragment.SupportWalletFragment$c(this, 0);
      this.e = new com.google.android.gms.wallet.fragment.SupportWalletFragment$a(this);
      this.f = this;
    }

    private int a()
    {
      if ( this.a != null )
        return SupportWalletFragment$b.a(this.a);
      else
        return 0;
    }

    /* synthetic */ static android.support.v4.app.Fragment a(
            com.google.android.gms.wallet.fragment.SupportWalletFragment p0)
    {
      return p0.f;
    }

    /* synthetic */ static com.google.android.gms.wallet.MaskedWallet a(
            com.google.android.gms.wallet.fragment.SupportWalletFragment p0,
            com.google.android.gms.wallet.MaskedWallet p1)
    {
      p0.j = p1;
      return p1;
    }

    /* synthetic */ static com.google.android.gms.wallet.MaskedWalletRequest a(
            com.google.android.gms.wallet.fragment.SupportWalletFragment p0,
            com.google.android.gms.wallet.MaskedWalletRequest p1)
    {
      p0.i = p1;
      return p1;
    }

    /* synthetic */ static com.google.android.gms.wallet.fragment.SupportWalletFragment$b a(
            com.google.android.gms.wallet.fragment.SupportWalletFragment p0,
            com.google.android.gms.wallet.fragment.SupportWalletFragment$b p1)
    {
      p0.a = p1;
      return p1;
    }

    /* synthetic */ static com.google.android.gms.wallet.fragment.WalletFragmentInitParams a(
            com.google.android.gms.wallet.fragment.SupportWalletFragment p0,
            com.google.android.gms.wallet.fragment.WalletFragmentInitParams p1)
    {
      p0.h = p1;
      return p1;
    }

    /* synthetic */ static com.google.android.gms.wallet.fragment.WalletFragmentOptions a(
            com.google.android.gms.wallet.fragment.SupportWalletFragment p0,
            com.google.android.gms.wallet.fragment.WalletFragmentOptions p1)
    {
      p0.g = p1;
      return p1;
    }

    /* synthetic */ static Boolean a(
            com.google.android.gms.wallet.fragment.SupportWalletFragment p0,
            Boolean p1)
    {
      p0.k = p1;
      return p1;
    }

    private void a(com.google.android.gms.wallet.MaskedWallet p0)
    {
      if ( this.a != null )
      {
        SupportWalletFragment$b.a(this.a, p0);
        this.j = null;
      }
      else
      {
        this.j = p0;
      }
    }

    private void a(com.google.android.gms.wallet.MaskedWalletRequest p0)
    {
      if ( this.a != null )
      {
        SupportWalletFragment$b.a(this.a, p0);
        this.i = null;
      }
      else
      {
        this.i = p0;
      }
    }

    private void a(
            com.google.android.gms.wallet.fragment.SupportWalletFragment$OnStateChangedListener p0)
    {
      this.e.a(p0);
    }

    private void a(com.google.android.gms.wallet.fragment.WalletFragmentInitParams p0)
    {
      if ( this.a != null )
      {
        SupportWalletFragment$b.a(this.a, p0);
        this.h = null;
      }
      else if ( this.h != null )
      {
        Log.w("SupportWalletFragment", "initialize(WalletFragmentInitParams) was called more than once. Ignoring.");
      }
      else
      {
        this.h = p0;
        if ( this.i != null )
          Log.w("SupportWalletFragment", "updateMaskedWalletRequest() was called before initialize()");
        if ( this.j != null )
          Log.w("SupportWalletFragment", "updateMaskedWallet() was called before initialize()");
      }
    }

    private void a(boolean p0)
    {
      if ( this.a != null )
      {
        SupportWalletFragment$b.a(this.a, p0);
        this.k = null;
      }
      else
      {
        this.k = Boolean.valueOf(p0);
      }
    }

    /* synthetic */ static com.google.android.gms.wallet.fragment.SupportWalletFragment$b b(
            com.google.android.gms.wallet.fragment.SupportWalletFragment p0)
    {
      return p0.a;
    }

    /* synthetic */ static boolean c(com.google.android.gms.wallet.fragment.SupportWalletFragment p0)
    {
      return p0.b;
    }

    /* synthetic */ static com.google.android.gms.dynamic.h d(
            com.google.android.gms.wallet.fragment.SupportWalletFragment p0)
    {
      return p0.c;
    }

    /* synthetic */ static com.google.android.gms.wallet.fragment.WalletFragmentOptions e(
            com.google.android.gms.wallet.fragment.SupportWalletFragment p0)
    {
      return p0.g;
    }

    /* synthetic */ static com.google.android.gms.wallet.fragment.SupportWalletFragment$a f(
            com.google.android.gms.wallet.fragment.SupportWalletFragment p0)
    {
      return p0.e;
    }

    /* synthetic */ static com.google.android.gms.wallet.fragment.WalletFragmentInitParams g(
            com.google.android.gms.wallet.fragment.SupportWalletFragment p0)
    {
      return p0.h;
    }

    /* synthetic */ static com.google.android.gms.wallet.MaskedWalletRequest h(
            com.google.android.gms.wallet.fragment.SupportWalletFragment p0)
    {
      return p0.i;
    }

    /* synthetic */ static com.google.android.gms.wallet.MaskedWallet i(
            com.google.android.gms.wallet.fragment.SupportWalletFragment p0)
    {
      return p0.j;
    }

    /* synthetic */ static Boolean j(com.google.android.gms.wallet.fragment.SupportWalletFragment p0)
    {
      return p0.k;
    }

    public static com.google.android.gms.wallet.fragment.SupportWalletFragment newInstance(
            com.google.android.gms.wallet.fragment.WalletFragmentOptions p0)
    {
      com.google.android.gms.wallet.fragment.SupportWalletFragment v1;
      android.os.Bundle v2;
      v1 = new com.google.android.gms.wallet.fragment.SupportWalletFragment();
      v2 = new android.os.Bundle();
      v2.putParcelable("extraWalletFragmentOptions", (android.os.Parcelable)p0);
      v1.f.setArguments(v2);
      return v1;
    }

    public final void onActivityResult(int p0, int p1, android.content.Intent p2)
 {
      super.onActivityResult(p0, p1, p2);
      if ( this.a != null )
        SupportWalletFragment$b.a(this.a, p0, p1, p2);
    }

    public final void onCreate(android.os.Bundle p0)
    {
      com.google.android.gms.wallet.fragment.WalletFragmentInitParams v2;
      com.google.android.gms.wallet.fragment.WalletFragmentOptions v3;
      super.onCreate(p0);
      if ( p0 != null )
      {
        p0.setClassLoader(com.google.android.gms.wallet.fragment.WalletFragmentOptions.class.getClassLoader());
        v2 = (com.google.android.gms.wallet.fragment.WalletFragmentInitParams)p0.getParcelable("walletFragmentInitParams");
        if ( v2 != null )
        {
          if ( this.h != null )
            Log.w("SupportWalletFragment", "initialize(WalletFragmentInitParams) was called more than once.Ignoring.");
          this.h = v2;
        }
        if ( this.i == null )
          this.i = (com.google.android.gms.wallet.MaskedWalletRequest)p0.getParcelable("maskedWalletRequest");
        if ( this.j == null )
          this.j = (com.google.android.gms.wallet.MaskedWallet)p0.getParcelable("maskedWallet");
        if ( p0.containsKey("walletFragmentOptions") )
          this.g = (com.google.android.gms.wallet.fragment.WalletFragmentOptions)p0.getParcelable("walletFragmentOptions");
        if ( p0.containsKey("enabled") )
          this.k = Boolean.valueOf(p0.getBoolean("enabled"));
      }
      else if ( this.f.getArguments() != null )
      {
        v3 = (com.google.android.gms.wallet.fragment.WalletFragmentOptions)this.f.getArguments().getParcelable("extraWalletFragmentOptions");
        if ( v3 != null )
        {
          v3.a(this.f.getActivity());
          this.g = v3;
        }
      }
      this.b = true;
      this.d.a(p0);
    }

    public final android.view.View onCreateView(
            android.view.LayoutInflater p0,
            android.view.ViewGroup p1,
            android.os.Bundle p2)
    {
      return this.d.a(p0, p1, p2);
    }

    public final void onDestroy()
    {
      super.onDestroy();
      this.b = false;
    }

    public final void onInflate(
            android.app.Activity p0,
            android.util.AttributeSet p1,
            android.os.Bundle p2)
    {
      android.os.Bundle v4;
      super.onInflate(p0, p1, p2);
      if ( this.g == null )
        this.g = WalletFragmentOptions.a(p0, p1);
      v4 = new android.os.Bundle();
      v4.putParcelable("attrKeyWalletFragmentOptions", (android.os.Parcelable)this.g);
      this.d.a(p0, v4, p2);
    }

    public final void onPause()
    {
      super.onPause();
      this.d.d();
    }

    public final void onResume()
    {
      android.support.v4.app.FragmentManager v1;
      android.support.v4.app.Fragment v2;
      super.onResume();
      this.d.c();
      v1 = this.f.getActivity().c();
      v2 = v1.a("GooglePlayServicesErrorDialog");
      if ( v2 != null )
      {
        v1.a().a(v2).h();
        GooglePlayServicesUtil.showErrorDialogFragment(
          GooglePlayServicesUtil.isGooglePlayServicesAvailable(this.f.getActivity()),
          this.f.getActivity(),
          -1);
      }
    }

    public final void onSaveInstanceState(android.os.Bundle p0)
    {
      super.onSaveInstanceState(p0);
      p0.setClassLoader(com.google.android.gms.wallet.fragment.WalletFragmentOptions.class.getClassLoader());
      this.d.b(p0);
      if ( this.h != null )
      {
        p0.putParcelable("walletFragmentInitParams", (android.os.Parcelable)this.h);
        this.h = null;
      }
      if ( this.i != null )
      {
        p0.putParcelable("maskedWalletRequest", (android.os.Parcelable)this.i);
        this.i = null;
      }
      if ( this.j != null )
      {
        p0.putParcelable("maskedWallet", (android.os.Parcelable)this.j);
        this.j = null;
      }
      if ( this.g != null )
      {
        p0.putParcelable("walletFragmentOptions", (android.os.Parcelable)this.g);
        this.g = null;
      }
      if ( this.k != null )
      {
        p0.putBoolean("enabled", this.k.booleanValue());
        this.k = null;
      }
    }

    public final void onStart()
    {
      super.onStart();
      this.d.b();
    }

    public final void onStop()
    {
      super.onStop();
      this.d.e();
    }

}

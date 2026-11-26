// Decompiled from classes.dex (SourceFile: WalletFragment$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet.fragment;

class WalletFragment$b implements com.google.android.gms.dynamic.LifecycleDelegate {
    // Fields
    private final com.google.android.gms.internal.ll a;

    // Methods
    private WalletFragment$b(com.google.android.gms.internal.ll p0)
    {
      super();
      this.a = p0;
    }

    /* synthetic */ WalletFragment$b(com.google.android.gms.internal.ll p0, int p1)
    {
      this(p0);
    }

    /* synthetic */ static int a(com.google.android.gms.wallet.fragment.WalletFragment$b p0)
    {
      return p0.h();
    }

    private void a(int p0, int p1, android.content.Intent p2)
    {
      try
      {
        this.a.a(p0, p1, p2);
      }
      catch ( android.os.RemoteException v4 )
      {
        throw new RuntimeException(v4);
      }
    }

    private void a(com.google.android.gms.wallet.MaskedWallet p0)
    {
      try
      {
        this.a.a(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new RuntimeException(v2);
      }
    }

    private void a(com.google.android.gms.wallet.MaskedWalletRequest p0)
    {
      try
      {
        this.a.a(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new RuntimeException(v2);
      }
    }

    /* synthetic */ static void a(
            com.google.android.gms.wallet.fragment.WalletFragment$b p0,
            int p1,
            int p2,
            android.content.Intent p3)
    {
      try
      {
        p0.a.a(p1, p2, p3);
      }
      catch ( android.os.RemoteException v4 )
      {
        throw new RuntimeException(v4);
      }
    }

    /* synthetic */ static void a(
            com.google.android.gms.wallet.fragment.WalletFragment$b p0,
            com.google.android.gms.wallet.MaskedWallet p1)
    {
      try
      {
        p0.a.a(p1);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new RuntimeException(v2);
      }
    }

    /* synthetic */ static void a(
            com.google.android.gms.wallet.fragment.WalletFragment$b p0,
            com.google.android.gms.wallet.MaskedWalletRequest p1)
    {
      try
      {
        p0.a.a(p1);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new RuntimeException(v2);
      }
    }

    /* synthetic */ static void a(
            com.google.android.gms.wallet.fragment.WalletFragment$b p0,
            com.google.android.gms.wallet.fragment.WalletFragmentInitParams p1)
    {
      try
      {
        p0.a.a(p1);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new RuntimeException(v2);
      }
    }

    /* synthetic */ static void a(com.google.android.gms.wallet.fragment.WalletFragment$b p0, boolean p1)
    {
      try
      {
        p0.a.a(p1);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new RuntimeException(v2);
      }
    }

    private void a(com.google.android.gms.wallet.fragment.WalletFragmentInitParams p0)
    {
      try
      {
        this.a.a(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new RuntimeException(v2);
      }
    }

    private void a(boolean p0)
    {
      try
      {
        this.a.a(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new RuntimeException(v2);
      }
    }

    private int h()
    {
      try
      {
        return this.a.e();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new RuntimeException(v2);
      }
    }

    public final android.view.View a(
            android.view.LayoutInflater p0,
            android.view.ViewGroup p1,
            android.os.Bundle p2)
    {
      try
      {
        return (android.view.View)com.google.android.gms.dynamic.e.e(this.a.a(com.google.android.gms.dynamic.e.h(p0), com.google.android.gms.dynamic.e.h(p1), p2));
      }
      catch ( android.os.RemoteException v6 )
      {
        throw new RuntimeException(v6);
      }
    }

    public final void a()
    {
      try
      {
        this.a.a();
      }
      catch ( android.os.RemoteException v1 )
      {
        throw new RuntimeException(v1);
      }
    }

    public final void a(android.app.Activity p0, android.os.Bundle p1, android.os.Bundle p2)
    {
      com.google.android.gms.wallet.fragment.WalletFragmentOptions v4;
      v4 = (com.google.android.gms.wallet.fragment.WalletFragmentOptions)p1.getParcelable("extraWalletFragmentOptions");
      try
      {
        this.a.a(com.google.android.gms.dynamic.e.h(p0), v4, p2);
      }
      catch ( android.os.RemoteException v5 )
      {
        throw new RuntimeException(v5);
      }
    }

    public final void a(android.os.Bundle p0)
    {
      try
      {
        this.a.a(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new RuntimeException(v2);
      }
    }

    public final void b()
    {
      try
      {
        this.a.b();
      }
      catch ( android.os.RemoteException v1 )
      {
        throw new RuntimeException(v1);
      }
    }

    public final void b(android.os.Bundle p0)
    {
      try
      {
        this.a.b(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new RuntimeException(v2);
      }
    }

    public final void c()
    {
      try
      {
        this.a.c();
      }
      catch ( android.os.RemoteException v1 )
      {
        throw new RuntimeException(v1);
      }
    }

    public final void d()
    {
      try
      {
        this.a.d();
      }
      catch ( android.os.RemoteException v1 )
      {
        throw new RuntimeException(v1);
      }
    }

    public final void e()
    {
      ;
    }

    public final void f()
    {
      ;
    }

    public final void g()
    {
      ;
    }

}

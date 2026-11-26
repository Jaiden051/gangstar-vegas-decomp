// Decompiled from classes.dex (SourceFile: ls.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Bundle;
import android.text.TextUtils;
import android.util.Log;
public class ls extends com.google.android.gms.internal.hc {
    // Fields
    private final android.app.Activity a;
    private final int b;
    private final java.lang.String c;
    private final int g;

    // Methods
    public ls(
            android.app.Activity p0,
            android.os.Looper p1,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p2,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p3,
            int p4,
            String p5,
            int p6)
    {
      super(p0, p1, p2, p3, new String[0]);
      this.a = p0;
      this.b = p4;
      this.c = p5;
      this.g = p6;
    }

    public static android.os.Bundle a(int p0, String p1, String p2, int p3)
    {
      android.os.Bundle v4;
      v4 = new android.os.Bundle();
      v4.putInt("com.google.android.gms.wallet.EXTRA_ENVIRONMENT", p0);
      v4.putString("androidPackageName", p1);
      if ( !TextUtils.isEmpty(p2) )
        v4.putParcelable("com.google.android.gms.wallet.EXTRA_BUYER_ACCOUNT", new android.accounts.Account(p2, "com.google"));
      v4.putInt("com.google.android.gms.wallet.EXTRA_THEME", p3);
      return v4;
    }

    /* synthetic */ static android.app.Activity b(com.google.android.gms.internal.ls p0)
    {
      return p0.a;
    }

    private static com.google.android.gms.internal.ln bu(android.os.IBinder p0)
    {
      return ln$a.bq(p0);
    }

    private android.os.Bundle g()
    {
      return a(this.b, this.a.getPackageName(), this.c, this.g);
    }

    /* synthetic */ protected final android.os.IInterface a(android.os.IBinder p0)
    {
      return (android.os.IInterface)ln$a.bq(p0);
    }

    public final void a(int p0)
 throws android.os.RemoteException {
      android.os.Bundle v2;
      com.google.android.gms.internal.lq v3;
      v2 = this.g();
      v3 = new com.google.android.gms.internal.ls$b(this, p0);
      try
      {
        ((com.google.android.gms.internal.ln)this.H()).a(v2, v3);
      }
      catch ( android.os.RemoteException v4 )
      {
        Log.e("WalletClientImpl", "RemoteException during checkForPreAuthorization", v4);
        v3.a(8, false, Bundle.EMPTY);
      }
    }

    protected final void a(com.google.android.gms.internal.hj p0, com.google.android.gms.internal.hc$e p1)
 throws android.os.RemoteException {
      p0.a(p1, 5077000);
    }

    public final void a(com.google.android.gms.wallet.FullWalletRequest p0, int p1)
 throws android.os.RemoteException {
      com.google.android.gms.internal.lq v3;
      android.os.Bundle v4;
      v3 = new com.google.android.gms.internal.ls$b(this, p1);
      v4 = this.g();
      try
      {
        ((com.google.android.gms.internal.ln)this.H()).a(p0, v4, v3);
      }
      catch ( android.os.RemoteException v5 )
      {
        Log.e("WalletClientImpl", "RemoteException getting full wallet", v5);
        v3.a(8, (com.google.android.gms.wallet.FullWallet)null, Bundle.EMPTY);
      }
    }

    public final void a(com.google.android.gms.wallet.MaskedWalletRequest p0, int p1)
 throws android.os.RemoteException {
      android.os.Bundle v3;
      com.google.android.gms.internal.lq v4;
      v3 = this.g();
      v4 = new com.google.android.gms.internal.ls$b(this, p1);
      try
      {
        ((com.google.android.gms.internal.ln)this.H()).a(p0, v3, v4);
      }
      catch ( android.os.RemoteException v5 )
      {
        Log.e("WalletClientImpl", "RemoteException getting masked wallet", v5);
        v4.a(8, (com.google.android.gms.wallet.FullWallet)null, Bundle.EMPTY);
      }
    }

    public final void a(com.google.android.gms.wallet.NotifyTransactionStatusRequest p0)
    {
      android.os.Bundle v2;
      v2 = this.g();
      try
      {
        ((com.google.android.gms.internal.ln)this.H()).a(p0, v2);
      }
      catch ( android.os.RemoteException e )
      {
      }
    }

    public final void a(String p0, String p1, int p2)
 throws android.os.RemoteException {
      android.os.Bundle v4;
      com.google.android.gms.internal.lq v5;
      v4 = this.g();
      v5 = new com.google.android.gms.internal.ls$b(this, p2);
      try
      {
        ((com.google.android.gms.internal.ln)this.H()).a(p0, p1, v4, v5);
      }
      catch ( android.os.RemoteException v6 )
      {
        Log.e("WalletClientImpl", "RemoteException changing masked wallet", v6);
        v5.a(8, (com.google.android.gms.wallet.FullWallet)null, Bundle.EMPTY);
      }
    }

    protected final String e()
    {
      return "com.google.android.gms.wallet.internal.IOwService";
    }

    protected final String f()
    {
      return "com.google.android.gms.wallet.service.BIND";
    }

}

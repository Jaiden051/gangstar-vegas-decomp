// Decompiled from classes.dex (SourceFile: Wallet$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

import com.google.android.gms.internal.hn;
final class Wallet$1 implements com.google.android.gms.common.api.Api$b {
    // Methods
    Wallet$1()
    {
      super();
    }

    private static com.google.android.gms.internal.ls a(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.internal.gz p2,
            com.google.android.gms.wallet.Wallet$WalletOptions p3,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p4,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p5)
    {
      android.app.Activity v6;
      hn.b(p0 instanceof android.app.Activity, "An Activity must be used for Wallet APIs");
      v6 = (android.app.Activity)p0;
      if ( p3 == null )
        p3 = new com.google.android.gms.wallet.Wallet$WalletOptions(0);
      return new com.google.android.gms.internal.ls(v6, p1, p4, p5, p3.a, p2.a(), p3.b);
    }

    public final int a()
    {
      return 0x7FFFFFFF;
    }

    /* synthetic */ public final com.google.android.gms.common.api.Api$a a(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.internal.gz p2,
            Object p3,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p4,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p5)
    {
      com.google.android.gms.wallet.Wallet$WalletOptions v7;
      android.app.Activity v8;
      v7 = (com.google.android.gms.wallet.Wallet$WalletOptions)p3;
      hn.b(p0 instanceof android.app.Activity, "An Activity must be used for Wallet APIs");
      v8 = (android.app.Activity)p0;
      if ( v7 == null )
        v7 = new com.google.android.gms.wallet.Wallet$WalletOptions(0);
      return (com.google.android.gms.common.api.Api$a)new com.google.android.gms.internal.ls(v8, p1, p4, p5, v7.a, p2.a(), v7.b);
    }

}

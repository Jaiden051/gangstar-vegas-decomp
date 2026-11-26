// Decompiled from classes.dex (SourceFile: Wallet.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

public final class Wallet {
    // Fields
    public static final com.google.android.gms.common.api.Api a;
    public static final com.google.android.gms.wallet.Payments b;
    public static final com.google.android.gms.wallet.wobs.r c;
    public static final com.google.android.gms.internal.lg d;
    private static final com.google.android.gms.common.api.Api$c e;
    private static final com.google.android.gms.common.api.Api$b f;

    // Methods
    static
    {
      e = new com.google.android.gms.common.api.Api$c();
      f = (com.google.android.gms.common.api.Api$b)new com.google.android.gms.wallet.Wallet$1();
      a = new com.google.android.gms.common.api.Api(f, e, new com.google.android.gms.common.api.Scope[0]);
      b = (com.google.android.gms.wallet.Payments)new com.google.android.gms.internal.lr();
      c = (com.google.android.gms.wallet.wobs.r)new com.google.android.gms.internal.lv();
      d = (com.google.android.gms.internal.lg)new com.google.android.gms.internal.lu();
    }

    private Wallet()
    {
      super();
    }

    public static void changeMaskedWallet(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            String p2,
            int p3)
 throws android.os.RemoteException {
      b.a(p0, p1, p2, p3);
    }

    public static void checkForPreAuthorization(com.google.android.gms.common.api.GoogleApiClient p0, int p1)
 throws android.os.RemoteException {
      b.a(p0, p1);
    }

    public static void loadFullWallet(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.wallet.FullWalletRequest p1,
            int p2)
 throws android.os.RemoteException {
      b.a(p0, p1, p2);
    }

    public static void loadMaskedWallet(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.wallet.MaskedWalletRequest p1,
            int p2)
 throws android.os.RemoteException {
      b.a(p0, p1, p2);
    }

    /* synthetic */ static com.google.android.gms.common.api.Api$c nc()
    {
      return e;
    }

    public static void notifyTransactionStatus(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.wallet.NotifyTransactionStatusRequest p1)
 throws android.os.RemoteException {
      b.a(p0, p1);
    }

}

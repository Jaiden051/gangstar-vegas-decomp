// Decompiled from classes.dex (SourceFile: lr.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class lr implements com.google.android.gms.wallet.Payments {
    // Methods
    public lr()
    {
      super();
    }

    public final void a(com.google.android.gms.common.api.GoogleApiClient p0, int p1)
 throws android.os.RemoteException {
      p0.a(new com.google.android.gms.internal.lr$1(this, p1));
    }

    public final void a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.wallet.FullWalletRequest p1,
            int p2)
 throws android.os.RemoteException {
      p0.a(new com.google.android.gms.internal.lr$3(this, p1, p2));
    }

    public final void a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.wallet.MaskedWalletRequest p1,
            int p2)
 throws android.os.RemoteException {
      p0.a(new com.google.android.gms.internal.lr$2(this, p1, p2));
    }

    public final void a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.wallet.NotifyTransactionStatusRequest p1)
 throws android.os.RemoteException {
      p0.a(new com.google.android.gms.internal.lr$5(this, p1));
    }

    public final void a(com.google.android.gms.common.api.GoogleApiClient p0, String p1, String p2, int p3)
 throws android.os.RemoteException {
      p0.a(new com.google.android.gms.internal.lr$4(this, p1, p2, p3));
    }

}

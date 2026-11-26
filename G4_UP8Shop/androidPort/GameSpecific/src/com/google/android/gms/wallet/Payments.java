// Decompiled from classes.dex (SourceFile: Payments.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

public interface Payments {
    // Methods
    public abstract void a(com.google.android.gms.common.api.GoogleApiClient p0, int p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.wallet.FullWalletRequest p1, int p2) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.wallet.MaskedWalletRequest p1, int p2) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.wallet.NotifyTransactionStatusRequest p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1, java.lang.String p2, int p3) throws android.os.RemoteException;

}

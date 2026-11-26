// Decompiled from classes.dex (SourceFile: DataApi.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable;

public interface DataApi {
    // Methods
    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, android.net.Uri p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.wearable.Asset p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.wearable.DataApi$DataListener p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.wearable.DataItemAsset p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.wearable.PutDataRequest p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult b(com.google.android.gms.common.api.GoogleApiClient p0, android.net.Uri p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult b(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.wearable.DataApi$DataListener p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult c(com.google.android.gms.common.api.GoogleApiClient p0, android.net.Uri p1) throws android.os.RemoteException;

}

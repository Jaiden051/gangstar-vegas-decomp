// Decompiled from classes.dex (SourceFile: MessageApi.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable;

public interface MessageApi {
    // Fields
    public static final int a = 0;

    // Methods
    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.wearable.MessageApi$MessageListener p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1, java.lang.String p2, byte[] p3) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult b(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.wearable.MessageApi$MessageListener p1) throws android.os.RemoteException;

}

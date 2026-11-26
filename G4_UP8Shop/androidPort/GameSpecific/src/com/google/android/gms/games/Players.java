// Decompiled from classes.dex (SourceFile: Players.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games;

public interface Players {
    // Fields
    public static final java.lang.String a = null;

    // Methods
    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, int p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, int p1, boolean p2) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, boolean p1) throws android.os.RemoteException;

    public abstract java.lang.String a(com.google.android.gms.common.api.GoogleApiClient p0) ;

    public abstract com.google.android.gms.common.api.PendingResult b(com.google.android.gms.common.api.GoogleApiClient p0, int p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult b(com.google.android.gms.common.api.GoogleApiClient p0, int p1, boolean p2) throws android.os.RemoteException;

    public abstract com.google.android.gms.games.Player b(com.google.android.gms.common.api.GoogleApiClient p0) ;

    public abstract android.content.Intent c(com.google.android.gms.common.api.GoogleApiClient p0) ;

}

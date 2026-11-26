// Decompiled from classes.dex (SourceFile: Achievements.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.achievement;

public interface Achievements {
    // Methods
    public abstract android.content.Intent a(com.google.android.gms.common.api.GoogleApiClient p0) ;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, boolean p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1, int p2) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult b(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult b(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1, int p2) throws android.os.RemoteException;

    public abstract void c(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract void c(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1, int p2) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult d(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult d(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1, int p2) throws android.os.RemoteException;

}

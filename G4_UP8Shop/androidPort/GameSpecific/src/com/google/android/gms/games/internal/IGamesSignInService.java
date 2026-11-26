// Decompiled from classes.dex (SourceFile: IGamesSignInService.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

public interface IGamesSignInService extends android.os.IInterface {
    // Methods
    public abstract java.lang.String a(java.lang.String p0) throws android.os.RemoteException;

    public abstract java.lang.String a(java.lang.String p0, boolean p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesSignInCallbacks p0, java.lang.String p1, java.lang.String p2) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesSignInCallbacks p0, java.lang.String p1, java.lang.String p2, java.lang.String p3) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesSignInCallbacks p0, java.lang.String p1, java.lang.String p2, java.lang.String[] p3) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.IGamesSignInCallbacks p0, java.lang.String p1, java.lang.String p2, java.lang.String[] p3, java.lang.String p4) throws android.os.RemoteException;

    public abstract void a(java.lang.String p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract java.lang.String b(java.lang.String p0) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.games.internal.IGamesSignInCallbacks p0, java.lang.String p1, java.lang.String p2, java.lang.String p3) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.games.internal.IGamesSignInCallbacks p0, java.lang.String p1, java.lang.String p2, java.lang.String[] p3) throws android.os.RemoteException;

}

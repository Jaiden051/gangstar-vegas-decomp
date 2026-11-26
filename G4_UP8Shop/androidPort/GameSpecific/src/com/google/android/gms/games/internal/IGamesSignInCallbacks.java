// Decompiled from classes.dex (SourceFile: IGamesSignInCallbacks.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

public interface IGamesSignInCallbacks extends android.os.IInterface {
    // Methods
    public abstract void a(int p0) throws android.os.RemoteException;

    public abstract void a(int p0, android.content.Intent p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.common.data.DataHolder p0) throws android.os.RemoteException;

    public abstract void b(int p0) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.common.data.DataHolder p0) throws android.os.RemoteException;

    public abstract void c(com.google.android.gms.common.data.DataHolder p0) throws android.os.RemoteException;

}

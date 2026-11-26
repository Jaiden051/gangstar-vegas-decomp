// Decompiled from classes.dex (SourceFile: IRoomService.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

public interface IRoomService extends android.os.IInterface {
    // Methods
    public abstract void a() throws android.os.RemoteException;

    public abstract void a(android.os.IBinder p0, com.google.android.gms.games.internal.IRoomServiceCallbacks p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.common.data.DataHolder p0, boolean p1) throws android.os.RemoteException;

    public abstract void a(java.lang.String p0) throws android.os.RemoteException;

    public abstract void a(java.lang.String p0, int p1) throws android.os.RemoteException;

    public abstract void a(java.lang.String p0, java.lang.String p1, java.lang.String p2) throws android.os.RemoteException;

    public abstract void a(boolean p0) throws android.os.RemoteException;

    public abstract void a(byte[] p0, java.lang.String p1, int p2) throws android.os.RemoteException;

    public abstract void a(byte[] p0, java.lang.String[] p1) throws android.os.RemoteException;

    public abstract void b() throws android.os.RemoteException;

    public abstract void b(java.lang.String p0) throws android.os.RemoteException;

    public abstract void b(java.lang.String p0, int p1) throws android.os.RemoteException;

    public abstract void c() throws android.os.RemoteException;

    public abstract void d() throws android.os.RemoteException;

}

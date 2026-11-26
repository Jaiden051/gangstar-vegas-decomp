// Decompiled from classes.dex (SourceFile: IRoomServiceCallbacks.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

public interface IRoomServiceCallbacks extends android.os.IInterface {
    // Methods
    public abstract void a() throws android.os.RemoteException;

    public abstract void a(int p0) throws android.os.RemoteException;

    public abstract void a(int p0, int p1, java.lang.String p2) throws android.os.RemoteException;

    public abstract void a(android.os.IBinder p0) throws android.os.RemoteException;

    public abstract void a(android.os.ParcelFileDescriptor p0, int p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.games.internal.ConnectionInfo p0) throws android.os.RemoteException;

    public abstract void a(java.lang.String p0) throws android.os.RemoteException;

    public abstract void a(java.lang.String p0, int p1) throws android.os.RemoteException;

    public abstract void a(java.lang.String p0, byte[] p1, int p2) throws android.os.RemoteException;

    public abstract void a(java.lang.String p0, java.lang.String[] p1) throws android.os.RemoteException;

    public abstract void b() throws android.os.RemoteException;

    public abstract void b(java.lang.String p0) throws android.os.RemoteException;

    public abstract void b(java.lang.String p0, java.lang.String[] p1) throws android.os.RemoteException;

    public abstract void c(java.lang.String p0) throws android.os.RemoteException;

    public abstract void c(java.lang.String p0, java.lang.String[] p1) throws android.os.RemoteException;

    public abstract void d(java.lang.String p0) throws android.os.RemoteException;

    public abstract void d(java.lang.String p0, java.lang.String[] p1) throws android.os.RemoteException;

    public abstract void e(java.lang.String p0) throws android.os.RemoteException;

    public abstract void e(java.lang.String p0, java.lang.String[] p1) throws android.os.RemoteException;

    public abstract void f(java.lang.String p0) throws android.os.RemoteException;

    public abstract void f(java.lang.String p0, java.lang.String[] p1) throws android.os.RemoteException;

    public abstract void g(java.lang.String p0) throws android.os.RemoteException;

    public abstract void g(java.lang.String p0, java.lang.String[] p1) throws android.os.RemoteException;

    public abstract void h(java.lang.String p0) throws android.os.RemoteException;

    public abstract void i(java.lang.String p0) throws android.os.RemoteException;

}

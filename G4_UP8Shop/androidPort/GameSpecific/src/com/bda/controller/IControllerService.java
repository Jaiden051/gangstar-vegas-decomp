// Decompiled from classes.dex (SourceFile: IControllerService.java) via IDA Pro 9.5 Dalvik Decompiler
package com.bda.controller;

public interface IControllerService extends android.os.IInterface {
    // Methods
    public abstract int a(int p0) throws android.os.RemoteException;

    public abstract int a(int p0, int p1) throws android.os.RemoteException;

    public abstract void a() throws android.os.RemoteException;

    public abstract void a(com.bda.controller.IControllerListener p0, int p1) throws android.os.RemoteException;

    public abstract void a(com.bda.controller.IControllerMonitor p0, int p1) throws android.os.RemoteException;

    public abstract float b(int p0, int p1) throws android.os.RemoteException;

    public abstract void b() throws android.os.RemoteException;

    public abstract void b(com.bda.controller.IControllerListener p0, int p1) throws android.os.RemoteException;

    public abstract void b(com.bda.controller.IControllerMonitor p0, int p1) throws android.os.RemoteException;

    public abstract int c(int p0, int p1) throws android.os.RemoteException;

    public abstract void c(com.bda.controller.IControllerListener p0, int p1) throws android.os.RemoteException;

    public abstract boolean c() throws android.os.RemoteException;

    public abstract void d(int p0, int p1) throws android.os.RemoteException;

    public abstract int e(int p0, int p1) throws android.os.RemoteException;

}

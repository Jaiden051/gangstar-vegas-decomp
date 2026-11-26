// Decompiled from classes.dex (SourceFile: IMapFragmentDelegate.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

public interface IMapFragmentDelegate extends android.os.IInterface {
    // Methods
    public abstract com.google.android.gms.dynamic.d a(com.google.android.gms.dynamic.d p0, com.google.android.gms.dynamic.d p1, android.os.Bundle p2) throws android.os.RemoteException;

    public abstract com.google.android.gms.maps.internal.IGoogleMapDelegate a() throws android.os.RemoteException;

    public abstract void a(android.os.Bundle p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.dynamic.d p0, com.google.android.gms.maps.GoogleMapOptions p1, android.os.Bundle p2) throws android.os.RemoteException;

    public abstract void b() throws android.os.RemoteException;

    public abstract void b(android.os.Bundle p0) throws android.os.RemoteException;

    public abstract void c() throws android.os.RemoteException;

    public abstract void d() throws android.os.RemoteException;

    public abstract void e() throws android.os.RemoteException;

    public abstract void f() throws android.os.RemoteException;

    public abstract boolean g() throws android.os.RemoteException;

}

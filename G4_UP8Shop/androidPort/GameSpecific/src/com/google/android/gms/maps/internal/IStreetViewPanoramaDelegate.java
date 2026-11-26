// Decompiled from classes.dex (SourceFile: IStreetViewPanoramaDelegate.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

public interface IStreetViewPanoramaDelegate extends android.os.IInterface {
    // Methods
    public abstract com.google.android.gms.dynamic.d a(com.google.android.gms.maps.model.StreetViewPanoramaOrientation p0) throws android.os.RemoteException;

    public abstract com.google.android.gms.maps.model.StreetViewPanoramaOrientation a(com.google.android.gms.dynamic.d p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.maps.internal.p p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.maps.internal.q p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.maps.internal.r p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.maps.model.LatLng p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.maps.model.LatLng p0, int p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.maps.model.StreetViewPanoramaCamera p0, long p1) throws android.os.RemoteException;

    public abstract void a(java.lang.String p0) throws android.os.RemoteException;

    public abstract void a(boolean p0) throws android.os.RemoteException;

    public abstract boolean a() throws android.os.RemoteException;

    public abstract void b(boolean p0) throws android.os.RemoteException;

    public abstract boolean b() throws android.os.RemoteException;

    public abstract void c(boolean p0) throws android.os.RemoteException;

    public abstract boolean c() throws android.os.RemoteException;

    public abstract void d(boolean p0) throws android.os.RemoteException;

    public abstract boolean d() throws android.os.RemoteException;

    public abstract com.google.android.gms.maps.model.StreetViewPanoramaCamera e() throws android.os.RemoteException;

    public abstract com.google.android.gms.maps.model.StreetViewPanoramaLocation f() throws android.os.RemoteException;

}

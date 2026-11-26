// Decompiled from classes.dex (SourceFile: IGoogleMapDelegate.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

public interface IGoogleMapDelegate extends android.os.IInterface {
    // Methods
    public abstract com.google.android.gms.maps.model.CameraPosition a() throws android.os.RemoteException;

    public abstract com.google.android.gms.maps.model.internal.IPolylineDelegate a(com.google.android.gms.maps.model.PolylineOptions p0) throws android.os.RemoteException;

    public abstract com.google.android.gms.maps.model.internal.b a(com.google.android.gms.maps.model.CircleOptions p0) throws android.os.RemoteException;

    public abstract com.google.android.gms.maps.model.internal.c a(com.google.android.gms.maps.model.GroundOverlayOptions p0) throws android.os.RemoteException;

    public abstract com.google.android.gms.maps.model.internal.f a(com.google.android.gms.maps.model.MarkerOptions p0) throws android.os.RemoteException;

    public abstract com.google.android.gms.maps.model.internal.g a(com.google.android.gms.maps.model.PolygonOptions p0) throws android.os.RemoteException;

    public abstract com.google.android.gms.maps.model.internal.h a(com.google.android.gms.maps.model.TileOverlayOptions p0) throws android.os.RemoteException;

    public abstract void a(int p0) throws android.os.RemoteException;

    public abstract void a(int p0, int p1, int p2, int p3) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.dynamic.d p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.dynamic.d p0, int p1, com.google.android.gms.maps.internal.b p2) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.dynamic.d p0, com.google.android.gms.maps.internal.b p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.maps.internal.ILocationSourceDelegate p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.maps.internal.d p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.maps.internal.e p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.maps.internal.f p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.maps.internal.g p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.maps.internal.i p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.maps.internal.j p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.maps.internal.k p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.maps.internal.l p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.maps.internal.m p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.maps.internal.n p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.maps.internal.o p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.maps.internal.s p0, com.google.android.gms.dynamic.d p1) throws android.os.RemoteException;

    public abstract void a(boolean p0) throws android.os.RemoteException;

    public abstract float b() throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.dynamic.d p0) throws android.os.RemoteException;

    public abstract boolean b(boolean p0) throws android.os.RemoteException;

    public abstract float c() throws android.os.RemoteException;

    public abstract void c(boolean p0) throws android.os.RemoteException;

    public abstract void d() throws android.os.RemoteException;

    public abstract void d(boolean p0) throws android.os.RemoteException;

    public abstract void e() throws android.os.RemoteException;

    public abstract void e(boolean p0) throws android.os.RemoteException;

    public abstract int f() throws android.os.RemoteException;

    public abstract boolean g() throws android.os.RemoteException;

    public abstract boolean h() throws android.os.RemoteException;

    public abstract boolean i() throws android.os.RemoteException;

    public abstract android.location.Location j() throws android.os.RemoteException;

    public abstract com.google.android.gms.maps.internal.IUiSettingsDelegate k() throws android.os.RemoteException;

    public abstract com.google.android.gms.maps.internal.IProjectionDelegate l() throws android.os.RemoteException;

    public abstract com.google.android.gms.dynamic.d m() throws android.os.RemoteException;

    public abstract boolean n() throws android.os.RemoteException;

    public abstract com.google.android.gms.maps.model.internal.d o() throws android.os.RemoteException;

}

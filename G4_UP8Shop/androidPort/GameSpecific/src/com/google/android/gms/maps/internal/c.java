// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

public interface c extends android.os.IInterface {
    // Methods
    public abstract com.google.android.gms.maps.internal.ICameraUpdateFactoryDelegate a() throws android.os.RemoteException;

    public abstract com.google.android.gms.maps.internal.IMapViewDelegate a(com.google.android.gms.dynamic.d p0, com.google.android.gms.maps.GoogleMapOptions p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.maps.internal.IStreetViewPanoramaViewDelegate a(com.google.android.gms.dynamic.d p0, com.google.android.gms.maps.StreetViewPanoramaOptions p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.dynamic.d p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.dynamic.d p0, int p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.maps.internal.IMapFragmentDelegate b(com.google.android.gms.dynamic.d p0) throws android.os.RemoteException;

    public abstract com.google.android.gms.maps.model.internal.a b() throws android.os.RemoteException;

    public abstract com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate c(com.google.android.gms.dynamic.d p0) throws android.os.RemoteException;

}

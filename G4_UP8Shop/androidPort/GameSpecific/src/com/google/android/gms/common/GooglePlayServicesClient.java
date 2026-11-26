// Decompiled from classes.dex (SourceFile: GooglePlayServicesClient.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common;

public interface GooglePlayServicesClient {
    // Methods
    public abstract void a() throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks p0) ;

    public abstract void a(com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p0) ;

    public abstract void b() throws android.os.RemoteException;

    public abstract boolean b(com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks p0) ;

    public abstract boolean b(com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p0) ;

    public abstract void c(com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks p0) ;

    public abstract void c(com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p0) ;

    public abstract boolean c();

    public abstract boolean d();

}

// Decompiled from classes.dex (SourceFile: GoogleApiClient.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.api;

public interface GoogleApiClient {
    // Methods
    public abstract android.os.Looper a();

    public abstract com.google.android.gms.common.ConnectionResult a(long p0, java.util.concurrent.TimeUnit p1) throws android.os.RemoteException;

    public abstract <C extends com.google.android.gms.common.api.Api$a> C a(com.google.android.gms.common.api.Api$c<C> p0) ;

    public abstract <A extends com.google.android.gms.common.api.Api$a, T extends com.google.android.gms.common.api.a$b<? extends com.google.android.gms.common.api.Result, A>> T a(T p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p0) ;

    public abstract void a(com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p0) ;

    public abstract <A extends com.google.android.gms.common.api.Api$a, T extends com.google.android.gms.common.api.a$b<? extends com.google.android.gms.common.api.Result, A>> T b(T p0) throws android.os.RemoteException;

    public abstract void b() throws android.os.RemoteException;

    public abstract boolean b(com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p0) ;

    public abstract boolean b(com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p0) ;

    public abstract com.google.android.gms.common.ConnectionResult c() throws android.os.RemoteException;

    public abstract void c(com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p0);

    public abstract void c(com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p0);

    public abstract void d() throws android.os.RemoteException;

    public abstract void e() throws android.os.RemoteException;

    public abstract void f() throws android.os.RemoteException;

    public abstract boolean g();

    public abstract boolean h();

}

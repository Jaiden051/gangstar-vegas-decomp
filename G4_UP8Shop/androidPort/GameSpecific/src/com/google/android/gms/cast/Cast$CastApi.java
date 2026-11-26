// Decompiled from classes.dex (SourceFile: Cast$CastApi.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

public interface Cast$CastApi {
    // Methods
    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1, com.google.android.gms.cast.LaunchOptions p2) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1, java.lang.String p2) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1, boolean p2) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.common.api.GoogleApiClient p0) throws java.io.IOException;

    public abstract void a(com.google.android.gms.common.api.GoogleApiClient p0, double p1) throws java.io.IOException;

    public abstract void a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1, com.google.android.gms.cast.Cast$MessageReceivedCallback p2) throws java.io.IOException;

    public abstract void a(com.google.android.gms.common.api.GoogleApiClient p0, boolean p1) throws java.io.IOException;

    public abstract com.google.android.gms.common.api.PendingResult b(com.google.android.gms.common.api.GoogleApiClient p0) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult b(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult b(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1, java.lang.String p2) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult c(com.google.android.gms.common.api.GoogleApiClient p0) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult c(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult d(com.google.android.gms.common.api.GoogleApiClient p0) throws android.os.RemoteException;

    public abstract void d(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) throws java.io.IOException;

    public abstract double e(com.google.android.gms.common.api.GoogleApiClient p0) ;

    public abstract boolean f(com.google.android.gms.common.api.GoogleApiClient p0) ;

    public abstract com.google.android.gms.cast.ApplicationMetadata g(com.google.android.gms.common.api.GoogleApiClient p0) ;

    public abstract java.lang.String h(com.google.android.gms.common.api.GoogleApiClient p0) ;

}

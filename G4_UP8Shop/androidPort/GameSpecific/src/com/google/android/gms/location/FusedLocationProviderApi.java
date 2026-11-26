// Decompiled from classes.dex (SourceFile: FusedLocationProviderApi.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.location;

public interface FusedLocationProviderApi {
    // Fields
    public static final java.lang.String a = null;
    public static final java.lang.String b = null;

    // Methods
    public abstract android.location.Location a(com.google.android.gms.common.api.GoogleApiClient p0) ;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, android.app.PendingIntent p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, android.location.Location p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.location.LocationListener p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.location.LocationRequest p1, android.app.PendingIntent p2) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.location.LocationRequest p1, com.google.android.gms.location.LocationListener p2) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.location.LocationRequest p1, com.google.android.gms.location.LocationListener p2, android.os.Looper p3) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, boolean p1) throws android.os.RemoteException;

}

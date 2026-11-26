// Decompiled from classes.dex (SourceFile: GeofencingApi.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.location;

public interface GeofencingApi {
    // Methods
    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, android.app.PendingIntent p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, java.util.List<String> p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, java.util.List<com.google.android.gms.location.Geofence> p1, android.app.PendingIntent p2) throws android.os.RemoteException;

}

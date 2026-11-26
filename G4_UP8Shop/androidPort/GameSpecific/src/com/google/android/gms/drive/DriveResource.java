// Decompiled from classes.dex (SourceFile: DriveResource.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive;

public interface DriveResource {
    // Methods
    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.drive.events.DriveEvent$Listener<com.google.android.gms.drive.events.ChangeEvent> p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.drive.DriveId a();

    public abstract com.google.android.gms.common.api.PendingResult b(com.google.android.gms.common.api.GoogleApiClient p0) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult b(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.drive.MetadataChangeSet p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult b(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.drive.events.DriveEvent$Listener<com.google.android.gms.drive.events.ChangeEvent> p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult c(com.google.android.gms.common.api.GoogleApiClient p0) throws android.os.RemoteException;

}

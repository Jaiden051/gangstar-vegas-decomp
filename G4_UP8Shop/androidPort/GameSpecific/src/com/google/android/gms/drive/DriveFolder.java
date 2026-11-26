// Decompiled from classes.dex (SourceFile: DriveFolder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive;

public interface DriveFolder extends com.google.android.gms.drive.DriveResource {
    // Fields
    public static final java.lang.String u_ = null;

    // Methods
    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.drive.MetadataChangeSet p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.drive.MetadataChangeSet p1, com.google.android.gms.drive.Contents p2) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.drive.query.Query p1) throws android.os.RemoteException;

}

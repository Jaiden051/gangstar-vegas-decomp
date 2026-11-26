// Decompiled from classes.dex (SourceFile: DriveFile.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive;

public interface DriveFile extends com.google.android.gms.drive.DriveResource {
    // Fields
    public static final int b = 0;
    public static final int c = 0;
    public static final int t_ = 0;

    // Methods
    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, int p1, com.google.android.gms.drive.DriveFile$DownloadProgressListener p2) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.drive.Contents p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.drive.Contents p1, com.google.android.gms.drive.MetadataChangeSet p2) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult b(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.drive.Contents p1) throws android.os.RemoteException;

}

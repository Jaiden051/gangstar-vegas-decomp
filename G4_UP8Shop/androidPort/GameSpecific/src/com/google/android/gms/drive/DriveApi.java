// Decompiled from classes.dex (SourceFile: DriveApi.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive;

public interface DriveApi {
    // Methods
    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.drive.Contents p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.drive.query.Query p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.drive.DriveFile a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.drive.DriveId p1) ;

    public abstract com.google.android.gms.drive.OpenFileActivityBuilder a();

    public abstract com.google.android.gms.drive.CreateFileActivityBuilder b();

    public abstract com.google.android.gms.drive.DriveFolder b(com.google.android.gms.common.api.GoogleApiClient p0) ;

    public abstract com.google.android.gms.drive.DriveFolder b(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.drive.DriveId p1);

    public abstract com.google.android.gms.drive.DriveFolder c(com.google.android.gms.common.api.GoogleApiClient p0) ;

    public abstract com.google.android.gms.common.api.PendingResult d(com.google.android.gms.common.api.GoogleApiClient p0) throws android.os.RemoteException;

}

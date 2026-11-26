// Decompiled from classes.dex (SourceFile: Snapshots.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.snapshot;

public interface Snapshots {
    // Fields
    public static final java.lang.String a = null;
    public static final java.lang.String b = null;
    public static final int c = 0;

    // Methods
    public abstract int a(com.google.android.gms.common.api.GoogleApiClient p0) ;

    public abstract android.content.Intent a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1, boolean p2, boolean p3, int p4) ;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.games.snapshot.Snapshot p1, com.google.android.gms.games.snapshot.SnapshotMetadataChange p2) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.games.snapshot.SnapshotMetadata p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1, com.google.android.gms.games.snapshot.Snapshot p2) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1, java.lang.String p2, com.google.android.gms.games.snapshot.SnapshotMetadataChange p3, com.google.android.gms.drive.Contents p4) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, java.lang.String p1, boolean p2) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, boolean p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.games.snapshot.SnapshotMetadata a(android.os.Bundle p0) ;

    public abstract void a(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.games.snapshot.Snapshot p1) ;

    public abstract int b(com.google.android.gms.common.api.GoogleApiClient p0) ;

    public abstract com.google.android.gms.common.api.PendingResult b(com.google.android.gms.common.api.GoogleApiClient p0, com.google.android.gms.games.snapshot.SnapshotMetadata p1) throws android.os.RemoteException;

}

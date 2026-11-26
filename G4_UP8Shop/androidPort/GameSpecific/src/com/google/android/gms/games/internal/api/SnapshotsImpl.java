// Decompiled from classes.dex (SourceFile: SnapshotsImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

import com.google.android.gms.games.Games;
public final class SnapshotsImpl implements com.google.android.gms.games.snapshot.Snapshots {
    // Methods
    public SnapshotsImpl()
    {
      super();
    }

    public final int a(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return Games.c(p0).A();
    }

    public final android.content.Intent a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            boolean p2,
            boolean p3,
            int p4)
    {
      return Games.c(p0).a(p1, p2, p3, p4);
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.snapshot.Snapshots$CommitSnapshotResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.games.snapshot.Snapshot p1,
            com.google.android.gms.games.snapshot.SnapshotMetadataChange p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.SnapshotsImpl$3(this, p1, p2));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.snapshot.Snapshots$OpenSnapshotResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.games.snapshot.SnapshotMetadata p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.SnapshotsImpl$2(this, p1.y_(), false));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.snapshot.Snapshots$OpenSnapshotResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            com.google.android.gms.games.snapshot.Snapshot p2)
 throws android.os.RemoteException {
      com.google.android.gms.games.snapshot.SnapshotMetadata v4;
      v4 = p2.a();
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.SnapshotsImpl$5(this, p1, v4.c(), new com.google.android.gms.games.snapshot.SnapshotMetadataChange$Builder().a(v4).a(), p2.b()));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.snapshot.Snapshots$OpenSnapshotResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            String p2,
            com.google.android.gms.games.snapshot.SnapshotMetadataChange p3,
            com.google.android.gms.drive.Contents p4)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.SnapshotsImpl$5(this, p1, p2, p3, p4));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.snapshot.Snapshots$OpenSnapshotResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            boolean p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.SnapshotsImpl$2(this, p1, false));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.snapshot.Snapshots$LoadSnapshotsResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            boolean p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.SnapshotsImpl$1(this, p1));
    }

    public final com.google.android.gms.games.snapshot.SnapshotMetadata a(android.os.Bundle p0)
    {
      if ( p0 != null && p0.containsKey("com.google.android.gms.games.SNAPSHOT_METADATA") )
        return (com.google.android.gms.games.snapshot.SnapshotMetadata)p0.getParcelable("com.google.android.gms.games.SNAPSHOT_METADATA");
      else
        return null;
    }

    public final void a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.games.snapshot.Snapshot p1)
    {
      Games.c(p0).a(p1);
    }

    public final int b(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return Games.c(p0).B();
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.snapshot.Snapshots$DeleteSnapshotResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.games.snapshot.SnapshotMetadata p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.SnapshotsImpl$4(this, p1));
    }

}

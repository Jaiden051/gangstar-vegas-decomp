// Decompiled from classes.dex (SourceFile: GamesClientImpl$LoadSnapshotsResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$LoadSnapshotsResultImpl extends com.google.android.gms.common.api.b implements com.google.android.gms.games.snapshot.Snapshots$LoadSnapshotsResult {
    // Methods
    GamesClientImpl$LoadSnapshotsResultImpl(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
    }

    public final com.google.android.gms.games.snapshot.SnapshotMetadataBuffer b()
    {
      return new com.google.android.gms.games.snapshot.SnapshotMetadataBuffer(this.b);
    }

}

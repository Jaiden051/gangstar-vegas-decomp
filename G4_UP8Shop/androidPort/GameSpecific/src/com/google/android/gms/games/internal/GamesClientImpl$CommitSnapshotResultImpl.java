// Decompiled from classes.dex (SourceFile: GamesClientImpl$CommitSnapshotResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$CommitSnapshotResultImpl extends com.google.android.gms.common.api.b implements com.google.android.gms.games.snapshot.Snapshots$CommitSnapshotResult {
    // Fields
    private final com.google.android.gms.games.snapshot.SnapshotMetadata c;

    // Methods
    GamesClientImpl$CommitSnapshotResultImpl(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
      com.google.android.gms.games.snapshot.SnapshotMetadataBuffer v2;
      v2 = new com.google.android.gms.games.snapshot.SnapshotMetadataBuffer(p0);
      try
      {
        if ( v2.b() > 0 )
        {
          this.c = (com.google.android.gms.games.snapshot.SnapshotMetadata)new com.google.android.gms.games.snapshot.SnapshotMetadataEntity(v2.a(0));
          return;
        }
        this.c = null;
      }
      finally
      {
        v2.c();
      }
    
    }

    public final com.google.android.gms.games.snapshot.SnapshotMetadata b()
    {
      return this.c;
    }

}

// Decompiled from classes.dex (SourceFile: GamesClientImpl$OpenSnapshotResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

import com.google.android.gms.internal.gy;
final class GamesClientImpl$OpenSnapshotResultImpl extends com.google.android.gms.common.api.b implements com.google.android.gms.games.snapshot.Snapshots$OpenSnapshotResult {
    // Fields
    private com.google.android.gms.games.snapshot.Snapshot c;
    private java.lang.String d;
    private com.google.android.gms.games.snapshot.Snapshot e;
    private com.google.android.gms.drive.Contents f;

    // Methods
    GamesClientImpl$OpenSnapshotResultImpl(com.google.android.gms.common.data.DataHolder p0, com.google.android.gms.drive.Contents p1)
    {
      this(p0, null, p1, null, null);
    }

    GamesClientImpl$OpenSnapshotResultImpl(
            com.google.android.gms.common.data.DataHolder p0,
            String p1,
            com.google.android.gms.drive.Contents p2,
            com.google.android.gms.drive.Contents p3,
            com.google.android.gms.drive.Contents p4)
    {
            super(p0);
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            com.google.android.gms.games.snapshot.SnapshotMetadataBuffer v6;
            v6 = new com.google.android.gms.games.snapshot.SnapshotMetadataBuffer(p0);
            try
            {
            if ( v6.b() == 0 )
            {
            this.c = null;
            this.e = null;
            { _pc = 1; continue _sm; }
            }
            if ( v6.b() == 1 )
            {
            gy.A(p0.e() != 4004);
            this.c = (com.google.android.gms.games.snapshot.Snapshot)new com.google.android.gms.games.snapshot.SnapshotEntity((com.google.android.gms.games.snapshot.SnapshotMetadata)new com.google.android.gms.games.snapshot.SnapshotMetadataEntity(v6.a(0)), p2);
            this.e = null;
            { _pc = 1; continue _sm; }
            }
            this.c = (com.google.android.gms.games.snapshot.Snapshot)new com.google.android.gms.games.snapshot.SnapshotEntity((com.google.android.gms.games.snapshot.SnapshotMetadata)new com.google.android.gms.games.snapshot.SnapshotMetadataEntity(v6.a(0)), p2);
            this.e = (com.google.android.gms.games.snapshot.Snapshot)new com.google.android.gms.games.snapshot.SnapshotEntity((com.google.android.gms.games.snapshot.SnapshotMetadata)new com.google.android.gms.games.snapshot.SnapshotMetadataEntity(v6.a(1)), p3);
            }
            finally
            {
            v6.c();
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            this.d = p1;
            this.f = p4;
            
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

    public final com.google.android.gms.games.snapshot.Snapshot b()
    {
      return this.c;
    }

    public final String c()
    {
      return this.d;
    }

    public final com.google.android.gms.games.snapshot.Snapshot e()
    {
      return this.e;
    }

    public final com.google.android.gms.drive.Contents f()
    {
      return this.f;
    }

}

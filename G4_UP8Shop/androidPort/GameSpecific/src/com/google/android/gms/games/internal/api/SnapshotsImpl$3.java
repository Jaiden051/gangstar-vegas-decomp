// Decompiled from classes.dex (SourceFile: SnapshotsImpl$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class SnapshotsImpl$3 extends com.google.android.gms.games.internal.api.SnapshotsImpl$CommitImpl {
    // Fields
    final com.google.android.gms.games.snapshot.Snapshot a;
    final com.google.android.gms.games.snapshot.SnapshotMetadataChange b;
    final com.google.android.gms.games.internal.api.SnapshotsImpl c;

    // Methods
    SnapshotsImpl$3(
            com.google.android.gms.games.internal.api.SnapshotsImpl p0,
            com.google.android.gms.games.snapshot.Snapshot p1,
            com.google.android.gms.games.snapshot.SnapshotMetadataChange p2)
    {
      super(0);
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.a((com.google.android.gms.common.api.a$d)this, this.a, this.b);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).a((com.google.android.gms.common.api.a$d)this, this.a, this.b);
    }

}

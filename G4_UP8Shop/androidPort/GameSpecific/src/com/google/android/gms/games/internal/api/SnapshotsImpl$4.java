// Decompiled from classes.dex (SourceFile: SnapshotsImpl$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class SnapshotsImpl$4 extends com.google.android.gms.games.internal.api.SnapshotsImpl$DeleteImpl {
    // Fields
    final com.google.android.gms.games.snapshot.SnapshotMetadata a;
    final com.google.android.gms.games.internal.api.SnapshotsImpl b;

    // Methods
    SnapshotsImpl$4(
            com.google.android.gms.games.internal.api.SnapshotsImpl p0,
            com.google.android.gms.games.snapshot.SnapshotMetadata p1)
    {
      super(0);
      this.b = p0;
      this.a = p1;
    
    }

    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.j((com.google.android.gms.common.api.a$d)this, this.a.c());
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).j((com.google.android.gms.common.api.a$d)this, this.a.c());
    }

}

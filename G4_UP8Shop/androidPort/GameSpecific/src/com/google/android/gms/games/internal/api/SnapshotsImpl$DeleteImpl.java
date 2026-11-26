// Decompiled from classes.dex (SourceFile: SnapshotsImpl$DeleteImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class SnapshotsImpl$DeleteImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected SnapshotsImpl$DeleteImpl()
    {
      super();
    }

    /* synthetic */ SnapshotsImpl$DeleteImpl(int p0)
    {
      this();
    }

    private com.google.android.gms.games.snapshot.Snapshots$DeleteSnapshotResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.snapshot.Snapshots$DeleteSnapshotResult)new com.google.android.gms.games.internal.api.SnapshotsImpl$DeleteImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.SnapshotsImpl$DeleteImpl$1(this, p0);
    }

}

// Decompiled from classes.dex (SourceFile: SnapshotsImpl$CommitImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class SnapshotsImpl$CommitImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected SnapshotsImpl$CommitImpl()
    {
      super();
    }

    /* synthetic */ SnapshotsImpl$CommitImpl(int p0)
    {
      this();
    }

    private com.google.android.gms.games.snapshot.Snapshots$CommitSnapshotResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.snapshot.Snapshots$CommitSnapshotResult)new com.google.android.gms.games.internal.api.SnapshotsImpl$CommitImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.SnapshotsImpl$CommitImpl$1(this, p0);
    }

}

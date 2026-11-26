// Decompiled from classes.dex (SourceFile: SnapshotsImpl$OpenImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class SnapshotsImpl$OpenImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected SnapshotsImpl$OpenImpl()
    {
      super();
    }

    /* synthetic */ SnapshotsImpl$OpenImpl(int p0)
    {
      this();
    }

    private com.google.android.gms.games.snapshot.Snapshots$OpenSnapshotResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.snapshot.Snapshots$OpenSnapshotResult)new com.google.android.gms.games.internal.api.SnapshotsImpl$OpenImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.SnapshotsImpl$OpenImpl$1(this, p0);
    }

}

// Decompiled from classes.dex (SourceFile: SnapshotsImpl$LoadImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class SnapshotsImpl$LoadImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected SnapshotsImpl$LoadImpl()
    {
      super();
    }

    /* synthetic */ SnapshotsImpl$LoadImpl(int p0)
    {
      this();
    }

    private com.google.android.gms.games.snapshot.Snapshots$LoadSnapshotsResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.snapshot.Snapshots$LoadSnapshotsResult)new com.google.android.gms.games.internal.api.SnapshotsImpl$LoadImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.SnapshotsImpl$LoadImpl$1(this, p0);
    }

}

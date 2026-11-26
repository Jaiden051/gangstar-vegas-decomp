// Decompiled from classes.dex (SourceFile: SnapshotsImpl$CommitImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class SnapshotsImpl$CommitImpl$1 implements com.google.android.gms.games.snapshot.Snapshots$CommitSnapshotResult {
    // Fields
    final com.google.android.gms.common.api.Status a;
    final com.google.android.gms.games.internal.api.SnapshotsImpl$CommitImpl b;

    // Methods
    SnapshotsImpl$CommitImpl$1(com.google.android.gms.games.internal.api.SnapshotsImpl$CommitImpl p0, com.google.android.gms.common.api.Status p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final com.google.android.gms.games.snapshot.SnapshotMetadata b()
    {
      return null;
    }

}

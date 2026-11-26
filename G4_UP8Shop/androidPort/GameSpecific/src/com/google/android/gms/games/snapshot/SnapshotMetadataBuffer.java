// Decompiled from classes.dex (SourceFile: SnapshotMetadataBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.snapshot;

public final class SnapshotMetadataBuffer extends com.google.android.gms.common.data.DataBuffer {
    // Methods
    public SnapshotMetadataBuffer(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
    }

    public final com.google.android.gms.games.snapshot.SnapshotMetadata a(int p0)
    {
      return (com.google.android.gms.games.snapshot.SnapshotMetadata)new com.google.android.gms.games.snapshot.SnapshotMetadataRef(this.a, p0);
    }

    /* synthetic */ public final Object b(int p0)
    {
      return this.a(p0);
    }

}

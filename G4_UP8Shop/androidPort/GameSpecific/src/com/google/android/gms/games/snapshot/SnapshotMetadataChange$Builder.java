// Decompiled from classes.dex (SourceFile: SnapshotMetadataChange$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.snapshot;

public final class SnapshotMetadataChange$Builder {
    // Fields
    private java.lang.String a;
    private java.lang.Long b;
    private com.google.android.gms.common.data.a c;
    private android.net.Uri d;

    // Methods
    public SnapshotMetadataChange$Builder()
    {
      super();
    }

    private com.google.android.gms.games.snapshot.SnapshotMetadataChange$Builder a(long p0)
    {
      this.b = Long.valueOf(p0);
      return this;
    }

    private com.google.android.gms.games.snapshot.SnapshotMetadataChange$Builder a(
            android.graphics.Bitmap p0)
    {
      this.c = new com.google.android.gms.common.data.a(p0);
      this.d = null;
      return this;
    }

    private com.google.android.gms.games.snapshot.SnapshotMetadataChange$Builder a(
            String p0)
    {
      this.a = p0;
      return this;
    }

    public final com.google.android.gms.games.snapshot.SnapshotMetadataChange$Builder a(
            com.google.android.gms.games.snapshot.SnapshotMetadata p0)
    {
      this.a = p0.k();
      this.b = Long.valueOf(p0.m());
      if ( this.b.longValue() == -1 )
        this.b = null;
      this.d = p0.d();
      if ( this.d != null )
        this.c = null;
      return this;
    }

    public final com.google.android.gms.games.snapshot.SnapshotMetadataChange a()
    {
      return new com.google.android.gms.games.snapshot.SnapshotMetadataChange(this.a, this.b, this.c, this.d);
    }

}

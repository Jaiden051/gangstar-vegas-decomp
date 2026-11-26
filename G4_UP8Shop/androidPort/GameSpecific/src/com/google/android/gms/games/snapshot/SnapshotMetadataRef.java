// Decompiled from classes.dex (SourceFile: SnapshotMetadataRef.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.snapshot;

public final class SnapshotMetadataRef extends com.google.android.gms.common.data.d implements com.google.android.gms.games.snapshot.SnapshotMetadata {
    // Fields
    private final com.google.android.gms.games.Game c;
    private final com.google.android.gms.games.Player d;

    // Methods
    public SnapshotMetadataRef(com.google.android.gms.common.data.DataHolder p0, int p1)
    {
      super(p0, p1);
      this.c = (com.google.android.gms.games.Game)new com.google.android.gms.games.GameRef(p0, p1);
      this.d = (com.google.android.gms.games.Player)new com.google.android.gms.games.PlayerRef(p0, p1);
    }

    private com.google.android.gms.games.snapshot.SnapshotMetadata n()
    {
      return (com.google.android.gms.games.snapshot.SnapshotMetadata)new com.google.android.gms.games.snapshot.SnapshotMetadataEntity((com.google.android.gms.games.snapshot.SnapshotMetadata)this);
    }

    public final com.google.android.gms.games.Game a()
    {
      return this.c;
    }

    public final void a(android.database.CharArrayBuffer p0)
    {
      this.a("description", p0);
    }

    public final com.google.android.gms.games.Player b()
    {
      return this.d;
    }

    public final String c()
    {
      return this.e("external_snapshot_id");
    }

    public final android.net.Uri d()
    {
      return this.h("cover_icon_image_uri");
    }

    public final int describeContents()
    {
      return 0;
    }

    public final String e()
    {
      return this.e("cover_icon_image_url");
    }

    public final boolean equals(Object p0)
    {
      return SnapshotMetadataEntity.a((com.google.android.gms.games.snapshot.SnapshotMetadata)this, p0);
    }

    public final float f()
    {
      float v1;
      float v2;
      float v3; // RETVAL
    
      v1 = 0.0f;
      v2 = this.f("cover_icon_image_height");
      v3 = this.f("cover_icon_image_width");
      if ( v2 != 0.0f )
        return v3 / v2;
      return v1;
    }

    /* synthetic */ public final Object h()
    {
      return this.n();
    }

    public final int hashCode()
    {
      return SnapshotMetadataEntity.a((com.google.android.gms.games.snapshot.SnapshotMetadata)this);
    }

    public final String j()
    {
      return this.e("title");
    }

    public final String k()
    {
      return this.e("description");
    }

    public final long l()
    {
      return this.b("last_modified_timestamp");
    }

    public final long m()
    {
      return this.b("duration");
    }

    public final String toString()
    {
      return SnapshotMetadataEntity.b((com.google.android.gms.games.snapshot.SnapshotMetadata)this);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      ((com.google.android.gms.games.snapshot.SnapshotMetadataEntity)this.n()).writeToParcel(p0, p1);
    }

    public final String y_()
    {
      return this.e("unique_name");
    }

}

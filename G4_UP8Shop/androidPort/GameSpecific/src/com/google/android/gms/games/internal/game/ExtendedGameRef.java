// Decompiled from classes.dex (SourceFile: ExtendedGameRef.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.game;

public class ExtendedGameRef extends com.google.android.gms.common.data.d implements com.google.android.gms.games.internal.game.ExtendedGame {
    // Fields
    private final com.google.android.gms.games.GameRef c;
    private final com.google.android.gms.games.snapshot.SnapshotMetadataRef d;
    private final int e;

    // Methods
    ExtendedGameRef(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      super(p0, p1);
      this.c = new com.google.android.gms.games.GameRef(p0, p1);
      this.e = p2;
      if ( !this.a("external_snapshot_id") || this.i("external_snapshot_id") )
        this.d = null;
      else
        this.d = new com.google.android.gms.games.snapshot.SnapshotMetadataRef(p0, p1);
    }

    private com.google.android.gms.games.internal.game.ExtendedGame n()
    {
      return (com.google.android.gms.games.internal.game.ExtendedGame)new com.google.android.gms.games.internal.game.ExtendedGameEntity((com.google.android.gms.games.internal.game.ExtendedGame)this);
    }

    public final com.google.android.gms.games.Game a()
    {
      return (com.google.android.gms.games.Game)this.c;
    }

    public final java.util.ArrayList<com.google.android.gms.games.internal.game.GameBadge> b()
    {
      int v1;
      java.util.ArrayList v4;
      v1 = 0;
      if ( this.v_.c("badge_title", this.z_, this.v_.a(this.z_)) == null )
        return new java.util.ArrayList(0);
      v4 = new java.util.ArrayList(this.e);
      while ( v1 < this.e )
        v4.add(new com.google.android.gms.games.internal.game.GameBadgeRef(this.v_, this.z_ + v1++));
      return v4;
    }

    public final int c()
    {
      return this.c("availability");
    }

    public final boolean d()
    {
      return this.d("owned");
    }

    public int describeContents()
    {
      return 0;
    }

    public final int e()
    {
      return this.c("achievement_unlocked_count");
    }

    public boolean equals(Object p0)
    {
      return ExtendedGameEntity.a((com.google.android.gms.games.internal.game.ExtendedGame)this, p0);
    }

    public final long f()
    {
      return this.b("last_played_server_time");
    }

    /* synthetic */ public final Object h()
    {
      return this.n();
    }

    public int hashCode()
    {
      return ExtendedGameEntity.a((com.google.android.gms.games.internal.game.ExtendedGame)this);
    }

    public final String j()
    {
      return this.e("formatted_price");
    }

    public final long k()
    {
      return this.b("full_price_micros");
    }

    public final long k_()
    {
      return this.b("price_micros");
    }

    public final String l()
    {
      return this.e("formatted_full_price");
    }

    public final com.google.android.gms.games.snapshot.SnapshotMetadata m()
    {
      return (com.google.android.gms.games.snapshot.SnapshotMetadata)this.d;
    }

    public String toString()
    {
      return ExtendedGameEntity.b((com.google.android.gms.games.internal.game.ExtendedGame)this);
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      ((com.google.android.gms.games.internal.game.ExtendedGameEntity)this.n()).writeToParcel(p0, p1);
    }

}

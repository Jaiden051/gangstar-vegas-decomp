// Decompiled from classes.dex (SourceFile: MostRecentGameInfoRef.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.player;

public final class MostRecentGameInfoRef extends com.google.android.gms.common.data.d implements com.google.android.gms.games.internal.player.MostRecentGameInfo {
    // Fields
    private final com.google.android.gms.games.internal.player.PlayerColumnNames c;

    // Methods
    public MostRecentGameInfoRef(
            com.google.android.gms.common.data.DataHolder p0,
            int p1,
            com.google.android.gms.games.internal.player.PlayerColumnNames p2)
    {
      super(p0, p1);
      this.c = p2;
    }

    private com.google.android.gms.games.internal.player.MostRecentGameInfo j()
    {
      return (com.google.android.gms.games.internal.player.MostRecentGameInfo)new com.google.android.gms.games.internal.player.MostRecentGameInfoEntity((com.google.android.gms.games.internal.player.MostRecentGameInfo)this);
    }

    public final String a()
    {
      return this.e(this.c.s);
    }

    public final String b()
    {
      return this.e(this.c.t);
    }

    public final long c()
    {
      return this.b(this.c.u);
    }

    public final android.net.Uri d()
    {
      return this.h(this.c.v);
    }

    public final int describeContents()
    {
      return 0;
    }

    public final android.net.Uri e()
    {
      return this.h(this.c.w);
    }

    public final boolean equals(Object p0)
    {
      return MostRecentGameInfoEntity.a((com.google.android.gms.games.internal.player.MostRecentGameInfo)this, p0);
    }

    public final android.net.Uri f()
    {
      return this.h(this.c.x);
    }

    /* synthetic */ public final Object h()
    {
      return this.j();
    }

    public final int hashCode()
    {
      return MostRecentGameInfoEntity.a((com.google.android.gms.games.internal.player.MostRecentGameInfo)this);
    }

    public final String toString()
    {
      return MostRecentGameInfoEntity.b((com.google.android.gms.games.internal.player.MostRecentGameInfo)this);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      ((com.google.android.gms.games.internal.player.MostRecentGameInfoEntity)this.j()).writeToParcel(p0, p1);
    }

}

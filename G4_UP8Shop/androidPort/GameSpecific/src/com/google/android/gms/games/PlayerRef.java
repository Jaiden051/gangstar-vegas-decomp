// Decompiled from classes.dex (SourceFile: PlayerRef.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games;

public final class PlayerRef extends com.google.android.gms.common.data.d implements com.google.android.gms.games.Player {
    // Fields
    private final com.google.android.gms.games.internal.player.PlayerColumnNames c;
    private final com.google.android.gms.games.PlayerLevelInfo d;
    private final com.google.android.gms.games.internal.player.MostRecentGameInfoRef e;

    // Methods
    public PlayerRef(com.google.android.gms.common.data.DataHolder p0, int p1)
    {
      this(p0, p1, null);
    }

    public PlayerRef(com.google.android.gms.common.data.DataHolder p0, int p1, String p2)
    {
      super(p0, p1);
      int v5;
      int v6;
      com.google.android.gms.games.PlayerLevel v7;
      com.google.android.gms.games.PlayerLevel v8;
      this.c = new com.google.android.gms.games.internal.player.PlayerColumnNames(p2);
      this.e = new com.google.android.gms.games.internal.player.MostRecentGameInfoRef(p0, p1, this.c);
      if ( !this.i(this.c.j) && this.b(this.c.j) != -1 )
      {
        v5 = this.c(this.c.k);
        v6 = this.c(this.c.n);
        v7 = new com.google.android.gms.games.PlayerLevel(v5, this.b(this.c.l), this.b(this.c.m));
        if ( v5 == v6 )
          v8 = v7;
        else
          v8 = new com.google.android.gms.games.PlayerLevel(v6, this.b(this.c.m), this.b(this.c.o));
        this.d = new com.google.android.gms.games.PlayerLevelInfo(this.b(this.c.j), this.b(this.c.p), v7, v8);
      }
      else
      {
        this.d = null;
      }
    
    }

    private com.google.android.gms.games.Player r()
    {
      return (com.google.android.gms.games.Player)new com.google.android.gms.games.PlayerEntity((com.google.android.gms.games.Player)this);
    }

    private boolean s()
    {
      boolean v1;
      v1 = false;
      if ( !this.i(this.c.j) )
        return this.b(this.c.j) != -1;
      return v1;
    }

    public final String a()
    {
      return this.e(this.c.a);
    }

    public final void a(android.database.CharArrayBuffer p0)
    {
      this.a(this.c.b, p0);
    }

    public final String b()
    {
      return this.e(this.c.b);
    }

    public final void b(android.database.CharArrayBuffer p0)
    {
      this.a(this.c.q, p0);
    }

    public final boolean c()
    {
      return this.d() != null;
    }

    public final android.net.Uri d()
    {
      return this.h(this.c.c);
    }

    public final int describeContents()
    {
      return 0;
    }

    public final String e()
    {
      return this.e(this.c.d);
    }

    public final boolean equals(Object p0)
    {
      return PlayerEntity.a((com.google.android.gms.games.Player)this, p0);
    }

    public final boolean f()
    {
      return this.g_() != null;
    }

    public final android.net.Uri g_()
    {
      return this.h(this.c.e);
    }

    /* synthetic */ public final Object h()
    {
      return this.r();
    }

    public final int hashCode()
    {
      return PlayerEntity.a((com.google.android.gms.games.Player)this);
    }

    public final String j()
    {
      return this.e(this.c.f);
    }

    public final long k()
    {
      return this.b(this.c.g);
    }

    public final long l()
    {
      if ( this.a(this.c.i) && !this.i(this.c.i) )
        return this.b(this.c.i);
      else
        return -1;
    }

    public final int m()
    {
      return this.c(this.c.h);
    }

    public final boolean n()
    {
      return this.d(this.c.r);
    }

    public final String o()
    {
      return this.e(this.c.q);
    }

    public final com.google.android.gms.games.PlayerLevelInfo p()
    {
      return this.d;
    }

    public final com.google.android.gms.games.internal.player.MostRecentGameInfo q()
    {
      if ( this.i(this.c.s) )
        return null;
      else
        return (com.google.android.gms.games.internal.player.MostRecentGameInfo)this.e;
    }

    public final String toString()
    {
      return PlayerEntity.b((com.google.android.gms.games.Player)this);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      ((com.google.android.gms.games.PlayerEntity)this.r()).writeToParcel(p0, p1);
    }

}

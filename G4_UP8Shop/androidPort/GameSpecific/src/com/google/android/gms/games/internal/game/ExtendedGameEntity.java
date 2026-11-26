// Decompiled from classes.dex (SourceFile: ExtendedGameEntity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.game;

import com.google.android.gms.games.internal.GamesDowngradeableSafeParcel;
import com.google.android.gms.internal.hb;
import com.google.android.gms.internal.hl;
public final class ExtendedGameEntity extends com.google.android.gms.games.internal.GamesDowngradeableSafeParcel implements com.google.android.gms.games.internal.game.ExtendedGame {
    // Fields
    public static final com.google.android.gms.games.internal.game.ExtendedGameEntityCreator CREATOR;
    private final int a;
    private final com.google.android.gms.games.GameEntity b;
    private final int c;
    private final boolean d;
    private final int e;
    private final long f;
    private final long g;
    private final java.lang.String h;
    private final long i;
    private final java.lang.String j;
    private final java.util.ArrayList k;
    private final com.google.android.gms.games.snapshot.SnapshotMetadataEntity l;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.games.internal.game.ExtendedGameEntity$ExtendedGameEntityCreatorCompat();
    }

    ExtendedGameEntity(
            int p0,
            com.google.android.gms.games.GameEntity p1,
            int p2,
            boolean p3,
            int p4,
            long p5,
            long p7,
            String p9,
            long p10,
            String p12,
            java.util.ArrayList<com.google.android.gms.games.internal.game.GameBadgeEntity> p13,
            com.google.android.gms.games.snapshot.SnapshotMetadataEntity p14)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
      this.f = p5;
      this.g = p7;
      this.h = p9;
      this.i = p10;
      this.j = p12;
      this.k = p13;
      this.l = p14;
    }

    public ExtendedGameEntity(com.google.android.gms.games.internal.game.ExtendedGame p0)
    {
      super();
      com.google.android.gms.games.snapshot.SnapshotMetadataEntity v2;
      com.google.android.gms.games.Game v3; // RETVAL
      com.google.android.gms.games.GameEntity v4;
      com.google.android.gms.games.snapshot.SnapshotMetadata v5; // RETVAL
      java.util.ArrayList v6;
      int v7;
      int i;
      v2 = null;
      this.a = 2;
      v3 = p0.a();
      if ( v3 != null )
        v4 = new com.google.android.gms.games.GameEntity(v3);
      else
        v4 = null;
      this.b = v4;
      this.c = p0.c();
      this.d = p0.d();
      this.e = p0.e();
      this.f = p0.f();
      this.g = p0.k_();
      this.h = p0.j();
      this.i = p0.k();
      this.j = p0.l();
      v5 = p0.m();
      if ( v5 != null )
        v2 = new com.google.android.gms.games.snapshot.SnapshotMetadataEntity(v5);
      this.l = v2;
      v6 = p0.b();
      v7 = v6.size();
      this.k = new java.util.ArrayList(v7);
      for ( i = 0; i < v7; ++i )
        this.k.add((com.google.android.gms.games.internal.game.GameBadgeEntity)((com.google.android.gms.games.internal.game.GameBadge)v6.get(i)).h());
    
    }

    static int a(com.google.android.gms.games.internal.game.ExtendedGame p0)
    {
      Object[] v1;
      v1 = new Object[9];
      v1[0] = p0.a();
      v1[1] = Integer.valueOf(p0.c());
      v1[2] = Boolean.valueOf(p0.d());
      v1[3] = Integer.valueOf(p0.e());
      v1[4] = Long.valueOf(p0.f());
      v1[5] = Long.valueOf(p0.k_());
      v1[6] = p0.j();
      v1[7] = Long.valueOf(p0.k());
      v1[8] = p0.l();
      return hl.hashCode(v1);
    }

    static boolean a(com.google.android.gms.games.internal.game.ExtendedGame p0, Object p1)
    {
      boolean v2;
      com.google.android.gms.games.internal.game.ExtendedGame v4;
      v2 = false;
      if ( p1 instanceof com.google.android.gms.games.internal.game.ExtendedGame )
      {
        if ( p0 == p1 )
        {
          return true;
        }
        else
        {
          v4 = (com.google.android.gms.games.internal.game.ExtendedGame)p1;
          if ( hl.equal(v4.a(), p0.a())
            && hl.equal(Integer.valueOf(v4.c()), Integer.valueOf(p0.c()))
            && hl.equal(Boolean.valueOf(v4.d()), Boolean.valueOf(p0.d()))
            && hl.equal(Integer.valueOf(v4.e()), Integer.valueOf(p0.e()))
            && hl.equal(Long.valueOf(v4.f()), Long.valueOf(p0.f()))
            && hl.equal(Long.valueOf(v4.k_()), Long.valueOf(p0.k_()))
            && hl.equal(v4.j(), p0.j())
            && hl.equal(Long.valueOf(v4.k()), Long.valueOf(p0.k())) )
          {
            return hl.equal(v4.l(), p0.l());
          }
        }
      }
      return v2;
    }

    /* synthetic */ static boolean aQ(String p0)
    {
      return hb.aA(p0);
    }

    static String b(com.google.android.gms.games.internal.game.ExtendedGame p0)
    {
      return hl.e(p0).a("Game", p0.a()).a("Availability", Integer.valueOf(p0.c())).a("Owned", Boolean.valueOf(p0.d())).a("AchievementUnlockedCount", Integer.valueOf(p0.e())).a("LastPlayedServerTimestamp", Long.valueOf(p0.f())).a("PriceMicros", Long.valueOf(p0.k_())).a("FormattedPrice", p0.j()).a("FullPriceMicros", Long.valueOf(p0.k())).a("FormattedFullPrice", p0.l()).a("Snapshot", p0.m()).toString();
    }

    /* synthetic */ static boolean b(Integer p0)
    {
      return GamesDowngradeableSafeParcel.c(p0);
    }

    /* synthetic */ static Integer gM()
    {
      return hb.fl();
    }

    private com.google.android.gms.games.internal.game.ExtendedGame p()
    {
      return (com.google.android.gms.games.internal.game.ExtendedGame)this;
    }

    /* synthetic */ public final com.google.android.gms.games.Game a()
    {
      return (com.google.android.gms.games.Game)this.b;
    }

    public final java.util.ArrayList<com.google.android.gms.games.internal.game.GameBadge> b()
    {
      return new java.util.ArrayList(this.k);
    }

    public final int c()
    {
      return this.c;
    }

    public final boolean d()
    {
      return this.d;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final int e()
    {
      return this.e;
    }

    public final boolean equals(Object p0)
    {
      return a((com.google.android.gms.games.internal.game.ExtendedGame)this, p0);
    }

    public final long f()
    {
      return this.f;
    }

    /* synthetic */ public final Object h()
    {
      return this;
    }

    public final int hashCode()
    {
      return a((com.google.android.gms.games.internal.game.ExtendedGame)this);
    }

    public final boolean i_()
    {
      return true;
    }

    public final String j()
    {
      return this.h;
    }

    public final long k()
    {
      return this.i;
    }

    public final long k_()
    {
      return this.g;
    }

    public final String l()
    {
      return this.j;
    }

    public final com.google.android.gms.games.snapshot.SnapshotMetadata m()
    {
      return (com.google.android.gms.games.snapshot.SnapshotMetadata)this.l;
    }

    public final int n()
    {
      return this.a;
    }

    public final com.google.android.gms.games.GameEntity o()
    {
      return this.b;
    }

    public final String toString()
    {
      return b((com.google.android.gms.games.internal.game.ExtendedGame)this);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      int v3;
      int v4;
      v3 = 0;
      if ( this.A() )
      {
        this.b.writeToParcel(p0, p1);
        p0.writeInt(this.c);
        p0.writeInt(com.gameloft.android.DecompRT.b2i(this.d));
        p0.writeInt(this.e);
        p0.writeLong(this.f);
        p0.writeLong(this.g);
        p0.writeString(this.h);
        p0.writeLong(this.i);
        p0.writeString(this.j);
        v4 = this.k.size();
        p0.writeInt(v4);
        while ( v3 < v4 )
          ((com.google.android.gms.games.internal.game.GameBadgeEntity)this.k.get(v3++)).writeToParcel(p0, p1);
      }
      else
      {
        ExtendedGameEntityCreator.a(this, p0, p1);
      }
    }

}

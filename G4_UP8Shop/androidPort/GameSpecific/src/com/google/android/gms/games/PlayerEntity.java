// Decompiled from classes.dex (SourceFile: PlayerEntity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games;

import com.google.android.gms.games.internal.GamesDowngradeableSafeParcel;
import com.google.android.gms.internal.gy;
import com.google.android.gms.internal.hb;
import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.il;
public final class PlayerEntity extends com.google.android.gms.games.internal.GamesDowngradeableSafeParcel implements com.google.android.gms.games.Player {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    private final int c;
    private final java.lang.String d;
    private final java.lang.String e;
    private final android.net.Uri f;
    private final android.net.Uri g;
    private final long h;
    private final int i;
    private final long j;
    private final java.lang.String k;
    private final java.lang.String l;
    private final java.lang.String m;
    private final com.google.android.gms.games.internal.player.MostRecentGameInfoEntity n;
    private final com.google.android.gms.games.PlayerLevelInfo o;
    private final boolean p;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.games.PlayerEntity$PlayerEntityCreatorCompat();
    }

    PlayerEntity(
            int p0,
            String p1,
            String p2,
            android.net.Uri p3,
            android.net.Uri p4,
            long p5,
            int p7,
            long p8,
            String p10,
            String p11,
            String p12,
            com.google.android.gms.games.internal.player.MostRecentGameInfoEntity p13,
            com.google.android.gms.games.PlayerLevelInfo p14,
            boolean p15)
    {
      super();
      this.c = p0;
      this.d = p1;
      this.e = p2;
      this.f = p3;
      this.k = p10;
      this.g = p4;
      this.l = p11;
      this.h = p5;
      this.i = p7;
      this.j = p8;
      this.m = p12;
      this.p = p15;
      this.n = p13;
      this.o = p14;
    }

    public PlayerEntity(com.google.android.gms.games.Player p0)
    {
      super();
      com.google.android.gms.games.internal.player.MostRecentGameInfo v2; // RETVAL
      com.google.android.gms.games.internal.player.MostRecentGameInfoEntity v3;
      this.c = 10;
      this.d = p0.a();
      this.e = p0.b();
      this.f = p0.d();
      this.k = p0.e();
      this.g = p0.g_();
      this.l = p0.j();
      this.h = p0.k();
      this.i = p0.m();
      this.j = p0.l();
      this.m = p0.o();
      this.p = p0.n();
      v2 = p0.q();
      if ( v2 != null )
        v3 = new com.google.android.gms.games.internal.player.MostRecentGameInfoEntity(v2);
      else
        v3 = null;
      this.n = v3;
      this.o = p0.p();
      gy.c(this.d);
      gy.c(this.e);
      gy.A(this.h > 0);
    
    }

    static int a(com.google.android.gms.games.Player p0)
    {
      Object[] v1;
      v1 = new Object[7];
      v1[0] = p0.a();
      v1[1] = p0.b();
      v1[2] = p0.d();
      v1[3] = p0.g_();
      v1[4] = Long.valueOf(p0.k());
      v1[5] = p0.o();
      v1[6] = p0.p();
      return hl.hashCode(v1);
    }

    static boolean a(com.google.android.gms.games.Player p0, Object p1)
    {
      boolean v2;
      com.google.android.gms.games.Player v4;
      v2 = false;
      if ( p1 instanceof com.google.android.gms.games.Player )
      {
        if ( p0 == p1 )
        {
          return true;
        }
        else
        {
          v4 = (com.google.android.gms.games.Player)p1;
          if ( hl.equal(v4.a(), p0.a())
            && hl.equal(v4.b(), p0.b())
            && hl.equal(v4.d(), p0.d())
            && hl.equal(v4.g_(), p0.g_())
            && hl.equal(Long.valueOf(v4.k()), Long.valueOf(p0.k()))
            && hl.equal(v4.o(), p0.o()) )
          {
            return hl.equal(v4.p(), p0.p());
          }
        }
      }
      return v2;
    }

    /* synthetic */ static boolean aQ(String p0)
    {
      return hb.aA(p0);
    }

    static String b(com.google.android.gms.games.Player p0)
    {
      return hl.e(p0).a("PlayerId", p0.a()).a("DisplayName", p0.b()).a("IconImageUri", p0.d()).a("IconImageUrl", p0.e()).a("HiResImageUri", p0.g_()).a("HiResImageUrl", p0.j()).a("RetrievedTimestamp", Long.valueOf(p0.k())).a("Title", p0.o()).a("LevelInfo", p0.p()).toString();
    }

    /* synthetic */ static boolean b(Integer p0)
    {
      return GamesDowngradeableSafeParcel.c(p0);
    }

    /* synthetic */ static Integer gM()
    {
      return hb.fl();
    }

    private com.google.android.gms.games.Player s()
    {
      return (com.google.android.gms.games.Player)this;
    }

    public final String a()
    {
      return this.d;
    }

    public final void a(android.database.CharArrayBuffer p0)
    {
      il.b(this.e, p0);
    }

    public final String b()
    {
      return this.e;
    }

    public final void b(android.database.CharArrayBuffer p0)
    {
      il.b(this.m, p0);
    }

    public final boolean c()
    {
      return this.f != null;
    }

    public final android.net.Uri d()
    {
      return this.f;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final String e()
    {
      return this.k;
    }

    public final boolean equals(Object p0)
    {
      return a((com.google.android.gms.games.Player)this, p0);
    }

    public final boolean f()
    {
      return this.g != null;
    }

    public final android.net.Uri g_()
    {
      return this.g;
    }

    /* bridge */ public final Object h()
    {
      return this;
    }

    public final int hashCode()
    {
      return a((com.google.android.gms.games.Player)this);
    }

    public final boolean i_()
    {
      return true;
    }

    public final String j()
    {
      return this.l;
    }

    public final long k()
    {
      return this.h;
    }

    public final long l()
    {
      return this.j;
    }

    public final int m()
    {
      return this.i;
    }

    public final boolean n()
    {
      return this.p;
    }

    public final String o()
    {
      return this.m;
    }

    public final com.google.android.gms.games.PlayerLevelInfo p()
    {
      return this.o;
    }

    public final com.google.android.gms.games.internal.player.MostRecentGameInfo q()
    {
      return (com.google.android.gms.games.internal.player.MostRecentGameInfo)this.n;
    }

    public final int r()
    {
      return this.c;
    }

    public final String toString()
    {
      return b((com.google.android.gms.games.Player)this);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      String v3;
      String v4;
      v3 = null;
      if ( this.A() )
      {
        p0.writeString(this.d);
        p0.writeString(this.e);
        if ( this.f != null )
          v4 = this.f.toString();
        else
          v4 = null;
        p0.writeString(v4);
        if ( this.g != null )
          v3 = this.g.toString();
        p0.writeString(v3);
        p0.writeLong(this.h);
      }
      else
      {
        PlayerEntityCreator.a(this, p0, p1);
      }
    }

}

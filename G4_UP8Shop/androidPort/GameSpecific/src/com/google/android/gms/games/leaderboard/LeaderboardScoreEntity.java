// Decompiled from classes.dex (SourceFile: LeaderboardScoreEntity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.leaderboard;

import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.hn;
import com.google.android.gms.internal.il;
public final class LeaderboardScoreEntity implements com.google.android.gms.games.leaderboard.LeaderboardScore {
    // Fields
    private final long b;
    private final java.lang.String c;
    private final java.lang.String d;
    private final long e;
    private final long f;
    private final java.lang.String g;
    private final android.net.Uri h;
    private final android.net.Uri i;
    private final com.google.android.gms.games.PlayerEntity j;
    private final java.lang.String k;
    private final java.lang.String l;
    private final java.lang.String m;

    // Methods
    public LeaderboardScoreEntity(com.google.android.gms.games.leaderboard.LeaderboardScore p0)
    {
      super();
      com.google.android.gms.games.Player v2; // RETVAL
      com.google.android.gms.games.PlayerEntity v3;
      this.b = p0.a();
      this.c = (String)hn.f(p0.b());
      this.d = (String)hn.f(p0.c());
      this.e = p0.d();
      this.f = p0.e();
      this.g = p0.f();
      this.h = p0.m_();
      this.i = p0.k();
      v2 = p0.m();
      if ( v2 != null )
        v3 = (com.google.android.gms.games.PlayerEntity)v2.h();
      else
        v3 = null;
      this.j = v3;
      this.k = p0.n();
      this.l = p0.j();
      this.m = p0.l();
    
    }

    static int a(com.google.android.gms.games.leaderboard.LeaderboardScore p0)
    {
      Object[] v1;
      v1 = new Object[9];
      v1[0] = Long.valueOf(p0.a());
      v1[1] = p0.b();
      v1[2] = Long.valueOf(p0.d());
      v1[3] = p0.c();
      v1[4] = Long.valueOf(p0.e());
      v1[5] = p0.f();
      v1[6] = p0.m_();
      v1[7] = p0.k();
      v1[8] = p0.m();
      return hl.hashCode(v1);
    }

    static boolean a(com.google.android.gms.games.leaderboard.LeaderboardScore p0, Object p1)
    {
      boolean v2;
      com.google.android.gms.games.leaderboard.LeaderboardScore v4;
      v2 = false;
      if ( p1 instanceof com.google.android.gms.games.leaderboard.LeaderboardScore )
      {
        if ( p0 == p1 )
        {
          return true;
        }
        else
        {
          v4 = (com.google.android.gms.games.leaderboard.LeaderboardScore)p1;
          if ( hl.equal(Long.valueOf(v4.a()), Long.valueOf(p0.a()))
            && hl.equal(v4.b(), p0.b())
            && hl.equal(Long.valueOf(v4.d()), Long.valueOf(p0.d()))
            && hl.equal(v4.c(), p0.c())
            && hl.equal(Long.valueOf(v4.e()), Long.valueOf(p0.e()))
            && hl.equal(v4.f(), p0.f())
            && hl.equal(v4.m_(), p0.m_())
            && hl.equal(v4.k(), p0.k())
            && hl.equal(v4.m(), p0.m()) )
          {
            return hl.equal(v4.n(), p0.n());
          }
        }
      }
      return v2;
    }

    static String b(com.google.android.gms.games.leaderboard.LeaderboardScore p0)
    {
      com.google.android.gms.internal.hl$a v1;
      com.google.android.gms.games.Player v2;
      v1 = hl.e(p0).a("Rank", Long.valueOf(p0.a())).a("DisplayRank", p0.b()).a("Score", Long.valueOf(p0.d())).a("DisplayScore", p0.c()).a("Timestamp", Long.valueOf(p0.e())).a("DisplayName", p0.f()).a("IconImageUri", p0.m_()).a("IconImageUrl", p0.j()).a("HiResImageUri", p0.k()).a("HiResImageUrl", p0.l());
      if ( p0.m() != null )
        v2 = p0.m();
      else
        v2 = null;
      return v1.a("Player", v2).a("ScoreTag", p0.n()).toString();
    }

    private com.google.android.gms.games.leaderboard.LeaderboardScore o()
    {
      return (com.google.android.gms.games.leaderboard.LeaderboardScore)this;
    }

    public final long a()
    {
      return this.b;
    }

    public final void a(android.database.CharArrayBuffer p0)
    {
      il.b(this.c, p0);
    }

    public final String b()
    {
      return this.c;
    }

    public final void b(android.database.CharArrayBuffer p0)
    {
      il.b(this.d, p0);
    }

    public final String c()
    {
      return this.d;
    }

    public final void c(android.database.CharArrayBuffer p0)
    {
      if ( this.j != null )
        this.j.a(p0);
      else
        il.b(this.g, p0);
    }

    public final long d()
    {
      return this.e;
    }

    public final long e()
    {
      return this.f;
    }

    public final boolean equals(Object p0)
    {
      return a((com.google.android.gms.games.leaderboard.LeaderboardScore)this, p0);
    }

    public final String f()
    {
      if ( this.j != null )
        return this.j.b();
      else
        return this.g;
    }

    /* synthetic */ public final Object h()
    {
      return this;
    }

    public final int hashCode()
    {
      return a((com.google.android.gms.games.leaderboard.LeaderboardScore)this);
    }

    public final boolean i_()
    {
      return true;
    }

    public final String j()
    {
      if ( this.j != null )
        return this.j.e();
      else
        return this.l;
    }

    public final android.net.Uri k()
    {
      if ( this.j != null )
        return this.j.g_();
      else
        return this.i;
    }

    public final String l()
    {
      if ( this.j != null )
        return this.j.j();
      else
        return this.m;
    }

    public final com.google.android.gms.games.Player m()
    {
      return (com.google.android.gms.games.Player)this.j;
    }

    public final android.net.Uri m_()
    {
      if ( this.j != null )
        return this.j.d();
      else
        return this.h;
    }

    public final String n()
    {
      return this.k;
    }

    public final String toString()
    {
      return b((com.google.android.gms.games.leaderboard.LeaderboardScore)this);
    }

}

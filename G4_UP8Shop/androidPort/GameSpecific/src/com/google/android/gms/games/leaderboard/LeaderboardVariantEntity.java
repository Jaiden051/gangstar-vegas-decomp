// Decompiled from classes.dex (SourceFile: LeaderboardVariantEntity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.leaderboard;

import com.google.android.gms.games.internal.constants.LeaderboardCollection;
import com.google.android.gms.games.internal.constants.TimeSpan;
import com.google.android.gms.internal.hl;
public final class LeaderboardVariantEntity implements com.google.android.gms.games.leaderboard.LeaderboardVariant {
    // Fields
    private final int j;
    private final int k;
    private final boolean l;
    private final long m;
    private final java.lang.String n;
    private final long o;
    private final java.lang.String p;
    private final java.lang.String q;
    private final long r;
    private final java.lang.String s;
    private final java.lang.String t;
    private final java.lang.String u;

    // Methods
    public LeaderboardVariantEntity(com.google.android.gms.games.leaderboard.LeaderboardVariant p0)
    {
      super();
      this.j = p0.a();
      this.k = p0.b();
      this.l = p0.c();
      this.m = p0.d();
      this.n = p0.e();
      this.o = p0.f();
      this.p = p0.n_();
      this.q = p0.j();
      this.r = p0.k();
      this.s = p0.l();
      this.t = p0.m();
      this.u = p0.n();
    }

    static int a(com.google.android.gms.games.leaderboard.LeaderboardVariant p0)
    {
      Object[] v1;
      v1 = new Object[11];
      v1[0] = Integer.valueOf(p0.a());
      v1[1] = Integer.valueOf(p0.b());
      v1[2] = Boolean.valueOf(p0.c());
      v1[3] = Long.valueOf(p0.d());
      v1[4] = p0.e();
      v1[5] = Long.valueOf(p0.f());
      v1[6] = p0.n_();
      v1[7] = Long.valueOf(p0.k());
      v1[8] = p0.l();
      v1[9] = p0.n();
      v1[10] = p0.m();
      return hl.hashCode(v1);
    }

    static boolean a(com.google.android.gms.games.leaderboard.LeaderboardVariant p0, Object p1)
    {
      boolean v2;
      com.google.android.gms.games.leaderboard.LeaderboardVariant v4;
      v2 = false;
      if ( p1 instanceof com.google.android.gms.games.leaderboard.LeaderboardVariant )
      {
        if ( p0 == p1 )
        {
          return true;
        }
        else
        {
          v4 = (com.google.android.gms.games.leaderboard.LeaderboardVariant)p1;
          if ( hl.equal(Integer.valueOf(v4.a()), Integer.valueOf(p0.a()))
            && hl.equal(Integer.valueOf(v4.b()), Integer.valueOf(p0.b()))
            && hl.equal(Boolean.valueOf(v4.c()), Boolean.valueOf(p0.c()))
            && hl.equal(Long.valueOf(v4.d()), Long.valueOf(p0.d()))
            && hl.equal(v4.e(), p0.e())
            && hl.equal(Long.valueOf(v4.f()), Long.valueOf(p0.f()))
            && hl.equal(v4.n_(), p0.n_())
            && hl.equal(Long.valueOf(v4.k()), Long.valueOf(p0.k()))
            && hl.equal(v4.l(), p0.l())
            && hl.equal(v4.n(), p0.n()) )
          {
            return hl.equal(v4.m(), p0.m());
          }
        }
      }
      return v2;
    }

    static String b(com.google.android.gms.games.leaderboard.LeaderboardVariant p0)
    {
      com.google.android.gms.internal.hl$a v1;
      Object v2;
      com.google.android.gms.internal.hl$a v3;
      String v4;
      com.google.android.gms.internal.hl$a v5;
      Object v6;
      com.google.android.gms.internal.hl$a v7;
      String v8;
      v1 = hl.e(p0).a("TimeSpan", TimeSpan.cm(p0.a())).a("Collection", LeaderboardCollection.cm(p0.b()));
      if ( p0.c() )
        v2 = Long.valueOf(p0.d());
      else
        v2 = "none";
      v3 = v1.a("RawPlayerScore", v2);
      if ( p0.c() )
        v4 = p0.e();
      else
        v4 = "none";
      v5 = v3.a("DisplayPlayerScore", v4);
      if ( p0.c() )
        v6 = Long.valueOf(p0.f());
      else
        v6 = "none";
      v7 = v5.a("PlayerRank", v6);
      if ( p0.c() )
        v8 = p0.n_();
      else
        v8 = "none";
      return v7.a("DisplayPlayerRank", v8).a("NumScores", Long.valueOf(p0.k())).a("TopPageNextToken", p0.l()).a("WindowPageNextToken", p0.n()).a("WindowPagePrevToken", p0.m()).toString();
    }

    private com.google.android.gms.games.leaderboard.LeaderboardVariant o()
    {
      return (com.google.android.gms.games.leaderboard.LeaderboardVariant)this;
    }

    public final int a()
    {
      return this.j;
    }

    public final int b()
    {
      return this.k;
    }

    public final boolean c()
    {
      return this.l;
    }

    public final long d()
    {
      return this.m;
    }

    public final String e()
    {
      return this.n;
    }

    public final boolean equals(Object p0)
    {
      return a((com.google.android.gms.games.leaderboard.LeaderboardVariant)this, p0);
    }

    public final long f()
    {
      return this.o;
    }

    /* synthetic */ public final Object h()
    {
      return this;
    }

    public final int hashCode()
    {
      return a((com.google.android.gms.games.leaderboard.LeaderboardVariant)this);
    }

    public final boolean i_()
    {
      return true;
    }

    public final String j()
    {
      return this.q;
    }

    public final long k()
    {
      return this.r;
    }

    public final String l()
    {
      return this.s;
    }

    public final String m()
    {
      return this.t;
    }

    public final String n()
    {
      return this.u;
    }

    public final String n_()
    {
      return this.p;
    }

    public final String toString()
    {
      return b((com.google.android.gms.games.leaderboard.LeaderboardVariant)this);
    }

}

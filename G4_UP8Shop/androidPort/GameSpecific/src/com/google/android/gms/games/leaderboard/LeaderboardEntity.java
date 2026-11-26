// Decompiled from classes.dex (SourceFile: LeaderboardEntity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.leaderboard;

import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.il;
public final class LeaderboardEntity implements com.google.android.gms.games.leaderboard.Leaderboard {
    // Fields
    private final java.lang.String c;
    private final java.lang.String d;
    private final android.net.Uri e;
    private final int f;
    private final java.util.ArrayList g;
    private final com.google.android.gms.games.Game h;
    private final java.lang.String i;

    // Methods
    public LeaderboardEntity(com.google.android.gms.games.leaderboard.Leaderboard p0)
    {
      super();
      com.google.android.gms.games.Game v2; // RETVAL
      com.google.android.gms.games.Game v3;
      java.util.ArrayList v4;
      int v5;
      int i;
      this.c = p0.a();
      this.d = p0.b();
      this.e = p0.c();
      this.i = p0.d();
      this.f = p0.e();
      v2 = p0.l_();
      if ( v2 != null )
        v3 = (com.google.android.gms.games.Game)new com.google.android.gms.games.GameEntity(v2);
      else
        v3 = null;
      this.h = v3;
      v4 = p0.f();
      v5 = v4.size();
      this.g = new java.util.ArrayList(v5);
      for ( i = 0; i < v5; ++i )
        this.g.add((com.google.android.gms.games.leaderboard.LeaderboardVariantEntity)((com.google.android.gms.games.leaderboard.LeaderboardVariant)v4.get(i)).h());
    
    }

    static int a(com.google.android.gms.games.leaderboard.Leaderboard p0)
    {
      Object[] v1;
      v1 = new Object[5];
      v1[0] = p0.a();
      v1[1] = p0.b();
      v1[2] = p0.c();
      v1[3] = Integer.valueOf(p0.e());
      v1[4] = p0.f();
      return hl.hashCode(v1);
    }

    static boolean a(com.google.android.gms.games.leaderboard.Leaderboard p0, Object p1)
    {
      boolean v2;
      com.google.android.gms.games.leaderboard.Leaderboard v4;
      v2 = false;
      if ( p1 instanceof com.google.android.gms.games.leaderboard.Leaderboard )
      {
        if ( p0 == p1 )
        {
          return true;
        }
        else
        {
          v4 = (com.google.android.gms.games.leaderboard.Leaderboard)p1;
          if ( hl.equal(v4.a(), p0.a())
            && hl.equal(v4.b(), p0.b())
            && hl.equal(v4.c(), p0.c())
            && hl.equal(Integer.valueOf(v4.e()), Integer.valueOf(p0.e())) )
          {
            return hl.equal(v4.f(), p0.f());
          }
        }
      }
      return v2;
    }

    static String b(com.google.android.gms.games.leaderboard.Leaderboard p0)
    {
      return hl.e(p0).a("LeaderboardId", p0.a()).a("DisplayName", p0.b()).a("IconImageUri", p0.c()).a("IconImageUrl", p0.d()).a("ScoreOrder", Integer.valueOf(p0.e())).a("Variants", p0.f()).toString();
    }

    private com.google.android.gms.games.leaderboard.Leaderboard j()
    {
      return (com.google.android.gms.games.leaderboard.Leaderboard)this;
    }

    public final String a()
    {
      return this.c;
    }

    public final void a(android.database.CharArrayBuffer p0)
    {
      il.b(this.d, p0);
    }

    public final String b()
    {
      return this.d;
    }

    public final android.net.Uri c()
    {
      return this.e;
    }

    public final String d()
    {
      return this.i;
    }

    public final int e()
    {
      return this.f;
    }

    public final boolean equals(Object p0)
    {
      return a((com.google.android.gms.games.leaderboard.Leaderboard)this, p0);
    }

    public final java.util.ArrayList<com.google.android.gms.games.leaderboard.LeaderboardVariant> f()
    {
      return new java.util.ArrayList(this.g);
    }

    /* synthetic */ public final Object h()
    {
      return this;
    }

    public final int hashCode()
    {
      return a((com.google.android.gms.games.leaderboard.Leaderboard)this);
    }

    public final boolean i_()
    {
      return true;
    }

    public final com.google.android.gms.games.Game l_()
    {
      return this.h;
    }

    public final String toString()
    {
      return b((com.google.android.gms.games.leaderboard.Leaderboard)this);
    }

}

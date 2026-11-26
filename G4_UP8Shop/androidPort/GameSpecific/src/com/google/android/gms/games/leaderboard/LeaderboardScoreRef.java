// Decompiled from classes.dex (SourceFile: LeaderboardScoreRef.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.leaderboard;

public final class LeaderboardScoreRef extends com.google.android.gms.common.data.d implements com.google.android.gms.games.leaderboard.LeaderboardScore {
    // Fields
    private final com.google.android.gms.games.PlayerRef c;

    // Methods
    LeaderboardScoreRef(com.google.android.gms.common.data.DataHolder p0, int p1)
    {
      super(p0, p1);
      this.c = new com.google.android.gms.games.PlayerRef(p0, p1);
    }

    private com.google.android.gms.games.leaderboard.LeaderboardScore o()
    {
      return (com.google.android.gms.games.leaderboard.LeaderboardScore)new com.google.android.gms.games.leaderboard.LeaderboardScoreEntity((com.google.android.gms.games.leaderboard.LeaderboardScore)this);
    }

    public final long a()
    {
      return this.b("rank");
    }

    public final void a(android.database.CharArrayBuffer p0)
    {
      this.a("display_rank", p0);
    }

    public final String b()
    {
      return this.e("display_rank");
    }

    public final void b(android.database.CharArrayBuffer p0)
    {
      this.a("display_score", p0);
    }

    public final String c()
    {
      return this.e("display_score");
    }

    public final void c(android.database.CharArrayBuffer p0)
    {
      if ( this.i("external_player_id") )
        this.a("default_display_name", p0);
      else
        this.c.a(p0);
    }

    public final long d()
    {
      return this.b("raw_score");
    }

    public final long e()
    {
      return this.b("achieved_timestamp");
    }

    public final boolean equals(Object p0)
    {
      return LeaderboardScoreEntity.a((com.google.android.gms.games.leaderboard.LeaderboardScore)this, p0);
    }

    public final String f()
    {
      if ( this.i("external_player_id") )
        return this.e("default_display_name");
      else
        return this.c.b();
    }

    /* synthetic */ public final Object h()
    {
      return new com.google.android.gms.games.leaderboard.LeaderboardScoreEntity((com.google.android.gms.games.leaderboard.LeaderboardScore)this);
    }

    public final int hashCode()
    {
      return LeaderboardScoreEntity.a((com.google.android.gms.games.leaderboard.LeaderboardScore)this);
    }

    public final String j()
    {
      if ( this.i("external_player_id") )
        return this.e("default_display_image_url");
      else
        return this.c.e();
    }

    public final android.net.Uri k()
    {
      if ( this.i("external_player_id") )
        return null;
      else
        return this.c.g_();
    }

    public final String l()
    {
      if ( this.i("external_player_id") )
        return null;
      else
        return this.c.j();
    }

    public final com.google.android.gms.games.Player m()
    {
      if ( this.i("external_player_id") )
        return null;
      else
        return (com.google.android.gms.games.Player)this.c;
    }

    public final android.net.Uri m_()
    {
      if ( this.i("external_player_id") )
        return this.h("default_display_image_uri");
      else
        return this.c.d();
    }

    public final String n()
    {
      return this.e("score_tag");
    }

    public final String toString()
    {
      return LeaderboardScoreEntity.b((com.google.android.gms.games.leaderboard.LeaderboardScore)this);
    }

}

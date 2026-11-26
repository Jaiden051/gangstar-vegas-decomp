// Decompiled from classes.dex (SourceFile: LeaderboardVariantRef.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.leaderboard;

public final class LeaderboardVariantRef extends com.google.android.gms.common.data.d implements com.google.android.gms.games.leaderboard.LeaderboardVariant {
    // Methods
    LeaderboardVariantRef(com.google.android.gms.common.data.DataHolder p0, int p1)
    {
      super(p0, p1);
    }

    private com.google.android.gms.games.leaderboard.LeaderboardVariant o()
    {
      return (com.google.android.gms.games.leaderboard.LeaderboardVariant)new com.google.android.gms.games.leaderboard.LeaderboardVariantEntity((com.google.android.gms.games.leaderboard.LeaderboardVariant)this);
    }

    public final int a()
    {
      return this.c("timespan");
    }

    public final int b()
    {
      return this.c("collection");
    }

    public final boolean c()
    {
      return !this.i("player_raw_score");
    }

    public final long d()
    {
      if ( this.i("player_raw_score") )
        return -1;
      else
        return this.b("player_raw_score");
    }

    public final String e()
    {
      return this.e("player_display_score");
    }

    public final boolean equals(Object p0)
    {
      return LeaderboardVariantEntity.a((com.google.android.gms.games.leaderboard.LeaderboardVariant)this, p0);
    }

    public final long f()
    {
      if ( this.i("player_rank") )
        return -1;
      else
        return this.b("player_rank");
    }

    /* synthetic */ public final Object h()
    {
      return new com.google.android.gms.games.leaderboard.LeaderboardVariantEntity((com.google.android.gms.games.leaderboard.LeaderboardVariant)this);
    }

    public final int hashCode()
    {
      return LeaderboardVariantEntity.a((com.google.android.gms.games.leaderboard.LeaderboardVariant)this);
    }

    public final String j()
    {
      return this.e("player_score_tag");
    }

    public final long k()
    {
      if ( this.i("total_scores") )
        return -1;
      else
        return this.b("total_scores");
    }

    public final String l()
    {
      return this.e("top_page_token_next");
    }

    public final String m()
    {
      return this.e("window_page_token_prev");
    }

    public final String n()
    {
      return this.e("window_page_token_next");
    }

    public final String n_()
    {
      return this.e("player_display_rank");
    }

    public final String toString()
    {
      return LeaderboardVariantEntity.b((com.google.android.gms.games.leaderboard.LeaderboardVariant)this);
    }

}

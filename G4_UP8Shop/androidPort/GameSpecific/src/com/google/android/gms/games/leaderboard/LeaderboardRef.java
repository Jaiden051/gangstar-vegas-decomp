// Decompiled from classes.dex (SourceFile: LeaderboardRef.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.leaderboard;

public final class LeaderboardRef extends com.google.android.gms.common.data.d implements com.google.android.gms.games.leaderboard.Leaderboard {
    // Fields
    private final int c;
    private final com.google.android.gms.games.Game d;

    // Methods
    LeaderboardRef(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      super(p0, p1);
      this.c = p2;
      this.d = (com.google.android.gms.games.Game)new com.google.android.gms.games.GameRef(p0, p1);
    }

    private com.google.android.gms.games.leaderboard.Leaderboard j()
    {
      return (com.google.android.gms.games.leaderboard.Leaderboard)new com.google.android.gms.games.leaderboard.LeaderboardEntity((com.google.android.gms.games.leaderboard.Leaderboard)this);
    }

    public final String a()
    {
      return this.e("external_leaderboard_id");
    }

    public final void a(android.database.CharArrayBuffer p0)
    {
      this.a("name", p0);
    }

    public final String b()
    {
      return this.e("name");
    }

    public final android.net.Uri c()
    {
      return this.h("board_icon_image_uri");
    }

    public final String d()
    {
      return this.e("board_icon_image_url");
    }

    public final int e()
    {
      return this.c("score_order");
    }

    public final boolean equals(Object p0)
    {
      return LeaderboardEntity.a((com.google.android.gms.games.leaderboard.Leaderboard)this, p0);
    }

    public final java.util.ArrayList<com.google.android.gms.games.leaderboard.LeaderboardVariant> f()
    {
      java.util.ArrayList v1;
      int i;
      v1 = new java.util.ArrayList(this.c);
      for ( i = 0; i < this.c; ++i )
        v1.add(new com.google.android.gms.games.leaderboard.LeaderboardVariantRef(this.v_, this.z_ + i));
      return v1;
    }

    /* synthetic */ public final Object h()
    {
      return new com.google.android.gms.games.leaderboard.LeaderboardEntity((com.google.android.gms.games.leaderboard.Leaderboard)this);
    }

    public final int hashCode()
    {
      return LeaderboardEntity.a((com.google.android.gms.games.leaderboard.Leaderboard)this);
    }

    public final com.google.android.gms.games.Game l_()
    {
      return this.d;
    }

    public final String toString()
    {
      return LeaderboardEntity.b((com.google.android.gms.games.leaderboard.Leaderboard)this);
    }

}

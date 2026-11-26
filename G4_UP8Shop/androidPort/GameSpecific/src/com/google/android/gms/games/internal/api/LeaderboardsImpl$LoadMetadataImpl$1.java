// Decompiled from classes.dex (SourceFile: LeaderboardsImpl$LoadMetadataImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

import com.google.android.gms.common.data.DataHolder;
class LeaderboardsImpl$LoadMetadataImpl$1 implements com.google.android.gms.games.leaderboard.Leaderboards$LeaderboardMetadataResult {
    // Fields
    final com.google.android.gms.common.api.Status a;
    final com.google.android.gms.games.internal.api.LeaderboardsImpl$LoadMetadataImpl b;

    // Methods
    LeaderboardsImpl$LoadMetadataImpl$1(
            com.google.android.gms.games.internal.api.LeaderboardsImpl$LoadMetadataImpl p0,
            com.google.android.gms.common.api.Status p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final com.google.android.gms.games.leaderboard.LeaderboardBuffer b()
    {
      return new com.google.android.gms.games.leaderboard.LeaderboardBuffer(DataHolder.af(14));
    }

    public final void d()
    {
      ;
    }

}

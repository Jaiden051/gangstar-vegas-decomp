// Decompiled from classes.dex (SourceFile: LeaderboardsImpl$7.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class LeaderboardsImpl$7 extends com.google.android.gms.games.internal.api.LeaderboardsImpl$SubmitScoreImpl {
    // Fields
    final java.lang.String a;
    final long b;
    final java.lang.String c;
    final com.google.android.gms.games.internal.api.LeaderboardsImpl d;

    // Methods
    LeaderboardsImpl$7(com.google.android.gms.games.internal.api.LeaderboardsImpl p0, String p1, long p2, String p4)
    {
      super();
      this.d = p0;
      this.a = p1;
      this.b = p2;
      this.c = p4;
    
    }

    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.a((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).a((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c);
    }

}

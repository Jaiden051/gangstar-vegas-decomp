// Decompiled from classes.dex (SourceFile: LeaderboardsImpl$5.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class LeaderboardsImpl$5 extends com.google.android.gms.games.internal.api.LeaderboardsImpl$LoadScoresImpl {
    // Fields
    final java.lang.String a;
    final int b;
    final int c;
    final int d;
    final boolean e;
    final com.google.android.gms.games.internal.api.LeaderboardsImpl f;

    // Methods
    LeaderboardsImpl$5(com.google.android.gms.games.internal.api.LeaderboardsImpl p0, String p1, int p2, int p3, int p4, boolean p5)
    {
      super(0);
      this.f = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p4;
      this.e = p5;
    
    }

    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.b((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c, this.d, this.e);
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).b((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c, this.d, this.e);
    }

}

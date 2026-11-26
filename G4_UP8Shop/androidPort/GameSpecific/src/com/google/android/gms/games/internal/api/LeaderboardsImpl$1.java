// Decompiled from classes.dex (SourceFile: LeaderboardsImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class LeaderboardsImpl$1 extends com.google.android.gms.games.internal.api.LeaderboardsImpl$LoadMetadataImpl {
    // Fields
    final boolean a;
    final com.google.android.gms.games.internal.api.LeaderboardsImpl b;

    // Methods
    LeaderboardsImpl$1(com.google.android.gms.games.internal.api.LeaderboardsImpl p0, boolean p1)
    {
      super(0);
      this.b = p0;
      this.a = p1;
    
    }

    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.b((com.google.android.gms.common.api.a$d)this, this.a);
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).b((com.google.android.gms.common.api.a$d)this, this.a);
    }

}

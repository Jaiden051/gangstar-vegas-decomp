// Decompiled from classes.dex (SourceFile: TurnBasedMultiplayerImpl$9.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class TurnBasedMultiplayerImpl$9 extends com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$LoadMatchesImpl {
    // Fields
    final int a;
    final int[] b;
    final com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl c;

    // Methods
    TurnBasedMultiplayerImpl$9(com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl p0, int p1, int[] p2)
    {
      super(0);
      this.c = p0;
      this.a = p1;
      this.b = (int[])p2;
    
    }

    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.a((com.google.android.gms.common.api.a$d)this, this.a, this.b);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).a((com.google.android.gms.common.api.a$d)this, this.a, this.b);
    }

}

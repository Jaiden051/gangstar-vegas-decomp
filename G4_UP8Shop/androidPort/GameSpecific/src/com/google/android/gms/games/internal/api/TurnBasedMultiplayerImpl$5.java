// Decompiled from classes.dex (SourceFile: TurnBasedMultiplayerImpl$5.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class TurnBasedMultiplayerImpl$5 extends com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$UpdateMatchImpl {
    // Fields
    final java.lang.String a;
    final byte[] b;
    final com.google.android.gms.games.multiplayer.ParticipantResult[] c;
    final com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl d;

    // Methods
    TurnBasedMultiplayerImpl$5(
            com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl p0,
            String p1,
            byte[] p2,
            com.google.android.gms.games.multiplayer.ParticipantResult[] p3)
    {
      super(0);
      this.d = p0;
      this.a = p1;
      this.b = (byte[])p2;
      this.c = (com.google.android.gms.games.multiplayer.ParticipantResult[])p3;
    
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

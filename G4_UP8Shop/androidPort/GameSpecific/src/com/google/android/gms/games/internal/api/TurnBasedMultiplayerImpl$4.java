// Decompiled from classes.dex (SourceFile: TurnBasedMultiplayerImpl$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class TurnBasedMultiplayerImpl$4 extends com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$UpdateMatchImpl {
    // Fields
    final java.lang.String a;
    final byte[] b;
    final java.lang.String c;
    final com.google.android.gms.games.multiplayer.ParticipantResult[] d;
    final com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl e;

    // Methods
    TurnBasedMultiplayerImpl$4(
            com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl p0,
            String p1,
            byte[] p2,
            String p3,
            com.google.android.gms.games.multiplayer.ParticipantResult[] p4)
    {
      super(0);
      this.e = p0;
      this.a = p1;
      this.b = (byte[])p2;
      this.c = p3;
      this.d = (com.google.android.gms.games.multiplayer.ParticipantResult[])p4;
    
    }

    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.a((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c, this.d);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).a((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c, this.d);
    }

}

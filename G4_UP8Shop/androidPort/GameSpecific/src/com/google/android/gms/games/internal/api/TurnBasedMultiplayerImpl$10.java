// Decompiled from classes.dex (SourceFile: TurnBasedMultiplayerImpl$10.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class TurnBasedMultiplayerImpl$10 extends com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$LoadMatchImpl {
    // Fields
    final java.lang.String a;
    final com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl b;

    // Methods
    TurnBasedMultiplayerImpl$10(com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl p0, String p1)
    {
      super(0);
      this.b = p0;
      this.a = p1;
    
    }

    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.h((com.google.android.gms.common.api.a$d)this, this.a);
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).h((com.google.android.gms.common.api.a$d)this, this.a);
    }

}

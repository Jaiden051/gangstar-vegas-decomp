// Decompiled from classes.dex (SourceFile: GamesClientImpl$InvitationReceivedBinderCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$InvitationReceivedBinderCallback extends com.google.android.gms.games.internal.AbstractGamesCallbacks {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl a;
    private final com.google.android.gms.games.multiplayer.OnInvitationReceivedListener b;

    // Methods
    GamesClientImpl$InvitationReceivedBinderCallback(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.games.multiplayer.OnInvitationReceivedListener p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    public final void a(String p0)
    {
      this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$InvitationRemovedCallback(this.a, this.b, p0));
    }

    public final void l(com.google.android.gms.common.data.DataHolder p0)
    {
      com.google.android.gms.games.multiplayer.InvitationBuffer v2;
      com.google.android.gms.games.multiplayer.Invitation v3;
      v2 = new com.google.android.gms.games.multiplayer.InvitationBuffer(p0);
      v3 = null;
      try
      {
        if ( v2.b() > 0 )
          v3 = (com.google.android.gms.games.multiplayer.Invitation)((com.google.android.gms.games.multiplayer.Invitation)v2.b(0)).h();
      }
      finally
      {
        v2.c();
      }
      if ( v3 != null )
        this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$InvitationReceivedCallback(this.a, this.b, v3));
    }

}

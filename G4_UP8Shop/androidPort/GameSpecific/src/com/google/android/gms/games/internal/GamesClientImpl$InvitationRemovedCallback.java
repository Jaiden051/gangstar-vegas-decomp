// Decompiled from classes.dex (SourceFile: GamesClientImpl$InvitationRemovedCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$InvitationRemovedCallback extends com.google.android.gms.internal.hc$b {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl a;
    private final java.lang.String b;

    // Methods
    GamesClientImpl$InvitationRemovedCallback(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.games.multiplayer.OnInvitationReceivedListener p1,
            String p2)
    {
      super(p0, p1);
      this.a = p0;
      this.b = p2;
    
    }

    private void a(
            com.google.android.gms.games.multiplayer.OnInvitationReceivedListener p0)
    {
      p0.b();
    }

    protected final void a()
    {
      ;
    }

    /* synthetic */ protected final void a(Object p0)
    {
      ((com.google.android.gms.games.multiplayer.OnInvitationReceivedListener)p0).b();
    }

}

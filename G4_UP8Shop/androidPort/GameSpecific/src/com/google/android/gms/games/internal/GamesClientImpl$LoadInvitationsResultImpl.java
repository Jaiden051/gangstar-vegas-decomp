// Decompiled from classes.dex (SourceFile: GamesClientImpl$LoadInvitationsResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$LoadInvitationsResultImpl extends com.google.android.gms.common.api.b implements com.google.android.gms.games.multiplayer.Invitations$LoadInvitationsResult {
    // Fields
    private final com.google.android.gms.games.multiplayer.InvitationBuffer c;

    // Methods
    GamesClientImpl$LoadInvitationsResultImpl(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
      this.c = new com.google.android.gms.games.multiplayer.InvitationBuffer(p0);
    }

    public final com.google.android.gms.games.multiplayer.InvitationBuffer b()
    {
      return this.c;
    }

}

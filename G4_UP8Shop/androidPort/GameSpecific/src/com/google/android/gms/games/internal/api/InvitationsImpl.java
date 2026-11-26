// Decompiled from classes.dex (SourceFile: InvitationsImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

import com.google.android.gms.games.Games;
public final class InvitationsImpl implements com.google.android.gms.games.multiplayer.Invitations {
    // Methods
    public InvitationsImpl()
    {
      super();
    }

    public final android.content.Intent a(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return Games.c(p0).n();
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.multiplayer.Invitations$LoadInvitationsResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            int p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.InvitationsImpl$1(this, 0));
    }

    public final void a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.games.multiplayer.OnInvitationReceivedListener p1)
    {
      Games.c(p0).a(p1);
    }

    public final void b(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      Games.c(p0).o();
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.multiplayer.Invitations$LoadInvitationsResult> c(
            com.google.android.gms.common.api.GoogleApiClient p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.InvitationsImpl$1(this, 0));
    }

}

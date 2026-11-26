// Decompiled from classes.dex (SourceFile: InvitationBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer;

public final class InvitationBuffer extends com.google.android.gms.common.data.g {
    // Methods
    public InvitationBuffer(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
    }

    private com.google.android.gms.games.multiplayer.Invitation b(int p0, int p1)
    {
      return (com.google.android.gms.games.multiplayer.Invitation)new com.google.android.gms.games.multiplayer.InvitationRef(this.a, p0, p1);
    }

    /* synthetic */ protected final Object a(int p0, int p1)
    {
      return new com.google.android.gms.games.multiplayer.InvitationRef(this.a, p0, p1);
    }

    protected final String f()
    {
      return "external_invitation_id";
    }

}

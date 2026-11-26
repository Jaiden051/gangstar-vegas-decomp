// Decompiled from classes.dex (SourceFile: ParticipantBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer;

public final class ParticipantBuffer extends com.google.android.gms.common.data.DataBuffer {
    public ParticipantBuffer(com.google.android.gms.common.data.DataHolder p0) { super(p0); }
    // Methods
    private com.google.android.gms.games.multiplayer.Participant a(int p0)
    {
      return (com.google.android.gms.games.multiplayer.Participant)new com.google.android.gms.games.multiplayer.ParticipantRef(this.a, p0);
    }

    /* synthetic */ public final Object b(int p0)
    {
      return new com.google.android.gms.games.multiplayer.ParticipantRef(this.a, p0);
    }

}

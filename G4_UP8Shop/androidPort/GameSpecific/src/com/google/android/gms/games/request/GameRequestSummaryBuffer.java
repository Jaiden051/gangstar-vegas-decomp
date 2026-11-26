// Decompiled from classes.dex (SourceFile: GameRequestSummaryBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.request;

public final class GameRequestSummaryBuffer extends com.google.android.gms.common.data.DataBuffer {
    public GameRequestSummaryBuffer(com.google.android.gms.common.data.DataHolder p0) { super(p0); }
    // Methods
    private com.google.android.gms.games.request.GameRequestSummary a(int p0)
    {
      return (com.google.android.gms.games.request.GameRequestSummary)new com.google.android.gms.games.request.GameRequestSummaryRef(this.a, p0);
    }

    /* synthetic */ public final Object b(int p0)
    {
      return new com.google.android.gms.games.request.GameRequestSummaryRef(this.a, p0);
    }

}

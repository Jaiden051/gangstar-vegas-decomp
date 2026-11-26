// Decompiled from classes.dex (SourceFile: GameRequestBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.request;

public final class GameRequestBuffer extends com.google.android.gms.common.data.g {
    // Methods
    public GameRequestBuffer(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
    }

    private com.google.android.gms.games.request.GameRequest b(int p0, int p1)
    {
      return (com.google.android.gms.games.request.GameRequest)new com.google.android.gms.games.request.GameRequestRef(this.a, p0, p1);
    }

    /* synthetic */ protected final Object a(int p0, int p1)
    {
      return new com.google.android.gms.games.request.GameRequestRef(this.a, p0, p1);
    }

    protected final String f()
    {
      return "external_request_id";
    }

}

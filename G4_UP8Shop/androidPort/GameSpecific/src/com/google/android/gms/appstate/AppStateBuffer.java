// Decompiled from classes.dex (SourceFile: AppStateBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.appstate;

public final class AppStateBuffer extends com.google.android.gms.common.data.DataBuffer {
    // Methods
    public AppStateBuffer(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
    }

    public final com.google.android.gms.appstate.AppState a(int p0)
    {
      return (com.google.android.gms.appstate.AppState)new com.google.android.gms.appstate.b(this.a, p0);
    }

    /* synthetic */ public final Object b(int p0)
    {
      return this.a(p0);
    }

}

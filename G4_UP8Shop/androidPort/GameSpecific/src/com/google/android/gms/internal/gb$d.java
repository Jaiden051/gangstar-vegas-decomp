// Decompiled from classes.dex (SourceFile: gb$d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class gb$d extends com.google.android.gms.common.api.b implements com.google.android.gms.appstate.AppStateManager$StateListResult {
    // Fields
    private final com.google.android.gms.appstate.AppStateBuffer c;

    // Methods
    public gb$d(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
      this.c = new com.google.android.gms.appstate.AppStateBuffer(p0);
    }

    public final com.google.android.gms.appstate.AppStateBuffer b()
    {
      return this.c;
    }

}

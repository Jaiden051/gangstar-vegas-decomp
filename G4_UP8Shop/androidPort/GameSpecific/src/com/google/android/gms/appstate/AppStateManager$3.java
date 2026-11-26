// Decompiled from classes.dex (SourceFile: AppStateManager$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.appstate;

final class AppStateManager$3 extends com.google.android.gms.appstate.AppStateManager$e {
    // Fields
    final int a;
    final byte[] b;

    // Methods
    AppStateManager$3(int p0, byte[] p1)
    {
      super(0);
      this.a = p0;
      this.b = (byte[])p1;
    
    }

    private void a(com.google.android.gms.internal.gb p0)
    {
      p0.a(null, this.a, this.b);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.internal.gb)p0).a(null, this.a, this.b);
    }

}

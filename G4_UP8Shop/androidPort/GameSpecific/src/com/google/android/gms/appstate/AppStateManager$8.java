// Decompiled from classes.dex (SourceFile: AppStateManager$8.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.appstate;

final class AppStateManager$8 extends com.google.android.gms.appstate.AppStateManager$e {
    // Fields
    final int a;
    final java.lang.String b;
    final byte[] c;

    // Methods
    AppStateManager$8(int p0, String p1, byte[] p2)
    {
      super(0);
      this.a = p0;
      this.b = p1;
      this.c = (byte[])p2;
    
    }

    private void a(com.google.android.gms.internal.gb p0)
    {
      p0.a((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.internal.gb)p0).a((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c);
    }

}

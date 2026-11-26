// Decompiled from classes.dex (SourceFile: QuestsImpl$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class QuestsImpl$3 extends com.google.android.gms.games.internal.api.QuestsImpl$LoadsImpl {
    // Fields
    final int[] a;
    final int b;
    final boolean c;
    final com.google.android.gms.games.internal.api.QuestsImpl d;

    // Methods
    QuestsImpl$3(com.google.android.gms.games.internal.api.QuestsImpl p0, int[] p1, int p2, boolean p3)
    {
      super(0);
      this.d = p0;
      this.a = (int[])p1;
      this.b = p2;
      this.c = p3;
    
    }

    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.a((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).a((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c);
    }

}

// Decompiled from classes.dex (SourceFile: QuestsImpl$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class QuestsImpl$4 extends com.google.android.gms.games.internal.api.QuestsImpl$LoadsImpl {
    // Fields
    final boolean a;
    final java.lang.String[] b;
    final com.google.android.gms.games.internal.api.QuestsImpl c;

    // Methods
    QuestsImpl$4(com.google.android.gms.games.internal.api.QuestsImpl p0, boolean p1, String[] p2)
    {
      super(0);
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.b((com.google.android.gms.common.api.a$d)this, this.a, this.b);
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).b((com.google.android.gms.common.api.a$d)this, this.a, this.b);
    }

}

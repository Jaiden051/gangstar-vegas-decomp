// Decompiled from classes.dex (SourceFile: QuestsImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class QuestsImpl$1 extends com.google.android.gms.games.internal.api.QuestsImpl$AcceptImpl {
    // Fields
    final java.lang.String a;
    final com.google.android.gms.games.internal.api.QuestsImpl b;

    // Methods
    QuestsImpl$1(com.google.android.gms.games.internal.api.QuestsImpl p0, String p1)
    {
      super(0);
      this.b = p0;
      this.a = p1;
    
    }

    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.i((com.google.android.gms.common.api.a$d)this, this.a);
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).i((com.google.android.gms.common.api.a$d)this, this.a);
    }

}

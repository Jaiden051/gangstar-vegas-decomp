// Decompiled from classes.dex (SourceFile: SnapshotsImpl$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class SnapshotsImpl$2 extends com.google.android.gms.games.internal.api.SnapshotsImpl$OpenImpl {
    // Fields
    final java.lang.String a;
    final boolean b;
    final com.google.android.gms.games.internal.api.SnapshotsImpl c;

    // Methods
    SnapshotsImpl$2(com.google.android.gms.games.internal.api.SnapshotsImpl p0, String p1, boolean p2)
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

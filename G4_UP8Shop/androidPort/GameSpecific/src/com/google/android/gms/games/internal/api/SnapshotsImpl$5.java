// Decompiled from classes.dex (SourceFile: SnapshotsImpl$5.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class SnapshotsImpl$5 extends com.google.android.gms.games.internal.api.SnapshotsImpl$OpenImpl {
    // Fields
    final java.lang.String a;
    final java.lang.String b;
    final com.google.android.gms.games.snapshot.SnapshotMetadataChange c;
    final com.google.android.gms.drive.Contents d;
    final com.google.android.gms.games.internal.api.SnapshotsImpl e;

    // Methods
    SnapshotsImpl$5(
            com.google.android.gms.games.internal.api.SnapshotsImpl p0,
            String p1,
            String p2,
            com.google.android.gms.games.snapshot.SnapshotMetadataChange p3,
            com.google.android.gms.drive.Contents p4)
    {
      super(0);
      this.e = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p4;
    
    }

    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.a((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c, this.d);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).a((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c, this.d);
    }

}

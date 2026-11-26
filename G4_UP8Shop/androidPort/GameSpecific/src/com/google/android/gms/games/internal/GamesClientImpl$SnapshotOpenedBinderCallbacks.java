// Decompiled from classes.dex (SourceFile: GamesClientImpl$SnapshotOpenedBinderCallbacks.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

import com.google.android.gms.internal.hn;
final class GamesClientImpl$SnapshotOpenedBinderCallbacks extends com.google.android.gms.games.internal.AbstractGamesCallbacks {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl a;
    private final com.google.android.gms.common.api.a$d b;

    // Methods
    public GamesClientImpl$SnapshotOpenedBinderCallbacks(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.common.api.a$d p1)
    {
      super();
      this.a = p0;
      this.b = (com.google.android.gms.common.api.a$d)hn.b(p1, "Holder must not be null");
    
    }

    public final void a(
            com.google.android.gms.common.data.DataHolder p0,
            com.google.android.gms.drive.Contents p1)
 throws android.os.RemoteException {
      this.b.a(new com.google.android.gms.games.internal.GamesClientImpl$OpenSnapshotResultImpl(p0, p1));
    }

    public final void a(
            com.google.android.gms.common.data.DataHolder p0,
            String p1,
            com.google.android.gms.drive.Contents p2,
            com.google.android.gms.drive.Contents p3,
            com.google.android.gms.drive.Contents p4)
 throws android.os.RemoteException {
      this.b.a(new com.google.android.gms.games.internal.GamesClientImpl$OpenSnapshotResultImpl(p0, p1, p2, p3, p4));
    }

}

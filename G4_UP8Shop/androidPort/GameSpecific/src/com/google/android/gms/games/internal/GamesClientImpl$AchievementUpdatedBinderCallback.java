// Decompiled from classes.dex (SourceFile: GamesClientImpl$AchievementUpdatedBinderCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

import com.google.android.gms.internal.hn;
final class GamesClientImpl$AchievementUpdatedBinderCallback extends com.google.android.gms.games.internal.AbstractGamesCallbacks {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl a;
    private final com.google.android.gms.common.api.a$d b;

    // Methods
    GamesClientImpl$AchievementUpdatedBinderCallback(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.common.api.a$d p1)
    {
      super();
      this.a = p0;
      this.b = (com.google.android.gms.common.api.a$d)hn.b(p1, "Holder must not be null");
    
    }

    public final void b(int p0, String p1)
 throws android.os.RemoteException {
      this.b.a(new com.google.android.gms.games.internal.GamesClientImpl$UpdateAchievementResultImpl(p0, p1));
    }

}

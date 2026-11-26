// Decompiled from classes.dex (SourceFile: GamesClientImpl$QuestMilestoneClaimBinderCallbacks.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

import com.google.android.gms.internal.hn;
final class GamesClientImpl$QuestMilestoneClaimBinderCallbacks extends com.google.android.gms.games.internal.AbstractGamesCallbacks {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl a;
    private final com.google.android.gms.common.api.a$d b;
    private final java.lang.String c;

    // Methods
    public GamesClientImpl$QuestMilestoneClaimBinderCallbacks(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.common.api.a$d p1,
            String p2)
    {
      super();
      this.a = p0;
      this.b = (com.google.android.gms.common.api.a$d)hn.b(p1, "Holder must not be null");
      this.c = (String)hn.b(p2, "MilestoneId must not be null");
    
    }

    public final void I(
            com.google.android.gms.common.data.DataHolder p0)
 throws android.os.RemoteException {
      this.b.a(new com.google.android.gms.games.internal.GamesClientImpl$ClaimMilestoneResultImpl(p0, this.c));
    }

}

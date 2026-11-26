// Decompiled from classes.dex (SourceFile: QuestsImpl$ClaimImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class QuestsImpl$ClaimImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected QuestsImpl$ClaimImpl()
    {
      super();
    }

    /* synthetic */ QuestsImpl$ClaimImpl(int p0)
    {
      this();
    }

    private com.google.android.gms.games.quest.Quests$ClaimMilestoneResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.quest.Quests$ClaimMilestoneResult)new com.google.android.gms.games.internal.api.QuestsImpl$ClaimImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.QuestsImpl$ClaimImpl$1(this, p0);
    }

}

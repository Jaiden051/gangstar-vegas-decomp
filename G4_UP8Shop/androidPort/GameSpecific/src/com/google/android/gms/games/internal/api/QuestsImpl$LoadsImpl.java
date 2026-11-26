// Decompiled from classes.dex (SourceFile: QuestsImpl$LoadsImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class QuestsImpl$LoadsImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected QuestsImpl$LoadsImpl()
    {
      super();
    }

    /* synthetic */ QuestsImpl$LoadsImpl(int p0)
    {
      this();
    }

    private com.google.android.gms.games.quest.Quests$LoadQuestsResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.quest.Quests$LoadQuestsResult)new com.google.android.gms.games.internal.api.QuestsImpl$LoadsImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.QuestsImpl$LoadsImpl$1(this, p0);
    }

}

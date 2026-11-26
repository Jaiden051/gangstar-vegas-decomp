// Decompiled from classes.dex (SourceFile: GamesClientImpl$LoadQuestsResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$LoadQuestsResultImpl extends com.google.android.gms.common.api.b implements com.google.android.gms.games.quest.Quests$LoadQuestsResult {
    // Fields
    private final com.google.android.gms.common.data.DataHolder c;

    // Methods
    GamesClientImpl$LoadQuestsResultImpl(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
      this.c = p0;
    }

    public final com.google.android.gms.games.quest.QuestBuffer b()
    {
      return new com.google.android.gms.games.quest.QuestBuffer(this.c);
    }

}

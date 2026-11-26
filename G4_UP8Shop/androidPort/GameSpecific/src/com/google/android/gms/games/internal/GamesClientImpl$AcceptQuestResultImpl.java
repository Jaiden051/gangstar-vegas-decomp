// Decompiled from classes.dex (SourceFile: GamesClientImpl$AcceptQuestResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$AcceptQuestResultImpl extends com.google.android.gms.common.api.b implements com.google.android.gms.games.quest.Quests$AcceptQuestResult {
    // Fields
    private final com.google.android.gms.games.quest.Quest c;

    // Methods
    GamesClientImpl$AcceptQuestResultImpl(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
      com.google.android.gms.games.quest.QuestBuffer v2;
      v2 = new com.google.android.gms.games.quest.QuestBuffer(p0);
      try
      {
        if ( v2.b() > 0 )
        {
          this.c = (com.google.android.gms.games.quest.Quest)new com.google.android.gms.games.quest.QuestEntity((com.google.android.gms.games.quest.Quest)v2.b(0));
          return;
        }
        this.c = null;
      }
      finally
      {
        v2.c();
      }
    
    }

    public final com.google.android.gms.games.quest.Quest b()
    {
      return this.c;
    }

}

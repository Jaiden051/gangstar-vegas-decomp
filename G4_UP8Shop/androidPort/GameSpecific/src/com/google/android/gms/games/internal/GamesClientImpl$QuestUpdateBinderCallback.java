// Decompiled from classes.dex (SourceFile: GamesClientImpl$QuestUpdateBinderCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$QuestUpdateBinderCallback extends com.google.android.gms.games.internal.AbstractGamesCallbacks {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl a;
    private final com.google.android.gms.games.quest.QuestUpdateListener b;

    // Methods
    GamesClientImpl$QuestUpdateBinderCallback(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.games.quest.QuestUpdateListener p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    private static com.google.android.gms.games.quest.Quest R(
            com.google.android.gms.common.data.DataHolder p0)
    {
      com.google.android.gms.games.quest.QuestBuffer v1;
      com.google.android.gms.games.quest.Quest v2;
      v1 = new com.google.android.gms.games.quest.QuestBuffer(p0);
      v2 = null;
      try
      {
        if ( v1.b() > 0 )
          v2 = (com.google.android.gms.games.quest.Quest)((com.google.android.gms.games.quest.Quest)v1.b(0)).h();
      }
      finally
      {
        v1.c();
      }
      return v2;
    }

    public final void K(com.google.android.gms.common.data.DataHolder p0)
    {
      com.google.android.gms.games.quest.Quest v2; // RETVAL
    
      v2 = R(p0);
      if ( v2 != null )
        this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$QuestCompletedCallback(this.a, this.b, v2));
    }

}

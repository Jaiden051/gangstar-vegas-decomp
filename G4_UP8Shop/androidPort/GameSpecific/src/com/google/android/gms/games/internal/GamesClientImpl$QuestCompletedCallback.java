// Decompiled from classes.dex (SourceFile: GamesClientImpl$QuestCompletedCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$QuestCompletedCallback extends com.google.android.gms.internal.hc$b {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl a;
    private final com.google.android.gms.games.quest.Quest b;

    // Methods
    GamesClientImpl$QuestCompletedCallback(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.games.quest.QuestUpdateListener p1,
            com.google.android.gms.games.quest.Quest p2)
    {
      super(p0, p1);
      this.a = p0;
      this.b = p2;
    
    }

    private void a(com.google.android.gms.games.quest.QuestUpdateListener p0)
    {
      p0.a();
    }

    protected final void a()
    {
      ;
    }

    /* synthetic */ protected final void a(Object p0)
    {
      ((com.google.android.gms.games.quest.QuestUpdateListener)p0).a();
    }

}

// Decompiled from classes.dex (SourceFile: QuestBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.quest;

public final class QuestBuffer extends com.google.android.gms.common.data.g {
    // Methods
    public QuestBuffer(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
    }

    private com.google.android.gms.games.quest.Quest b(int p0, int p1)
    {
      return (com.google.android.gms.games.quest.Quest)new com.google.android.gms.games.quest.QuestRef(this.a, p0, p1);
    }

    /* synthetic */ protected final Object a(int p0, int p1)
    {
      return new com.google.android.gms.games.quest.QuestRef(this.a, p0, p1);
    }

    protected final String f()
    {
      return "external_quest_id";
    }

}

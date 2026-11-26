// Decompiled from classes.dex (SourceFile: MilestoneBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.quest;

public final class MilestoneBuffer extends com.google.android.gms.common.data.DataBuffer {
    public MilestoneBuffer(com.google.android.gms.common.data.DataHolder p0) { super(p0); }
    // Methods
    private com.google.android.gms.games.quest.Milestone a(int p0)
    {
      return (com.google.android.gms.games.quest.Milestone)new com.google.android.gms.games.quest.MilestoneRef(this.a, p0);
    }

    /* synthetic */ public final Object b(int p0)
    {
      return new com.google.android.gms.games.quest.MilestoneRef(this.a, p0);
    }

}

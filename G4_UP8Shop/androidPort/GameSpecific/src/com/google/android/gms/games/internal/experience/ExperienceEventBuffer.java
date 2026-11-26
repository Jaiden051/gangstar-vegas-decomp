// Decompiled from classes.dex (SourceFile: ExperienceEventBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.experience;

public final class ExperienceEventBuffer extends com.google.android.gms.common.data.DataBuffer {
    // Methods
    public ExperienceEventBuffer(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
    }

    private com.google.android.gms.games.internal.experience.ExperienceEvent a(int p0)
    {
      return (com.google.android.gms.games.internal.experience.ExperienceEvent)new com.google.android.gms.games.internal.experience.ExperienceEventRef(this.a, p0);
    }

    /* synthetic */ public final Object b(int p0)
    {
      return new com.google.android.gms.games.internal.experience.ExperienceEventRef(this.a, p0);
    }

}

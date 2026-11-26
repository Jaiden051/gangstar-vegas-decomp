// Decompiled from classes.dex (SourceFile: AchievementBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.achievement;

public final class AchievementBuffer extends com.google.android.gms.common.data.DataBuffer {
    // Methods
    public AchievementBuffer(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
    }

    private com.google.android.gms.games.achievement.Achievement a(int p0)
    {
      return (com.google.android.gms.games.achievement.Achievement)new com.google.android.gms.games.achievement.AchievementRef(this.a, p0);
    }

    /* synthetic */ public final Object b(int p0)
    {
      return new com.google.android.gms.games.achievement.AchievementRef(this.a, p0);
    }

}

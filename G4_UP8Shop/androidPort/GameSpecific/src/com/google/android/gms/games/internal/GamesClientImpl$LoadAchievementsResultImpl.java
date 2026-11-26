// Decompiled from classes.dex (SourceFile: GamesClientImpl$LoadAchievementsResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$LoadAchievementsResultImpl extends com.google.android.gms.common.api.b implements com.google.android.gms.games.achievement.Achievements$LoadAchievementsResult {
    // Fields
    private final com.google.android.gms.games.achievement.AchievementBuffer c;

    // Methods
    GamesClientImpl$LoadAchievementsResultImpl(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
      this.c = new com.google.android.gms.games.achievement.AchievementBuffer(p0);
    }

    public final com.google.android.gms.games.achievement.AchievementBuffer b()
    {
      return this.c;
    }

}

// Decompiled from classes.dex (SourceFile: GamesClientImpl$UpdateAchievementResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$UpdateAchievementResultImpl implements com.google.android.gms.games.achievement.Achievements$UpdateAchievementResult {
    // Fields
    private final com.google.android.gms.common.api.Status a;
    private final java.lang.String b;

    // Methods
    GamesClientImpl$UpdateAchievementResultImpl(int p0, String p1)
    {
      super();
      this.a = new com.google.android.gms.common.api.Status(p0);
      this.b = p1;
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final String b()
    {
      return this.b;
    }

}

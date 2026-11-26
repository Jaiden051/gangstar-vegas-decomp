// Decompiled from classes.dex (SourceFile: AchievementsImpl$UpdateImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class AchievementsImpl$UpdateImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Fields
    private final java.lang.String a;

    // Methods
    public AchievementsImpl$UpdateImpl(String p0)
    {
      super();
      this.a = p0;
    }

    /* synthetic */ static String a(
            com.google.android.gms.games.internal.api.AchievementsImpl$UpdateImpl p0)
    {
      return p0.a;
    }

    private com.google.android.gms.games.achievement.Achievements$UpdateAchievementResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.achievement.Achievements$UpdateAchievementResult)new com.google.android.gms.games.internal.api.AchievementsImpl$UpdateImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.AchievementsImpl$UpdateImpl$1(this, p0);
    }

}

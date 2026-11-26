// Decompiled from classes.dex (SourceFile: AchievementsImpl$LoadImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class AchievementsImpl$LoadImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected AchievementsImpl$LoadImpl()
    {
      super();
    }

    /* synthetic */ AchievementsImpl$LoadImpl(int p0)
    {
      this();
    }

    private com.google.android.gms.games.achievement.Achievements$LoadAchievementsResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.achievement.Achievements$LoadAchievementsResult)new com.google.android.gms.games.internal.api.AchievementsImpl$LoadImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.AchievementsImpl$LoadImpl$1(this, p0);
    }

}

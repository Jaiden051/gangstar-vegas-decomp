// Decompiled from classes.dex (SourceFile: AchievementsImpl$UpdateImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class AchievementsImpl$UpdateImpl$1 implements com.google.android.gms.games.achievement.Achievements$UpdateAchievementResult {
    // Fields
    final com.google.android.gms.common.api.Status a;
    final com.google.android.gms.games.internal.api.AchievementsImpl$UpdateImpl b;

    // Methods
    AchievementsImpl$UpdateImpl$1(
            com.google.android.gms.games.internal.api.AchievementsImpl$UpdateImpl p0,
            com.google.android.gms.common.api.Status p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final String b()
    {
      return AchievementsImpl$UpdateImpl.a(this.b);
    }

}

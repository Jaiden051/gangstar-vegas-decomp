// Decompiled from classes.dex (SourceFile: AchievementsImpl$LoadImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

import com.google.android.gms.common.data.DataHolder;
class AchievementsImpl$LoadImpl$1 implements com.google.android.gms.games.achievement.Achievements$LoadAchievementsResult {
    // Fields
    final com.google.android.gms.common.api.Status a;
    final com.google.android.gms.games.internal.api.AchievementsImpl$LoadImpl b;

    // Methods
    AchievementsImpl$LoadImpl$1(com.google.android.gms.games.internal.api.AchievementsImpl$LoadImpl p0, com.google.android.gms.common.api.Status p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final com.google.android.gms.games.achievement.AchievementBuffer b()
    {
      return new com.google.android.gms.games.achievement.AchievementBuffer(DataHolder.af(14));
    }

    public final void d()
    {
      ;
    }

}

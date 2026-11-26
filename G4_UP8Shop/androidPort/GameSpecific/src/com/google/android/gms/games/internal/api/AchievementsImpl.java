// Decompiled from classes.dex (SourceFile: AchievementsImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

import com.google.android.gms.games.Games;
public final class AchievementsImpl implements com.google.android.gms.games.achievement.Achievements {
    // Methods
    public AchievementsImpl()
    {
      super();
    }

    public final android.content.Intent a(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return Games.c(p0).l();
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.achievement.Achievements$LoadAchievementsResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            boolean p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.AchievementsImpl$1(this, p1));
    }

    public final void a(com.google.android.gms.common.api.GoogleApiClient p0, String p1)
 throws android.os.RemoteException {
      p0.b(new com.google.android.gms.games.internal.api.AchievementsImpl$2(this, p1, p1));
    }

    public final void a(com.google.android.gms.common.api.GoogleApiClient p0, String p1, int p2)
 throws android.os.RemoteException {
      p0.b(new com.google.android.gms.games.internal.api.AchievementsImpl$6(this, p1, p1, p2));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.achievement.Achievements$UpdateAchievementResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.AchievementsImpl$3(this, p1, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.achievement.Achievements$UpdateAchievementResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            int p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.AchievementsImpl$7(this, p1, p1, p2));
    }

    public final void c(com.google.android.gms.common.api.GoogleApiClient p0, String p1)
 throws android.os.RemoteException {
      p0.b(new com.google.android.gms.games.internal.api.AchievementsImpl$4(this, p1, p1));
    }

    public final void c(com.google.android.gms.common.api.GoogleApiClient p0, String p1, int p2)
 throws android.os.RemoteException {
      p0.b(new com.google.android.gms.games.internal.api.AchievementsImpl$8(this, p1, p1, p2));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.achievement.Achievements$UpdateAchievementResult> d(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.AchievementsImpl$5(this, p1, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.achievement.Achievements$UpdateAchievementResult> d(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            int p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.AchievementsImpl$9(this, p1, p1, p2));
    }

}

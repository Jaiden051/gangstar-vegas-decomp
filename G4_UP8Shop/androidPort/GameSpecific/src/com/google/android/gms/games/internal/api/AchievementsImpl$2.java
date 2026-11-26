// Decompiled from classes.dex (SourceFile: AchievementsImpl$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class AchievementsImpl$2 extends com.google.android.gms.games.internal.api.AchievementsImpl$UpdateImpl {
    // Fields
    final java.lang.String a;
    final com.google.android.gms.games.internal.api.AchievementsImpl b;

    // Methods
    AchievementsImpl$2(com.google.android.gms.games.internal.api.AchievementsImpl p0, String p1, String p2)
    {
      super(p1);
      this.b = p0;
      this.a = p2;
    
    }

    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.b(null, this.a);
    }

    /* synthetic */ public final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).b(null, this.a);
    }

}

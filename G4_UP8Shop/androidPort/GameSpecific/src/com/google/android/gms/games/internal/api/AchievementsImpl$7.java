// Decompiled from classes.dex (SourceFile: AchievementsImpl$7.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class AchievementsImpl$7 extends com.google.android.gms.games.internal.api.AchievementsImpl$UpdateImpl {
    // Fields
    final java.lang.String a;
    final int b;
    final com.google.android.gms.games.internal.api.AchievementsImpl c;

    // Methods
    AchievementsImpl$7(com.google.android.gms.games.internal.api.AchievementsImpl p0, String p1, String p2, int p3)
    {
      super(p1);
      this.c = p0;
      this.a = p2;
      this.b = p3;
    
    }

    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.a((com.google.android.gms.common.api.a$d)this, this.a, this.b);
    }

    /* bridge */ public final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).a((com.google.android.gms.common.api.a$d)this, this.a, this.b);
    }

}

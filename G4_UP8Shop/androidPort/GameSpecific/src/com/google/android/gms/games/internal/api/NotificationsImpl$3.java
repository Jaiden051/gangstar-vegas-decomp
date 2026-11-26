// Decompiled from classes.dex (SourceFile: NotificationsImpl$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class NotificationsImpl$3 extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Fields
    java.lang.String a;

    // Methods
    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.q((com.google.android.gms.common.api.a$d)this, this.a);
    }

    private com.google.android.gms.games.Notifications$GameMuteStatusLoadResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.Notifications$GameMuteStatusLoadResult)new com.google.android.gms.games.internal.api.NotificationsImpl$3$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.NotificationsImpl$3$1(this, p0);
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).q((com.google.android.gms.common.api.a$d)this, this.a);
    }

}

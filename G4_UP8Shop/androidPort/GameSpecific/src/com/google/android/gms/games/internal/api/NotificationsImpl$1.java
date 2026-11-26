// Decompiled from classes.dex (SourceFile: NotificationsImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class NotificationsImpl$1 extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Fields
    java.lang.String a;

    // Methods
    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.d((com.google.android.gms.common.api.a$d)this, this.a, true);
    }

    private com.google.android.gms.games.Notifications$GameMuteStatusChangeResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.Notifications$GameMuteStatusChangeResult)new com.google.android.gms.games.internal.api.NotificationsImpl$1$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.NotificationsImpl$1$1(this, p0);
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).d((com.google.android.gms.common.api.a$d)this, this.a, true);
    }

}

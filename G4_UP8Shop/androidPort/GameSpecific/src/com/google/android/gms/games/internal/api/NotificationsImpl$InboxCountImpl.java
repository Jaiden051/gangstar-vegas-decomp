// Decompiled from classes.dex (SourceFile: NotificationsImpl$InboxCountImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class NotificationsImpl$InboxCountImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected NotificationsImpl$InboxCountImpl()
    {
      super();
    }

    private com.google.android.gms.games.Notifications$InboxCountResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.Notifications$InboxCountResult)new com.google.android.gms.games.internal.api.NotificationsImpl$InboxCountImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.NotificationsImpl$InboxCountImpl$1(this, p0);
    }

}

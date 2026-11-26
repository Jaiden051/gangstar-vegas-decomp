// Decompiled from classes.dex (SourceFile: NotificationsImpl$ContactSettingLoadImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class NotificationsImpl$ContactSettingLoadImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected NotificationsImpl$ContactSettingLoadImpl()
    {
      super();
    }

    private com.google.android.gms.games.Notifications$ContactSettingLoadResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.Notifications$ContactSettingLoadResult)new com.google.android.gms.games.internal.api.NotificationsImpl$ContactSettingLoadImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.NotificationsImpl$ContactSettingLoadImpl$1(this, p0);
    }

}

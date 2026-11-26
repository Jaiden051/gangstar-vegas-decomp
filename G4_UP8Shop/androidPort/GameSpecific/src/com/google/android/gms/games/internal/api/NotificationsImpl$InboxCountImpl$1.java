// Decompiled from classes.dex (SourceFile: NotificationsImpl$InboxCountImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class NotificationsImpl$InboxCountImpl$1 implements com.google.android.gms.games.Notifications$InboxCountResult {
    // Fields
    final com.google.android.gms.common.api.Status a;
    final com.google.android.gms.games.internal.api.NotificationsImpl$InboxCountImpl b;

    // Methods
    NotificationsImpl$InboxCountImpl$1(
            com.google.android.gms.games.internal.api.NotificationsImpl$InboxCountImpl p0,
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

}

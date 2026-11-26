// Decompiled from classes.dex (SourceFile: GameNotificationRef.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.notification;

import com.google.android.gms.internal.hl;
public final class GameNotificationRef extends com.google.android.gms.common.data.d implements com.google.android.gms.games.internal.notification.GameNotification {
    // Methods
    GameNotificationRef(com.google.android.gms.common.data.DataHolder p0, int p1)
    {
      super(p0, p1);
    }

    private long a()
    {
      return this.b("_id");
    }

    private String b()
    {
      return this.e("notification_id");
    }

    private int c()
    {
      return this.c("type");
    }

    private String d()
    {
      return this.e("ticker");
    }

    private String e()
    {
      return this.e("title");
    }

    private String f()
    {
      return this.e("text");
    }

    private String h()
    {
      return this.e("coalesced_text");
    }

    private boolean j()
    {
      return this.c("acknowledged") > 0;
    }

    private boolean k()
    {
      return this.c("alert_level") == 0;
    }

    public final String toString()
    {
      return hl.e(this).a("Id", Long.valueOf(this.b("_id"))).a("NotificationId", this.e("notification_id")).a("Type", Integer.valueOf(this.c("type"))).a("Title", this.e("title")).a("Ticker", this.e("ticker")).a("Text", this.e("text")).a("CoalescedText", this.e("coalesced_text")).a("isAcknowledged", Boolean.valueOf(this.c("acknowledged") > 0)).a("isSilent", Boolean.valueOf(this.c("alert_level") == 0)).toString();
    }

}

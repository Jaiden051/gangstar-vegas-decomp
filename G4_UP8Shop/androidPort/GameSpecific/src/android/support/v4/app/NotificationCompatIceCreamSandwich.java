// Decompiled from classes.dex (SourceFile: NotificationCompatIceCreamSandwich.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

class NotificationCompatIceCreamSandwich {
    // Methods
    NotificationCompatIceCreamSandwich()
    {
      super();
    }

    static android.app.Notification add(
            android.content.Context p0,
            android.app.Notification p1,
            CharSequence p2,
            CharSequence p3,
            CharSequence p4,
            android.widget.RemoteViews p5,
            int p6,
            android.app.PendingIntent p7,
            android.app.PendingIntent p8,
            android.graphics.Bitmap p9,
            int p10,
            int p11,
            boolean p12)
    {
      return new android.app.Notification.Builder(p0).setWhen(p1.when).setSmallIcon(p1.icon, p1.iconLevel).setContent(p1.contentView).setTicker(p1.tickerText, p5).setSound(p1.sound, p1.audioStreamType).setVibrate(p1.vibrate).setLights(p1.ledARGB, p1.ledOnMS, p1.ledOffMS).setOngoing((p1.flags & 2) != 0).setOnlyAlertOnce((p1.flags & 8) != 0).setAutoCancel((p1.flags & 0x10) != 0).setDefaults(p1.defaults).setContentTitle(p2).setContentText(p3).setContentInfo(p4).setContentIntent(p7).setDeleteIntent(p1.deleteIntent).setFullScreenIntent(p8, (p1.flags & 0x80) != 0).setLargeIcon(p9).setNumber(p6).setProgress(p10, p11, p12).getNotification();
    }

}

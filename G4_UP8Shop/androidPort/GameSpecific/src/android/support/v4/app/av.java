// Decompiled from classes.dex (SourceFile: av.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

final class av {
    // Fields
    private android.app.Notification.Builder a;

    // Methods
    public av(
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
            boolean p12,
            boolean p13,
            int p14,
            CharSequence p15)
    {
      super();
      this.a = new android.app.Notification.Builder(p0).setWhen(p1.when).setSmallIcon(p1.icon, p1.iconLevel).setContent(p1.contentView).setTicker(p1.tickerText, p5).setSound(p1.sound, p1.audioStreamType).setVibrate(p1.vibrate).setLights(p1.ledARGB, p1.ledOnMS, p1.ledOffMS).setOngoing((p1.flags & 2) != 0).setOnlyAlertOnce((p1.flags & 8) != 0).setAutoCancel((p1.flags & 0x10) != 0).setDefaults(p1.defaults).setContentTitle(p2).setContentText(p3).setSubText(p15).setContentInfo(p4).setContentIntent(p7).setDeleteIntent(p1.deleteIntent).setFullScreenIntent(p8, (p1.flags & 0x80) != 0).setLargeIcon(p9).setNumber(p6).setUsesChronometer(p13).setPriority(p14).setProgress(p10, p11, p12);
    }

    public final android.app.Notification a()
    {
      return this.a.build();
    }

    public final void a(int p0, CharSequence p1, android.app.PendingIntent p2)
    {
      this.a.addAction(p0, p1, p2);
    }

    public final void a(
            CharSequence p0,
            boolean p1,
            CharSequence p2,
            android.graphics.Bitmap p3,
            android.graphics.Bitmap p4,
            boolean p5)
    {
      android.app.Notification.BigPictureStyle v7; // RETVAL
      android.app.Notification.BigPictureStyle v8;
      v7 = new android.app.Notification.BigPictureStyle(this.a).setBigContentTitle(p0).bigPicture(p3);
      v8 = v7;
      if ( p5 )
        v7.bigLargeIcon(p4);
      if ( p1 )
        v8.setSummaryText(p2);
    }

    public final void a(CharSequence p0, boolean p1, CharSequence p2, CharSequence p3)
    {
      android.app.Notification.BigTextStyle v5; // RETVAL
    
      v5 = new android.app.Notification.BigTextStyle(this.a).setBigContentTitle(p0).bigText(p3);
      if ( p1 )
        v5.setSummaryText(p2);
    }

    public final void a(CharSequence p0, boolean p1, CharSequence p2, java.util.ArrayList<CharSequence> p3)
    {
      android.app.Notification.InboxStyle v5; // RETVAL
      android.app.Notification.InboxStyle v6;
      java.util.Iterator i;
      v5 = new android.app.Notification.InboxStyle(this.a).setBigContentTitle(p0);
      v6 = v5;
      if ( p1 )
        v5.setSummaryText(p2);
      for ( i = p3.iterator(); i.hasNext(); v6.addLine((CharSequence)i.next()) )
        ;
    }

}

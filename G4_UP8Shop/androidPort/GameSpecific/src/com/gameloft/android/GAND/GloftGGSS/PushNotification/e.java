// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.PushNotification;

import android.graphics.BitmapFactory;
import android.net.Uri;
public final class e extends com.gameloft.android.GAND.GloftGGSS.PushNotification.PushBuilder {
    // Methods
    public e(android.content.Context p0)
    {
      super(p0);
    }

    public final android.app.Notification a()
    {
      android.app.Notification.Builder v1 = null;
      android.app.Notification.BigPictureStyle v2;
      android.app.Notification.InboxStyle v4;
      int i;
      android.app.Notification.BigTextStyle v6;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            v1 = new android.app.Notification.Builder(this.a);
            v1.setContentTitle(this.c).setContentText(this.b).setSmallIcon(2130837643).setWhen(this.g).setContentIntent(this.d).setTicker(this.c).setAutoCancel(this.h);
            if ( SimplifiedAndroidUtils.i && SimplifiedAndroidUtils.l != null && RemoteImageManager.GetLocalAsset(this.a) )
            {
            v2 = new android.app.Notification.BigPictureStyle();
            v2.setBigContentTitle(this.c);
            v2.setSummaryText(this.b);
            v2.bigPicture(RemoteImageManager.GetAsset());
            v1.setStyle(v2);
            }
            else if ( this.j != null )
            {
            v4 = new android.app.Notification.InboxStyle();
            v4.setBigContentTitle(this.c);
            for ( i = this.j.length - 1; i >= 0; --i )
            v4.addLine(this.j[i]);
            v1.setStyle(v4);
            }
            else
            {
            v6 = new android.app.Notification.BigTextStyle();
            v6.setBigContentTitle(this.c);
            v6.bigText(this.b);
            v1.setStyle(v6);
            }
            if ( !DontDisturbPolicy.isDontDisturbeTime(this.a) )
            {
            if ( SimplifiedAndroidUtils.h && SimplifiedAndroidUtils.k != null )
            {
            try
            {
            if ( this.a.getResources().getIdentifier(SimplifiedAndroidUtils.k, "raw", this.a.getPackageName()) > 0 )
            {
            v1.setSound(Uri.parse("android.resource://" + this.a.getPackageName() + "/raw/" + SimplifiedAndroidUtils.k));
            v1.setDefaults(6);
            { _pc = 1; continue _sm; }
            }
            v1.setDefaults(-1);
            }
            catch ( Exception v7 )
            {
            v1.setDefaults(-1);
            v7.printStackTrace();
            }
            }
            else
            {
            v1.setDefaults(-1);
            }
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            v1.setLargeIcon(BitmapFactory.decodeResource(this.a.getResources(), PushTheme.getIcon()));
            if ( this.i > 1 )
            v1.setNumber(this.i);
            if ( this.e != null )
            v1.setDeleteIntent(this.e);
            return v1.build();
            
          }
          default: throw new IllegalStateException("Unreachable");
        }
      }
    }

}

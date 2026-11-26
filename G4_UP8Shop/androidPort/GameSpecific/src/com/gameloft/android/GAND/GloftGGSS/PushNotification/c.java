// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.PushNotification;

public final class c extends com.gameloft.android.GAND.GloftGGSS.PushNotification.PushBuilder {
    // Methods
    public c(android.content.Context p0)
    {
      super(p0);
    }

    public final android.app.Notification a()
    {
      android.app.Notification v1;
      v1 = new android.app.Notification(PushTheme.getIcon(), this.c, this.g);
      com.gameloft.android.DecompRT.setLatestEventInfo(v1, this.a, this.c, this.b, this.d);
      if ( this.h )
        v1.flags |= 0x10;
      if ( !DontDisturbPolicy.isDontDisturbeTime(this.a) )
        v1.defaults = -1;
      return v1;
    }

}

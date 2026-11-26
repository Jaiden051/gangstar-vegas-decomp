// Decompiled from classes.dex (SourceFile: i.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.PushNotification;

import com.google.android.gms.gcm.GoogleCloudMessaging;
final class i extends com.gameloft.android.GAND.GloftGGSS.PushNotification.AsyncTask {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.PushNotification.SimplifiedAndroidUtils a;

    // Methods
    i(com.gameloft.android.GAND.GloftGGSS.PushNotification.SimplifiedAndroidUtils p0)
    {
      super();
      this.a = p0;
    
    }

    protected final Integer a()
    {
      String[] v1;
      try
      {
        if ( this.a.p == null )
          this.a.p = GoogleCloudMessaging.getInstance((android.content.Context)SimplifiedAndroidUtils.x.get());
        v1 = new String[1];
        v1[0] = "108176907654";
        SimplifiedAndroidUtils.setGCMRegistrationId((android.content.Context)SimplifiedAndroidUtils.x.get(), this.a.p.a(v1));
        return new Integer(0);
      }
      catch ( Exception e )
      {
      }
      return new Integer(0);
    }

}

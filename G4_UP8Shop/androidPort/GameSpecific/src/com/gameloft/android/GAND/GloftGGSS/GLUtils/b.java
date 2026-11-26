// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

import com.google.android.gms.ads.identifier.AdvertisingIdClient;
final class b extends java.lang.Thread {
    // Methods
    b()
    {
      super();
    }

    public final void run()
    {
      com.google.android.gms.ads.identifier.AdvertisingIdClient$Info AdvertisingIdInfo;
      try
      {
        AdvertisingIdInfo = AdvertisingIdClient.getAdvertisingIdInfo(SUtils.getContext());
        if ( AdvertisingIdInfo.b() )
        {
          Device.access$002(5);
          Device.access$102("");
        }
        else
        {
          Device.access$002(0);
          Device.access$102(AdvertisingIdInfo.a());
        }
      }
      catch ( com.google.android.gms.common.GooglePlayServicesNotAvailableException e )
      {
        Device.access$002(2);
        Device.access$102("");
      }
      catch ( Exception e )
      {
        Device.access$002(4);
        Device.access$102("");
      }
    }

}

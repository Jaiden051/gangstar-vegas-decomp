// Decompiled from classes.dex (SourceFile: a$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import com.google.android.gms.ads.identifier.AdvertisingIdClient;
class a$1 implements com.google.android.gms.tagmanager.a$a {
    // Fields
    final com.google.android.gms.tagmanager.a a;

    // Methods
    a$1(com.google.android.gms.tagmanager.a p0)
    {
      super();
      this.a = p0;
    
    }

    public final com.google.android.gms.ads.identifier.AdvertisingIdClient$Info a()
    {
      com.google.android.gms.ads.identifier.AdvertisingIdClient$Info v1;
      v1 = null;
      try
      {
        return AdvertisingIdClient.getAdvertisingIdInfo(a.a(this.a));
      }
      catch ( IllegalStateException e )
      {
        bh.D("IllegalStateException getting Advertising Id Info");
        return v1;
      }
      catch ( com.google.android.gms.common.GooglePlayServicesRepairableException e )
      {
        bh.D("GooglePlayServicesRepairableException getting Advertising Id Info");
        return v1;
      }
      catch ( java.io.IOException e )
      {
        bh.D("IOException getting Ad Id Info");
        return v1;
      }
      catch ( com.google.android.gms.common.GooglePlayServicesNotAvailableException e )
      {
        bh.D("GooglePlayServicesNotAvailableException getting Advertising Id Info");
        return v1;
      }
      catch ( Exception e )
      {
        bh.D("Unknown exception. Could not get the Advertising Id Info.");
      }
      return v1;
    }

}

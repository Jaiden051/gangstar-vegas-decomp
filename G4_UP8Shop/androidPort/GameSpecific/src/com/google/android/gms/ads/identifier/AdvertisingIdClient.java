// Decompiled from classes.dex (SourceFile: AdvertisingIdClient.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.ads.identifier;

import android.util.Log;
import com.google.android.gms.common.GooglePlayServicesUtil;
import com.google.android.gms.internal.hn;
import com.google.android.gms.internal.t$a;
public final class AdvertisingIdClient {
    // Methods
    public AdvertisingIdClient()
    {
      super();
    }

    static com.google.android.gms.ads.identifier.AdvertisingIdClient$Info a(
            android.content.Context p0,
            com.google.android.gms.common.a p1)
 throws java.io.IOException {
      com.google.android.gms.internal.t v2;
      com.google.android.gms.ads.identifier.AdvertisingIdClient$Info v3;
      try
      {
        try
        {
          v2 = t$a.b(p1.a());
          v3 = new com.google.android.gms.ads.identifier.AdvertisingIdClient$Info(v2.a(), v2.a(true));
        }
        catch ( android.os.RemoteException v6 )
        {
          Log.i("AdvertisingIdClient", "GMS remote exception ", v6);
          throw new java.io.IOException("Remote exception");
        }
        catch ( InterruptedException e )
        {
          throw new java.io.IOException("Interrupted exception");
        }
        try
        {
          p0.unbindService((android.content.ServiceConnection)p1);
          return v3;
        }
        catch ( IllegalArgumentException v5 )
        {
          Log.i("AdvertisingIdClient", "getAdvertisingIdInfo unbindService failed.", v5);
        }
        return v3;
      }
      catch ( Throwable v7 )
      {
        try
        {
          p0.unbindService((android.content.ServiceConnection)p1);
        }
        catch ( IllegalArgumentException v8 )
        {
          Log.i("AdvertisingIdClient", "getAdvertisingIdInfo unbindService failed.", v8);
        }
        throw v7;
      }
    }

    static com.google.android.gms.common.a g(android.content.Context p0)
 throws com.google.android.gms.common.GooglePlayServicesNotAvailableException, java.io.IOException, InterruptedException, com.google.android.gms.common.GooglePlayServicesRepairableException {
      android.content.ServiceConnection v1;
      android.content.Intent v2;
      try
      {
        p0.getPackageManager().getPackageInfo("com.android.vending", 0);
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException e )
      {
        throw new com.google.android.gms.common.GooglePlayServicesNotAvailableException(9);
      }
      try
      {
        GooglePlayServicesUtil.w(p0);
      }
      catch ( com.google.android.gms.common.GooglePlayServicesNotAvailableException v4 )
      {
        throw new java.io.IOException(v4);
      }
      v1 = (android.content.ServiceConnection)new com.google.android.gms.common.a();
      v2 = new android.content.Intent("com.google.android.gms.ads.identifier.service.START");
      v2.setPackage("com.google.android.gms");
      if ( !p0.bindService(v2, v1, 1) )
        throw new java.io.IOException("Connection failure");
      return (com.google.android.gms.common.a)v1;
    }

    public static com.google.android.gms.ads.identifier.AdvertisingIdClient$Info getAdvertisingIdInfo(
            android.content.Context p0)
 throws com.google.android.gms.common.GooglePlayServicesNotAvailableException, java.io.IOException, InterruptedException, com.google.android.gms.common.GooglePlayServicesRepairableException {
      hn.az("Calling this from your main thread can lead to deadlock");
      return a(p0, g(p0));
    }

}

// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

import android.text.TextUtils;
import com.google.android.gms.ads.identifier.AdvertisingIdClient;
import com.google.android.gms.internal.it;
import java.util.Locale;
class a implements com.google.android.gms.analytics.m {
    // Fields
    private static java.lang.Object a;
    private static com.google.android.gms.analytics.a b;
    private com.google.android.gms.ads.identifier.AdvertisingIdClient$Info c;
    private long d;
    private android.content.Context e;
    private java.lang.String f;
    private boolean g;
    private java.lang.Object h;

    // Methods
    static
    {
      a = new Object();
    }

    private a(android.content.Context p0)
    {
      super();
      this.g = false;
      this.h = new Object();
      this.e = p0.getApplicationContext();
    }

    static String H(String p0)
    {
      java.security.MessageDigest v1;
      Object[] v4;
      v1 = ak.W("MD5");
      if ( v1 == null )
        return null;
      v4 = new Object[1];
      v4[0] = new java.math.BigInteger(1, v1.digest(p0.getBytes()));
      return String.format(Locale.US, "%032X", v4);
    }

    private com.google.android.gms.ads.identifier.AdvertisingIdClient$Info a()
    {
      com.google.android.gms.ads.identifier.AdvertisingIdClient$Info v1;
      v1 = null;
      try
      {
        return AdvertisingIdClient.getAdvertisingIdInfo(this.e);
      }
      catch ( IllegalStateException e )
      {
        aa.D(
          "IllegalStateException getting Ad Id Info. If you would like to see Audience reports, please ensure that you have a" +
          "dded '<meta-data android:name=\"com.google.android.gms.version\" android:value=\"@integer/google_play_services_ver" +
          "sion\" />' to your application manifest file. See http://goo.gl/naFqQk for details.");
        return v1;
      }
      catch ( com.google.android.gms.common.GooglePlayServicesRepairableException e )
      {
        aa.D("GooglePlayServicesRepairableException getting Ad Id Info");
        return v1;
      }
      catch ( java.io.IOException e )
      {
        aa.D("IOException getting Ad Id Info");
        return v1;
      }
      catch ( com.google.android.gms.common.GooglePlayServicesNotAvailableException e )
      {
        aa.D("GooglePlayServicesNotAvailableException getting Ad Id Info");
        return v1;
      }
      catch ( Exception e )
      {
        aa.D("Unknown exception. Could not get the ad Id.");
      }
      return v1;
    }

    private boolean a(
            com.google.android.gms.ads.identifier.AdvertisingIdClient$Info p0,
            com.google.android.gms.ads.identifier.AdvertisingIdClient$Info p1)
    {
      String v3 = null;
      String v4 = null;
      boolean v5 = false;
      com.google.android.gms.analytics.h v7 = null;
      String v8 = null;
      Object h = null;
      String v10 = null;
      String v12 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v3 = null;
            if ( p1 != null )
            v4 = p1.a();
            else
            v4 = null;
            if ( TextUtils.isEmpty(v4) )
            return true;
            com.google.android.gms.analytics.h.r(this.e);
            v7 = com.google.android.gms.analytics.h.cq();
            v8 = v7.a("&cid");
            h = this.h;
            com.gameloft.android.DecompRT.monitorEnter(h);
            if ( !(!this.g) ) { _pc = 2; continue _sm; }
            this.f = q(this.e);
            this.g = true;
            _pc = 1;
            continue _sm;
          case 1:
            v10 = H(v4 + v8);
            if ( TextUtils.isEmpty(v10) )
            return false;
            if ( v10.equals(this.f) )
            {
            return true;
            }
            else
            {
            if ( TextUtils.isEmpty(this.f) )
            {
            v12 = v8;
            }
            else
            {
            aa.C("Resetting the client id because Advertising Id changed.");
            v12 = v7.a();
            aa.C("New client Id: " + v12);
            }
            return this.b(v4 + v12);
            }
          case 2:
            if ( !TextUtils.isEmpty(this.f) )
            { _pc = 1; continue _sm; }
            if ( p0 != null )
            v3 = p0.a();
            if ( v3 != null )
            {
            this.f = H(v3 + v8);
            { _pc = 1; continue _sm; }
            }
            v5 = this.b(v4 + v8);
            com.gameloft.android.DecompRT.monitorExit(h);
            return v5;
        }
      }
}

    private boolean b(String p0)
    {
      boolean v2;
      String v3;
      java.io.FileOutputStream v4;
      v2 = false;
      try
      {
        v3 = H(p0);
        aa.C("Storing hashed adid.");
        v4 = this.e.openFileOutput("gaClientIdData", 0);
        v4.write(v3.getBytes());
        v4.close();
        this.f = v3;
        return true;
      }
      catch ( java.io.FileNotFoundException e )
      {
        aa.A("Error creating hash file.");
        return v2;
      }
      catch ( java.io.IOException e )
      {
        aa.A("Error writing to hash file.");
      }
      return v2;
    }

    public static com.google.android.gms.analytics.m p(android.content.Context p0)
    {
      Object v1;
      if ( b != null )
        return (com.google.android.gms.analytics.m)b;
      v1 = a;
      synchronized ( v1 )
      {
        if ( b == null )
          b = new com.google.android.gms.analytics.a(p0);
        return (com.google.android.gms.analytics.m)b;
      }
    }

    static String q(android.content.Context p0)
    {
      String v1 = null;
      java.io.FileInputStream v2 = null;
      byte[] v3 = null;
      int v4 = 0;
      String v6 = null;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              v1 = null;
              _ehCatchPc = 6;
              v2 = p0.openFileInput("gaClientIdData");
              v3 = new byte[128];
              v4 = v2.read(v3, 0, 128);
              if ( v2.available() > 0 )
              {
              aa.D("Hash file seems corrupted, deleting it.");
              v2.close();
              p0.deleteFile("gaClientIdData");
              return v1;
              }
              if ( v4 <= 0 )
              {
              aa.B("Hash file is empty.");
              v2.close();
              return v1;
              }
              v6 = new String(v3, 0, v4);
              _ehCatchPc = 1;
              v2.close();
              return v6;
            case 1:
              _ehCatchPc = 6;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.FileNotFoundException) ) { _pc = 2; continue _sm; }
              return v6;
            case 2:
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 4; continue _sm; }
              v1 = v6;
              _pc = 3;
              continue _sm;
            case 3:
              aa.D("Error reading Hash file, deleting it.");
              p0.deleteFile("gaClientIdData");
              return v1;
            case 4:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.FileNotFoundException) ) { _pc = 7; continue _sm; }
              return v1;
            case 7:
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 8; continue _sm; }
              _pc = 3;
              continue _sm;
            case 8:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
          }
        }
        catch ( Throwable _ehT )
        {
          if ( _ehCatchPc >= 0 )
          {
            _ehEx = _ehT;
            _pc = _ehCatchPc;
            continue _sm;
          }
          throw com.gameloft.android.DecompRT.sneakyThrow(_ehT);
        }
      }
}

    public final String a(String p0)
    {
      long v2;
      com.google.android.gms.ads.identifier.AdvertisingIdClient$Info v3;
      v2 = System.currentTimeMillis();
      if ( v2 - this.d > 1000 )
      {
        v3 = this.a();
        if ( this.a(this.c, v3) )
          this.c = v3;
        else
          this.c = new com.google.android.gms.ads.identifier.AdvertisingIdClient$Info("", false);
        this.d = v2;
      }
      if ( this.c != null )
      {
        if ( "&adid".equals(p0) )
          return this.c.a();
        if ( "&ate".equals(p0) )
        {
          if ( this.c.b() )
            return "0";
          else
            return "1";
        }
      }
      return null;
    }

}

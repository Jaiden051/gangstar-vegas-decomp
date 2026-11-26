// Decompiled from classes.dex (SourceFile: k.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.ads.identifier.AdvertisingIdClient;
public class k extends com.google.android.gms.internal.j {
    // Methods
    private k(android.content.Context p0, com.google.android.gms.internal.n p1, com.google.android.gms.internal.o p2)
    {
      super(p0, p1, p2);
    }

    public static com.google.android.gms.internal.k a(String p0, android.content.Context p1)
 throws java.io.IOException, com.google.android.gms.common.GooglePlayServicesNotAvailableException, InterruptedException {
      com.google.android.gms.internal.n v2;
      v2 = (com.google.android.gms.internal.n)new com.google.android.gms.internal.e();
      j.a(p0, p1, v2);
      return new com.google.android.gms.internal.k(p1, v2, (com.google.android.gms.internal.o)new com.google.android.gms.internal.q(239));
    }

    private com.google.android.gms.internal.k$a e(android.content.Context p0)
 throws java.io.IOException, com.google.android.gms.common.GooglePlayServicesNotAvailableException, InterruptedException {
      int v2;
      com.google.android.gms.ads.identifier.AdvertisingIdClient$Info AdvertisingIdInfo; // RETVAL
      com.google.android.gms.ads.identifier.AdvertisingIdClient$Info v4;
      String v5; // RETVAL
      String v6;
      byte[] v7;
      int v8;
      String v10;
      v2 = 0;
      try
      {
        AdvertisingIdInfo = AdvertisingIdClient.getAdvertisingIdInfo(p0);
      }
      catch ( com.google.android.gms.common.GooglePlayServicesRepairableException v9 )
      {
        throw new java.io.IOException(v9);
      }
      v4 = AdvertisingIdInfo;
      v5 = AdvertisingIdInfo.a();
      v6 = v5;
      if ( v5 != null && v5.matches("^[a-fA-F0-9]{8}-[a-fA-F0-9]{4}-[a-fA-F0-9]{4}-[a-fA-F0-9]{4}-[a-fA-F0-9]{12}$") )
      {
        v7 = new byte[16];
        v8 = 0;
        while ( v2 < v6.length() )
        {
          if ( v2 == 8 || v2 == 13 || v2 == 18 || v2 == 23 )
            ++v2;
          v7[v8++] = (byte)(16 * Character.digit(v6.charAt(v2), 16) + Character.digit(v6.charAt(v2 + 1), 16));
          v2 += 2;
        }
        v10 = this.c.a(v7, true);
      }
      else
      {
        v10 = v6;
      }
      return new com.google.android.gms.internal.k$a(this, v10, v4.b());
    }

    protected final void b(android.content.Context p0)
 throws InterruptedException, com.google.android.gms.internal.ma$a {
      com.google.android.gms.internal.k$a v2; // RETVAL
      com.google.android.gms.internal.k$a v3;
      String v4; // RETVAL
    
      super.b(p0);
      try
      {
        v2 = this.e(p0);
        v3 = v2;
        try
        {
          this.a(28, com.gameloft.android.DecompRT.b2i(v2.b()));
          v4 = v3.a();
          if ( v4 != null )
            this.a(30, v4);
        }
        catch ( java.io.IOException e )
        {
        }
      }
      catch ( com.google.android.gms.common.GooglePlayServicesNotAvailableException e )
      {
      }
      catch ( java.io.IOException e )
      {
        this.a(28, 1);
      }
    }

}

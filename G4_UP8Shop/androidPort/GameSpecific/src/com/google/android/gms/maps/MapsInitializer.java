// Decompiled from classes.dex (SourceFile: MapsInitializer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

import com.google.android.gms.internal.hn;
import com.google.android.gms.maps.internal.u;
import com.google.android.gms.maps.model.BitmapDescriptorFactory;
public final class MapsInitializer {
    // Methods
    private MapsInitializer()
    {
      super();
    }

    public static void a(com.google.android.gms.maps.internal.c p0)
    {
      try
      {
        CameraUpdateFactory.a(p0.a());
        BitmapDescriptorFactory.a(p0.b());
      }
      catch ( android.os.RemoteException v1 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v1);
      }
    }

    public static int initialize(android.content.Context p0)
    {
      hn.f(p0);
      try
      {
        a(u.E(p0));
        return 0;
      }
      catch ( com.google.android.gms.common.GooglePlayServicesNotAvailableException v3 )
      {
        return v3.a;
      }
    }

}

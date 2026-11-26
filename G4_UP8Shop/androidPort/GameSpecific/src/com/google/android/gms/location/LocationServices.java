// Decompiled from classes.dex (SourceFile: LocationServices.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.location;

import com.google.android.gms.internal.hn;
public class LocationServices {
    // Fields
    public static final com.google.android.gms.common.api.Api a;
    public static com.google.android.gms.location.FusedLocationProviderApi b;
    public static com.google.android.gms.location.GeofencingApi c;
    private static final com.google.android.gms.common.api.Api$c d;
    private static final com.google.android.gms.common.api.Api$b e;

    // Methods
    static
    {
      d = new com.google.android.gms.common.api.Api$c();
      e = (com.google.android.gms.common.api.Api$b)new com.google.android.gms.location.LocationServices$1();
      a = new com.google.android.gms.common.api.Api(e, d, new com.google.android.gms.common.api.Scope[0]);
      b = (com.google.android.gms.location.FusedLocationProviderApi)new com.google.android.gms.internal.jc();
      c = (com.google.android.gms.location.GeofencingApi)new com.google.android.gms.internal.jd();
    }

    private LocationServices()
    {
      super();
    }

    public static com.google.android.gms.internal.jh e(
            com.google.android.gms.common.api.GoogleApiClient p0)
    {
      com.google.android.gms.internal.jh v1;
      hn.b(p0 != null, "GoogleApiClient parameter is required.");
      v1 = (com.google.android.gms.internal.jh)p0.a(d);
      hn.a(
        v1 != null,
        "GoogleApiClient is not configured to use the LocationServices.API Api. Pass thisinto GoogleApiClient.Builder#addApi(" +
        ") to use this feature.");
      return v1;
    }

    /* synthetic */ static com.google.android.gms.common.api.Api$c iQ()
    {
      return d;
    }

}

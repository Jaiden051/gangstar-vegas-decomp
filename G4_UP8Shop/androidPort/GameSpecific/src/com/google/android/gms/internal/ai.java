// Decompiled from classes.dex (SourceFile: ai.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.common.GooglePlayServicesUtil;
public final class ai extends com.google.android.gms.dynamic.g {
    // Fields
    private static final com.google.android.gms.internal.ai a;

    // Methods
    static
    {
      a = new com.google.android.gms.internal.ai();
    }

    private ai()
    {
      super("com.google.android.gms.ads.AdManagerCreatorImpl");
    }

    public static com.google.android.gms.internal.ar a(
            android.content.Context p0,
            com.google.android.gms.internal.am p1,
            String p2,
            com.google.android.gms.internal.bt p3)
 {
      com.google.android.gms.internal.ar v4;
      if ( GooglePlayServicesUtil.isGooglePlayServicesAvailable(p0) != 0 || (v4 = a.b(p0, p1, p2, p3)) == null )
      {
        ev.z("Using AdManager from the client jar.");
        return new com.google.android.gms.internal.v(p0, p1, p2, p3, new com.google.android.gms.internal.ew(5077000, 5077000, true));
      }
      return v4;
    }

    private com.google.android.gms.internal.ar b(
            android.content.Context p0,
            com.google.android.gms.internal.am p1,
            String p2,
            com.google.android.gms.internal.bt p3)
 {
      try
      {
        return ar$a.f(((com.google.android.gms.internal.as)this.a(p0)).a(com.google.android.gms.dynamic.e.h(p0), p1, p2, p3, 5077000));
      }
      catch ( android.os.RemoteException v7 )
      {
        ev.c("Could not create remote AdManager.", v7);
        return null;
      }
      catch ( com.google.android.gms.dynamic.g$a v8 )
      {
        ev.c("Could not create remote AdManager.", v8);
        return null;
      }
    }

    private static com.google.android.gms.internal.as c(android.os.IBinder p0)
    {
      return as$a.g(p0);
    }

    /* synthetic */ protected final Object a(android.os.IBinder p0)
    {
      return as$a.g(p0);
    }

}

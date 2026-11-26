// Decompiled from classes.dex (SourceFile: dj.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.content.Intent;
public final class dj extends com.google.android.gms.dynamic.g {
    // Fields
    private static final com.google.android.gms.internal.dj a;

    // Methods
    static
    {
      a = new com.google.android.gms.internal.dj();
    }

    private dj()
    {
      super("com.google.android.gms.ads.InAppPurchaseManagerCreatorImpl");
    }

    private com.google.android.gms.internal.de a(android.app.Activity p0)
    {
      try
      {
        return de$a.r(((com.google.android.gms.internal.df)super.a((android.content.Context)p0)).a(com.google.android.gms.dynamic.e.h(p0)));
      }
      catch ( android.os.RemoteException v4 )
      {
        ev.c("Could not create remote InAppPurchaseManager.", v4);
        return null;
      }
      catch ( com.google.android.gms.dynamic.g$a v5 )
      {
        ev.c("Could not create remote InAppPurchaseManager.", v5);
        return null;
      }
    }

    private static boolean b(android.app.Activity p0)
 throws com.google.android.gms.internal.dj$a {
      android.content.Intent Intent;
      Intent = p0.getIntent();
      if ( !Intent.hasExtra("com.google.android.gms.ads.internal.purchase.useClientJar") )
        throw new com.google.android.gms.internal.dj$a("InAppPurchaseManager requires the useClientJar flag in intent extras.");
      return Intent.getBooleanExtra("com.google.android.gms.ads.internal.purchase.useClientJar", false);
    }

    public static com.google.android.gms.internal.de d(android.app.Activity p0)
 {
      try
      {
        if ( b(p0) )
        {
          ev.z("Using AdOverlay from the client jar.");
          return new com.google.android.gms.internal.cv(p0);
        }
        else
        {
          return a.a(p0);
        }
      }
      catch ( com.google.android.gms.internal.dj$a v3 )
      {
        ev.D(v3.getMessage());
        return null;
      }
    }

    private static com.google.android.gms.internal.df v(android.os.IBinder p0)
    {
      return df$a.s(p0);
    }

    /* synthetic */ protected final Object a(android.os.IBinder p0)
    {
      return df$a.s(p0);
    }

}

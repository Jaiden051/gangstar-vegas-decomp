// Decompiled from classes.dex (SourceFile: cn.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.content.Intent;
public final class cn extends com.google.android.gms.dynamic.g {
    // Fields
    private static final com.google.android.gms.internal.cn a;

    // Methods
    static
    {
      a = new com.google.android.gms.internal.cn();
    }

    private cn()
    {
      super("com.google.android.gms.ads.AdOverlayCreatorImpl");
    }

    public static com.google.android.gms.internal.co a(android.app.Activity p0)
    {
      try
      {
        if ( b(p0) )
        {
          ev.z("Using AdOverlay from the client jar.");
          return new com.google.android.gms.internal.cg(p0);
        }
        else
        {
          return a.c(p0);
        }
      }
      catch ( com.google.android.gms.internal.cn$a v3 )
      {
        ev.D(v3.getMessage());
        return null;
      }
    }

    private static boolean b(android.app.Activity p0)
 throws com.google.android.gms.internal.cn$a {
      android.content.Intent Intent;
      Intent = p0.getIntent();
      if ( !Intent.hasExtra("com.google.android.gms.ads.internal.overlay.useClientJar") )
        throw new com.google.android.gms.internal.cn$a("Ad overlay requires the useClientJar flag in intent extras.");
      return Intent.getBooleanExtra("com.google.android.gms.ads.internal.overlay.useClientJar", false);
    }

    private com.google.android.gms.internal.co c(android.app.Activity p0)
    {
      try
      {
        return co$a.m(((com.google.android.gms.internal.cp)super.a((android.content.Context)p0)).a(com.google.android.gms.dynamic.e.h(p0)));
      }
      catch ( android.os.RemoteException v4 )
      {
        ev.c("Could not create remote AdOverlay.", v4);
        return null;
      }
      catch ( com.google.android.gms.dynamic.g$a v5 )
      {
        ev.c("Could not create remote AdOverlay.", v5);
        return null;
      }
    }

    private static com.google.android.gms.internal.cp l(android.os.IBinder p0)
    {
      return cp$a.n(p0);
    }

    /* synthetic */ protected final Object a(android.os.IBinder p0)
    {
      return cp$a.n(p0);
    }

}

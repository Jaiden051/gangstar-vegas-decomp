// Decompiled from classes.dex (SourceFile: lt.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.common.GooglePlayServicesUtil;
public class lt extends com.google.android.gms.dynamic.g {
    // Fields
    private static com.google.android.gms.internal.lt a;

    // Methods
    protected lt()
    {
      super("com.google.android.gms.wallet.dynamite.WalletDynamiteCreatorImpl");
    }

    public static com.google.android.gms.internal.ll a(
            android.app.Activity p0,
            com.google.android.gms.dynamic.c p1,
            com.google.android.gms.wallet.fragment.WalletFragmentOptions p2,
            com.google.android.gms.internal.lm p3)
 throws com.google.android.gms.common.GooglePlayServicesNotAvailableException {
      int isGooglePlayServicesAvailable; // RETVAL
    
      isGooglePlayServicesAvailable = GooglePlayServicesUtil.isGooglePlayServicesAvailable(p0);
      if ( isGooglePlayServicesAvailable != 0 )
        throw new com.google.android.gms.common.GooglePlayServicesNotAvailableException(isGooglePlayServicesAvailable);
      try
      {
        return ((com.google.android.gms.internal.lo)ne().a(p0)).a(com.google.android.gms.dynamic.e.h(p0), p1, p2, p3);
      }
      catch ( android.os.RemoteException v6 )
      {
        throw new RuntimeException(v6);
      }
      catch ( com.google.android.gms.dynamic.g$a v7 )
      {
        throw new RuntimeException(v7);
      }
    }

    private static com.google.android.gms.internal.lo bv(android.os.IBinder p0)
    {
      return lo$a.br(p0);
    }

    private static com.google.android.gms.internal.lt ne()
    {
      if ( a == null )
        a = new com.google.android.gms.internal.lt();
      return a;
    }

    /* synthetic */ protected final Object a(android.os.IBinder p0)
    {
      return lo$a.br(p0);
    }

}

// Decompiled from classes.dex (SourceFile: dq.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.common.GooglePlayServicesUtil;
public final class dq {
    // Methods
    public static com.google.android.gms.internal.en a(
            android.content.Context p0,
            com.google.android.gms.internal.dt p1,
            com.google.android.gms.internal.dq$a p2)
 throws android.os.RemoteException {
      if ( p1.k.e )
        return b(p0, p1, p2);
      else
        return c(p0, p1, p2);
    }

    private static com.google.android.gms.internal.en b(
            android.content.Context p0,
            com.google.android.gms.internal.dt p1,
            com.google.android.gms.internal.dq$a p2)
    {
      com.google.android.gms.internal.dr$a v3;
      ev.z("Fetching ad response from local ad request service.");
      v3 = new com.google.android.gms.internal.dr$a(p0, p1, p2);
      v3.e();
      return v3;
    }

    private static com.google.android.gms.internal.en c(
            android.content.Context p0,
            com.google.android.gms.internal.dt p1,
            com.google.android.gms.internal.dq$a p2)
 throws android.os.RemoteException {
      ev.z("Fetching ad response from remote ad request service.");
      if ( GooglePlayServicesUtil.isGooglePlayServicesAvailable(p0) == 0 )
        return new com.google.android.gms.internal.dr$b(p0, p1, p2);
      ev.D("Failed to connect to remote ad request service.");
      return null;
    }

}

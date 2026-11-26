// Decompiled from classes.dex (SourceFile: kg.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class kg implements com.google.android.gms.panorama.PanoramaApi {
    // Methods
    public kg()
    {
      super();
    }

    private static void a(android.content.Context p0, android.net.Uri p1)
    {
      p0.revokeUriPermission(p1, 1);
    }

    private static void a(
            android.content.Context p0,
            com.google.android.gms.internal.kf p1,
            com.google.android.gms.internal.ke p2,
            android.net.Uri p3,
            android.os.Bundle p4)
 throws android.os.RemoteException {
      com.google.android.gms.internal.ke v5;
      p0.grantUriPermission("com.google.android.gms", p3, 1);
      v5 = new com.google.android.gms.internal.kg$4(p0, p3, p2);
      try
      {
        p1.a(v5, p3, p4, true);
      }
      catch ( android.os.RemoteException v6 )
      {
        p0.revokeUriPermission(p3, 1);
        throw v6;
      }
      catch ( RuntimeException v7 )
      {
        p0.revokeUriPermission(p3, 1);
        throw v7;
      }
    }

    /* synthetic */ static void b(android.content.Context p0, android.net.Uri p1)
    {
      p0.revokeUriPermission(p1, 1);
    }

    /* synthetic */ static void b(
            android.content.Context p0,
            com.google.android.gms.internal.kf p1,
            com.google.android.gms.internal.ke p2,
            android.net.Uri p3,
            android.os.Bundle p4)
 throws android.os.RemoteException {
      a(p0, p1, p2, p3, p4);
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.panorama.PanoramaApi$PanoramaResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            android.net.Uri p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.internal.kg$2(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.panorama.PanoramaApi$PanoramaResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            android.net.Uri p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.internal.kg$3(this, p1));
    }

}

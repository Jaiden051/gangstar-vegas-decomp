// Decompiled from classes.dex (SourceFile: kg$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class kg$a extends com.google.android.gms.internal.ke$a {
    // Fields
    private final com.google.android.gms.common.api.a$d a;

    // Methods
    public kg$a(com.google.android.gms.common.api.a$d<com.google.android.gms.panorama.PanoramaApi$a> p0)
    {
      super();
      this.a = p0;
    }

    public final void a(int p0, android.os.Bundle p1, int p2, android.content.Intent p3)
 throws android.os.RemoteException {
      android.app.PendingIntent v5;
      if ( p1 != null )
        v5 = (android.app.PendingIntent)p1.getParcelable("pendingIntent");
      else
        v5 = null;
      this.a.a(new com.google.android.gms.internal.kd(new com.google.android.gms.common.api.Status(p0, null, v5), p3, p2));
    }

}

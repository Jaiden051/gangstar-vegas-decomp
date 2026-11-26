// Decompiled from classes.dex (SourceFile: jd$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class jd$2 extends com.google.android.gms.internal.jd$a {
    // Fields
    final android.app.PendingIntent a;
    final com.google.android.gms.internal.jd b;

    // Methods
    jd$2(com.google.android.gms.internal.jd p0, android.app.PendingIntent p1)
    {
      super(0);
      this.b = p0;
      this.a = p1;
    
    }

    private void a(com.google.android.gms.internal.jh p0)
 throws android.os.RemoteException {
      p0.a(this.a, (com.google.android.gms.location.LocationClient$OnRemoveGeofencesResultListener)new com.google.android.gms.internal.jd$2$1(this));
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.internal.jh)p0).a(this.a, (com.google.android.gms.location.LocationClient$OnRemoveGeofencesResultListener)new com.google.android.gms.internal.jd$2$1(this));
    }

}

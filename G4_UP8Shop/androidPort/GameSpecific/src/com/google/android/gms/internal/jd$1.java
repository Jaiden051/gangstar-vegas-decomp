// Decompiled from classes.dex (SourceFile: jd$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class jd$1 extends com.google.android.gms.internal.jd$a {
    // Fields
    final java.util.List a;
    final android.app.PendingIntent b;
    final com.google.android.gms.internal.jd c;

    // Methods
    jd$1(com.google.android.gms.internal.jd p0, java.util.List p1, android.app.PendingIntent p2)
    {
      super(0);
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    private void a(com.google.android.gms.internal.jh p0)
 throws android.os.RemoteException {
      p0.a(this.a, this.b, (com.google.android.gms.location.LocationClient$OnAddGeofencesResultListener)new com.google.android.gms.internal.jd$1$1(this));
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.internal.jh)p0).a(this.a, this.b, (com.google.android.gms.location.LocationClient$OnAddGeofencesResultListener)new com.google.android.gms.internal.jd$1$1(this));
    }

}

// Decompiled from classes.dex (SourceFile: jd$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class jd$3 extends com.google.android.gms.internal.jd$a {
    // Fields
    final java.util.List a;
    final com.google.android.gms.internal.jd b;

    // Methods
    jd$3(com.google.android.gms.internal.jd p0, java.util.List p1)
    {
      super(0);
      this.b = p0;
      this.a = p1;
    
    }

    private void a(com.google.android.gms.internal.jh p0)
 throws android.os.RemoteException {
      p0.a(this.a, (com.google.android.gms.location.LocationClient$OnRemoveGeofencesResultListener)new com.google.android.gms.internal.jd$3$1(this));
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.internal.jh)p0).a(this.a, (com.google.android.gms.location.LocationClient$OnRemoveGeofencesResultListener)new com.google.android.gms.internal.jd$3$1(this));
    }

}

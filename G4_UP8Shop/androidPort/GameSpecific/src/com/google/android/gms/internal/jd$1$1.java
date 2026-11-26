// Decompiled from classes.dex (SourceFile: jd$1$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.location.LocationStatusCodes;
class jd$1$1 implements com.google.android.gms.location.LocationClient$OnAddGeofencesResultListener {
    // Fields
    final com.google.android.gms.internal.jd$1 a;

    // Methods
    jd$1$1(com.google.android.gms.internal.jd$1 p0)
    {
      super();
      this.a = p0;
    
    }

    public final void a(int p0)
 throws android.os.RemoteException {
      this.a.a((com.google.android.gms.common.api.Result)LocationStatusCodes.cK(p0));
    }

}

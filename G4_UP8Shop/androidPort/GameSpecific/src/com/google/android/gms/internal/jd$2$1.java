// Decompiled from classes.dex (SourceFile: jd$2$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.util.Log;
import com.google.android.gms.location.LocationStatusCodes;
class jd$2$1 implements com.google.android.gms.location.LocationClient$OnRemoveGeofencesResultListener {
    // Fields
    final com.google.android.gms.internal.jd$2 a;

    // Methods
    jd$2$1(com.google.android.gms.internal.jd$2 p0)
    {
      super();
      this.a = p0;
    
    }

    public final void a(int p0)
    {
      Log.wtf("GeofencingImpl", "Request ID callback shouldn't have been called");
    }

    public final void b(int p0)
 throws android.os.RemoteException {
      this.a.a((com.google.android.gms.common.api.Result)LocationStatusCodes.cK(p0));
    }

}

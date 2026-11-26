// Decompiled from classes.dex (SourceFile: jd$3$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.app.PendingIntent;
import android.util.Log;
import com.google.android.gms.location.LocationStatusCodes;
class jd$3$1 implements com.google.android.gms.location.LocationClient$OnRemoveGeofencesResultListener {
    // Fields
    final com.google.android.gms.internal.jd$3 a;

    // Methods
    jd$3$1(com.google.android.gms.internal.jd$3 p0)
    {
      super();
      this.a = p0;
    
    }

    public final void a(int p0)
 throws android.os.RemoteException {
      this.a.a((com.google.android.gms.common.api.Result)LocationStatusCodes.cK(p0));
    }

    public final void b(int p0)
    {
      Log.wtf("GeofencingImpl", "PendingIntent callback shouldn't have been called");
    }

}

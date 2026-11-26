// Decompiled from classes.dex (SourceFile: jb.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class jb implements com.google.android.gms.location.ActivityRecognitionApi {
    // Methods
    public jb()
    {
      super();
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            long p1,
            android.app.PendingIntent p3)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.internal.jb$1(this, p1, p3));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            android.app.PendingIntent p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.internal.jb$2(this, p1));
    }

}

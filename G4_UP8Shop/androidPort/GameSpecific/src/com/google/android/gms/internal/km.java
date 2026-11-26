// Decompiled from classes.dex (SourceFile: km.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class km implements com.google.android.gms.plus.Moments {
    // Methods
    public km()
    {
      super();
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.plus.Moments$LoadMomentsResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.internal.km$1(this));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.plus.Moments$LoadMomentsResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            int p1,
            String p2,
            android.net.Uri p3,
            String p4,
            String p5)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.internal.km$2(this, p1, p2, p3, p4, p5));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.plus.model.moments.Moment p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.internal.km$3(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.internal.km$4(this, p1));
    }

}

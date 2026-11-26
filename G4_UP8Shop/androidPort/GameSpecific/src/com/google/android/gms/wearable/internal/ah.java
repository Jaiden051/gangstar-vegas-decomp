// Decompiled from classes.dex (SourceFile: ah.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public final class ah implements com.google.android.gms.wearable.NodeApi {
    // Methods
    public ah()
    {
      super();
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.wearable.NodeApi$GetLocalNodeResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.wearable.internal.ah$1(this));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.wearable.NodeApi$NodeListener p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.wearable.internal.ah$3(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.wearable.NodeApi$GetConnectedNodesResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.wearable.internal.ah$2(this));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.wearable.NodeApi$NodeListener p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.wearable.internal.ah$4(this, p1));
    }

}

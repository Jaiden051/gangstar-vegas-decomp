// Decompiled from classes.dex (SourceFile: ae.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public final class ae implements com.google.android.gms.wearable.MessageApi {
    // Methods
    public ae()
    {
      super();
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.wearable.MessageApi$MessageListener p1,
            android.content.IntentFilter[] p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.wearable.internal.ae$2(this, p1, null));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.wearable.MessageApi$MessageListener p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.wearable.internal.ae$2(this, p1, null));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.wearable.MessageApi$SendMessageResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            String p2,
            byte[] p3)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.wearable.internal.ae$1(this, p1, p2, p3));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.wearable.MessageApi$MessageListener p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.wearable.internal.ae$3(this, p1));
    }

}

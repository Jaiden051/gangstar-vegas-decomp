// Decompiled from classes.dex (SourceFile: f.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public final class f implements com.google.android.gms.wearable.DataApi {
    // Methods
    public f()
    {
      super();
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.wearable.DataApi$DataListener p1,
            android.content.IntentFilter[] p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.wearable.internal.f$8(this, p1, null));
    }

    private static void a(com.google.android.gms.wearable.Asset p0)
    {
      if ( p0 == null )
        throw new IllegalArgumentException("asset is null");
      if ( p0.b() == null )
        throw new IllegalArgumentException("invalid asset");
      if ( p0.a() != null )
        throw new IllegalArgumentException("invalid asset");
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.wearable.DataItemBuffer> a(
            com.google.android.gms.common.api.GoogleApiClient p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.wearable.internal.f$3(this));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.wearable.DataApi$DataItemResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            android.net.Uri p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.wearable.internal.f$2(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.wearable.DataApi$GetFdForAssetResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.wearable.Asset p1)
 throws android.os.RemoteException {
      if ( p1 == null )
        throw new IllegalArgumentException("asset is null");
      if ( p1.b() == null )
        throw new IllegalArgumentException("invalid asset");
      if ( p1.a() != null )
        throw new IllegalArgumentException("invalid asset");
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.wearable.internal.f$6(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.wearable.DataApi$DataListener p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.wearable.internal.f$8(this, p1, null));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.wearable.DataApi$GetFdForAssetResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.wearable.DataItemAsset p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.wearable.internal.f$7(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.wearable.DataApi$DataItemResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.wearable.PutDataRequest p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.wearable.internal.f$1(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.wearable.DataItemBuffer> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            android.net.Uri p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.wearable.internal.f$4(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.wearable.DataApi$DataListener p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.wearable.internal.f$9(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.wearable.DataApi$DeleteDataItemsResult> c(
            com.google.android.gms.common.api.GoogleApiClient p0,
            android.net.Uri p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.wearable.internal.f$5(this, p1));
    }

}

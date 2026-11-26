// Decompiled from classes.dex (SourceFile: RequestsImpl$UpdateRequestsImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class RequestsImpl$UpdateRequestsImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected RequestsImpl$UpdateRequestsImpl()
    {
      super();
    }

    /* synthetic */ RequestsImpl$UpdateRequestsImpl(int p0)
    {
      this();
    }

    private com.google.android.gms.games.request.Requests$UpdateRequestsResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.request.Requests$UpdateRequestsResult)new com.google.android.gms.games.internal.api.RequestsImpl$UpdateRequestsImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.RequestsImpl$UpdateRequestsImpl$1(this, p0);
    }

}

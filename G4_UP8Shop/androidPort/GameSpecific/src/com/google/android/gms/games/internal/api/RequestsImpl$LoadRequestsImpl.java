// Decompiled from classes.dex (SourceFile: RequestsImpl$LoadRequestsImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class RequestsImpl$LoadRequestsImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected RequestsImpl$LoadRequestsImpl()
    {
      super();
    }

    /* synthetic */ RequestsImpl$LoadRequestsImpl(int p0)
    {
      this();
    }

    private com.google.android.gms.games.request.Requests$LoadRequestsResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.request.Requests$LoadRequestsResult)new com.google.android.gms.games.internal.api.RequestsImpl$LoadRequestsImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.RequestsImpl$LoadRequestsImpl$1(this, p0);
    }

}

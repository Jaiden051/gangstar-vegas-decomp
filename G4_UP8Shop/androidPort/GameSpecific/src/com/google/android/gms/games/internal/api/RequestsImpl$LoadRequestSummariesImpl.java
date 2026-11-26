// Decompiled from classes.dex (SourceFile: RequestsImpl$LoadRequestSummariesImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class RequestsImpl$LoadRequestSummariesImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected RequestsImpl$LoadRequestSummariesImpl()
    {
      super();
    }

    private com.google.android.gms.games.request.Requests$LoadRequestSummariesResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.request.Requests$LoadRequestSummariesResult)new com.google.android.gms.games.internal.api.RequestsImpl$LoadRequestSummariesImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.RequestsImpl$LoadRequestSummariesImpl$1(this, p0);
    }

}

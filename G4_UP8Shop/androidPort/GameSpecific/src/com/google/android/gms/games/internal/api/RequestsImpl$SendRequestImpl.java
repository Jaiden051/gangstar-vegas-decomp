// Decompiled from classes.dex (SourceFile: RequestsImpl$SendRequestImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class RequestsImpl$SendRequestImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected RequestsImpl$SendRequestImpl()
    {
      super();
    }

    private com.google.android.gms.games.request.Requests$SendRequestResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.request.Requests$SendRequestResult)new com.google.android.gms.games.internal.api.RequestsImpl$SendRequestImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.RequestsImpl$SendRequestImpl$1(this, p0);
    }

}

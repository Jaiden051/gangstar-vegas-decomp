// Decompiled from classes.dex (SourceFile: GamesClientImpl$UpdateRequestsResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

import com.google.android.gms.games.internal.request.RequestUpdateOutcomes;
final class GamesClientImpl$UpdateRequestsResultImpl extends com.google.android.gms.common.api.b implements com.google.android.gms.games.request.Requests$UpdateRequestsResult {
    // Fields
    private final com.google.android.gms.games.internal.request.RequestUpdateOutcomes c;

    // Methods
    GamesClientImpl$UpdateRequestsResultImpl(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
      this.c = RequestUpdateOutcomes.U(p0);
    }

    public final int a(String p0)
    {
      return this.c.a(p0);
    }

    public final java.util.Set<String> b()
    {
      return this.c.a();
    }

}

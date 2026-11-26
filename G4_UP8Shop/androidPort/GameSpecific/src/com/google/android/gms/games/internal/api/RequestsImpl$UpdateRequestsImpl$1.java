// Decompiled from classes.dex (SourceFile: RequestsImpl$UpdateRequestsImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class RequestsImpl$UpdateRequestsImpl$1 implements com.google.android.gms.games.request.Requests$UpdateRequestsResult {
    // Fields
    final com.google.android.gms.common.api.Status a;
    final com.google.android.gms.games.internal.api.RequestsImpl$UpdateRequestsImpl b;

    // Methods
    RequestsImpl$UpdateRequestsImpl$1(
            com.google.android.gms.games.internal.api.RequestsImpl$UpdateRequestsImpl p0,
            com.google.android.gms.common.api.Status p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final int a(String p0)
    {
      throw new IllegalArgumentException("Unknown request ID " + p0);
    }

    public final java.util.Set<String> b()
    {
      return null;
    }

    public final void d()
    {
      ;
    }

}

// Decompiled from classes.dex (SourceFile: RequestsImpl$SendRequestImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class RequestsImpl$SendRequestImpl$1 implements com.google.android.gms.games.request.Requests$SendRequestResult {
    // Fields
    final com.google.android.gms.common.api.Status a;
    final com.google.android.gms.games.internal.api.RequestsImpl$SendRequestImpl b;

    // Methods
    RequestsImpl$SendRequestImpl$1(
            com.google.android.gms.games.internal.api.RequestsImpl$SendRequestImpl p0,
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

}

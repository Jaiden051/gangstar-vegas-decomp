// Decompiled from classes.dex (SourceFile: Batch$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.api;

public final class Batch$Builder {
    // Fields
    private java.util.List a;
    private android.os.Looper b;

    // Methods
    private Batch$Builder(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      super();
      this.a = new java.util.ArrayList();
      this.b = p0.a();
    }

    private com.google.android.gms.common.api.Batch a()
 throws android.os.RemoteException {
      return new com.google.android.gms.common.api.Batch(this.a, this.b, 0);
    }

    private <R extends com.google.android.gms.common.api.Result> com.google.android.gms.common.api.BatchResultToken<R> a(
            com.google.android.gms.common.api.PendingResult<R> p0)
    {
      com.google.android.gms.common.api.BatchResultToken v2;
      v2 = new com.google.android.gms.common.api.BatchResultToken(this.a.size());
      this.a.add(p0);
      return v2;
    }

}

// Decompiled from classes.dex (SourceFile: BatchResult.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.api;

import com.google.android.gms.internal.hn;
import java.util.concurrent.TimeUnit;
public final class BatchResult implements com.google.android.gms.common.api.Result {
    // Fields
    private final com.google.android.gms.common.api.Status a;
    private final com.google.android.gms.common.api.PendingResult[] b;

    // Methods
    BatchResult(com.google.android.gms.common.api.Status p0, com.google.android.gms.common.api.PendingResult<?>[] p1)
    {
      super();
      this.a = p0;
      this.b = (com.google.android.gms.common.api.PendingResult[])p1;
    }

    private <R extends com.google.android.gms.common.api.Result> R a(
            com.google.android.gms.common.api.BatchResultToken<R> p0)
 throws android.os.RemoteException {
      hn.b(p0.a < this.b.length, "The result token does not belong to this batch");
      return (R)this.b[p0.a].a(0, TimeUnit.MILLISECONDS);
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

}

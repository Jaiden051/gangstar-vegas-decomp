// Decompiled from classes.dex (SourceFile: NotifyTransactionStatusRequest$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

import android.text.TextUtils;
import com.google.android.gms.internal.hn;
public final class NotifyTransactionStatusRequest$Builder {
    // Fields
    final com.google.android.gms.wallet.NotifyTransactionStatusRequest a;

    // Methods
    private NotifyTransactionStatusRequest$Builder(com.google.android.gms.wallet.NotifyTransactionStatusRequest p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ NotifyTransactionStatusRequest$Builder(com.google.android.gms.wallet.NotifyTransactionStatusRequest p0, int p1)
    {
      this(p0);
    }

    private com.google.android.gms.wallet.NotifyTransactionStatusRequest$Builder a(
            int p0)
    {
      this.a.c = p0;
      return this;
    }

    private com.google.android.gms.wallet.NotifyTransactionStatusRequest$Builder a(
            String p0)
    {
      this.a.b = p0;
      return this;
    }

    private com.google.android.gms.wallet.NotifyTransactionStatusRequest a()
    {
      boolean v1;
      v1 = true;
      hn.b(!TextUtils.isEmpty(this.a.b), "googleTransactionId is required");
      if ( this.a.c <= 0 || this.a.c > 8 )
        v1 = false;
      hn.b(v1, "status is an unrecognized value");
      return this.a;
    }

    private com.google.android.gms.wallet.NotifyTransactionStatusRequest$Builder b(
            String p0)
    {
      this.a.d = p0;
      return this;
    }

}

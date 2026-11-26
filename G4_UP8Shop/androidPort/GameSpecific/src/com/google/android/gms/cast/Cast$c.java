// Decompiled from classes.dex (SourceFile: Cast$c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

abstract class Cast$c extends com.google.android.gms.cast.Cast$a {
    // Methods
    private Cast$c()
    {
      super();
    }

    /* synthetic */ Cast$c(int p0)
    {
      this();
    }

    private com.google.android.gms.cast.Cast$ApplicationConnectionResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.cast.Cast$ApplicationConnectionResult)new com.google.android.gms.cast.Cast$c$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.cast.Cast$c$1(this, p0);
    }

}

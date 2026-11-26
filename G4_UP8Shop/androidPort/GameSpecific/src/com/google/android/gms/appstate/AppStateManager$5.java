// Decompiled from classes.dex (SourceFile: AppStateManager$5.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.appstate;

final class AppStateManager$5 extends com.google.android.gms.appstate.AppStateManager$b {
    // Fields
    final int a;

    // Methods
    AppStateManager$5(int p0)
    {
      super(0);
      this.a = p0;
    
    }

    private void a(com.google.android.gms.internal.gb p0)
    {
      p0.a((com.google.android.gms.common.api.a$d)this, this.a);
    }

    private com.google.android.gms.appstate.AppStateManager$StateDeletedResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.appstate.AppStateManager$StateDeletedResult)new com.google.android.gms.appstate.AppStateManager$5$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.appstate.AppStateManager$5$1(this, p0);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.internal.gb)p0).a((com.google.android.gms.common.api.a$d)this, this.a);
    }

}

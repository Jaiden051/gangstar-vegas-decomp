// Decompiled from classes.dex (SourceFile: AppStateManager$c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.appstate;

abstract class AppStateManager$c extends com.google.android.gms.appstate.AppStateManager$a {
    // Methods
    private AppStateManager$c()
    {
      super();
    }

    /* synthetic */ AppStateManager$c(int p0)
    {
      this();
    }

    private com.google.android.gms.appstate.AppStateManager$StateListResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.appstate.AppStateManager$StateListResult)new com.google.android.gms.appstate.AppStateManager$c$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.appstate.AppStateManager$c$1(this, p0);
    }

}

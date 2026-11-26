// Decompiled from classes.dex (SourceFile: AppStateManager$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.appstate;

final class AppStateManager$2 implements com.google.android.gms.appstate.AppStateManager$StateResult {
    // Fields
    final com.google.android.gms.common.api.Status a;

    // Methods
    AppStateManager$2(com.google.android.gms.common.api.Status p0)
    {
      super();
      this.a = p0;
    
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final com.google.android.gms.appstate.AppStateManager$StateLoadedResult b()
    {
      return null;
    }

    public final com.google.android.gms.appstate.AppStateManager$StateConflictResult c()
    {
      return null;
    }

    public final void d()
    {
      ;
    }

}

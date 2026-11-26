// Decompiled from classes.dex (SourceFile: AppStateManager$5$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.appstate;

class AppStateManager$5$1 implements com.google.android.gms.appstate.AppStateManager$StateDeletedResult {
    // Fields
    final com.google.android.gms.common.api.Status a;
    final com.google.android.gms.appstate.AppStateManager$5 b;

    // Methods
    AppStateManager$5$1(com.google.android.gms.appstate.AppStateManager$5 p0, com.google.android.gms.common.api.Status p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final int b()
    {
      return this.b.a;
    }

}

// Decompiled from classes.dex (SourceFile: AppStateManager$c$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.appstate;

class AppStateManager$c$1 implements com.google.android.gms.appstate.AppStateManager$StateListResult {
    // Fields
    final com.google.android.gms.common.api.Status a;
    final com.google.android.gms.appstate.AppStateManager$c b;

    // Methods
    AppStateManager$c$1(com.google.android.gms.appstate.AppStateManager$c p0, com.google.android.gms.common.api.Status p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final com.google.android.gms.appstate.AppStateBuffer b()
    {
      return new com.google.android.gms.appstate.AppStateBuffer(null);
    }

}

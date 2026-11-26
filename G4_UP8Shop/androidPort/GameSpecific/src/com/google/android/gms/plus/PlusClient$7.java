// Decompiled from classes.dex (SourceFile: PlusClient$7.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus;

class PlusClient$7 implements com.google.android.gms.common.api.a$d {
    // Fields
    final com.google.android.gms.plus.PlusClient$OnAccessRevokedListener a;
    final com.google.android.gms.plus.PlusClient b;

    // Methods
    PlusClient$7(com.google.android.gms.plus.PlusClient p0, com.google.android.gms.plus.PlusClient$OnAccessRevokedListener p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    private void a(com.google.android.gms.common.api.Status p0)
    {
      p0.D_().h();
      this.a.a();
    }

    /* synthetic */ public final void a(Object p0)
    {
      ((com.google.android.gms.common.api.Status)p0).D_().h();
      this.a.a();
    }

}

// Decompiled from classes.dex (SourceFile: PlusClient$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus;

class PlusClient$1 implements com.google.android.gms.common.api.a$d {
    // Fields
    final com.google.android.gms.plus.PlusClient$OnMomentsLoadedListener a;
    final com.google.android.gms.plus.PlusClient b;

    // Methods
    PlusClient$1(com.google.android.gms.plus.PlusClient p0, com.google.android.gms.plus.PlusClient$OnMomentsLoadedListener p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    private void a(com.google.android.gms.plus.Moments$LoadMomentsResult p0)
    {
      p0.D_().h();
      p0.E_();
      p0.c();
      p0.F_();
      this.a.a();
    }

    /* synthetic */ public final void a(Object p0)
    {
      com.google.android.gms.plus.Moments$LoadMomentsResult v2;
      v2 = (com.google.android.gms.plus.Moments$LoadMomentsResult)p0;
      v2.D_().h();
      v2.E_();
      v2.c();
      v2.F_();
      this.a.a();
    }

}

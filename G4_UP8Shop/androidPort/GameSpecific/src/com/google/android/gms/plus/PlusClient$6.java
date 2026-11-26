// Decompiled from classes.dex (SourceFile: PlusClient$6.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus;

class PlusClient$6 implements com.google.android.gms.common.api.a$d {
    // Fields
    final com.google.android.gms.plus.PlusClient$OnPeopleLoadedListener a;
    final com.google.android.gms.plus.PlusClient b;

    // Methods
    PlusClient$6(com.google.android.gms.plus.PlusClient p0, com.google.android.gms.plus.PlusClient$OnPeopleLoadedListener p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    private void a(com.google.android.gms.plus.People$LoadPeopleResult p0)
    {
      p0.D_().h();
      p0.H_();
      p0.c();
      this.a.a();
    }

    /* synthetic */ public final void a(Object p0)
    {
      com.google.android.gms.plus.People$LoadPeopleResult v2;
      v2 = (com.google.android.gms.plus.People$LoadPeopleResult)p0;
      v2.D_().h();
      v2.H_();
      v2.c();
      this.a.a();
    }

}

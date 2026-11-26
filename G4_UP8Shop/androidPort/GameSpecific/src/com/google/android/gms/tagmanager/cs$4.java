// Decompiled from classes.dex (SourceFile: cs$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class cs$4 implements com.google.android.gms.tagmanager.cs$a {
    // Fields
    final com.google.android.gms.tagmanager.cs a;

    // Methods
    cs$4(com.google.android.gms.tagmanager.cs p0)
    {
      super();
      this.a = p0;
    
    }

    public final void a(
            com.google.android.gms.tagmanager.cq$e p0,
            java.util.Set<com.google.android.gms.tagmanager.cq$a> p1,
            java.util.Set<com.google.android.gms.tagmanager.cq$a> p2,
            com.google.android.gms.tagmanager.cm p3)
    {
      com.google.android.gms.tagmanager.ck v5;
      com.google.android.gms.tagmanager.ck v6;
      p1.addAll(p0.c());
      p2.addAll(p0.d());
      v5 = p3.e();
      p0.c();
      p0.h();
      v5.a();
      v6 = p3.f();
      p0.d();
      p0.i();
      v6.a();
    }

}

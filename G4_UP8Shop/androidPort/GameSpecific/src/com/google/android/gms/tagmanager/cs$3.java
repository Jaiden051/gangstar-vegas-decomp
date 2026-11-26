// Decompiled from classes.dex (SourceFile: cs$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class cs$3 implements com.google.android.gms.tagmanager.cs$a {
    // Fields
    final java.util.Map a;
    final java.util.Map b;
    final java.util.Map c;
    final java.util.Map d;
    final com.google.android.gms.tagmanager.cs e;

    // Methods
    cs$3(com.google.android.gms.tagmanager.cs p0, java.util.Map p1, java.util.Map p2, java.util.Map p3, java.util.Map p4)
    {
      super();
      this.e = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p4;
    
    }

    public final void a(
            com.google.android.gms.tagmanager.cq$e p0,
            java.util.Set<com.google.android.gms.tagmanager.cq$a> p1,
            java.util.Set<com.google.android.gms.tagmanager.cq$a> p2,
            com.google.android.gms.tagmanager.cm p3)
    {
      java.util.Collection v5;
      java.util.Collection v6;
      v5 = (java.util.List)this.a.get(p0);
      this.b.get(p0);
      if ( v5 != null )
      {
        p1.addAll(v5);
        p3.c().a();
      }
      v6 = (java.util.List)this.c.get(p0);
      this.d.get(p0);
      if ( v6 != null )
      {
        p2.addAll(v6);
        p3.d().a();
      }
    }

}

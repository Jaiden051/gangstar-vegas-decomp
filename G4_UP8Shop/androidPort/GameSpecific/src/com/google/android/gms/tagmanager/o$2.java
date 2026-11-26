// Decompiled from classes.dex (SourceFile: o$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class o$2 implements com.google.android.gms.tagmanager.o$a {
    // Fields
    final boolean a;
    final com.google.android.gms.tagmanager.o b;

    // Methods
    o$2(com.google.android.gms.tagmanager.o p0, boolean p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final boolean a(com.google.android.gms.tagmanager.Container p0)
    {
      if ( this.a )
        return p0.b() + 43200000 >= o.a(this.b).a();
      else
        return !p0.c();
    }

}

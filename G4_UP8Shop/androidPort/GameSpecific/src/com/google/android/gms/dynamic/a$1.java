// Decompiled from classes.dex (SourceFile: a$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.dynamic;

class a$1<T extends com.google.android.gms.dynamic.LifecycleDelegate> implements com.google.android.gms.dynamic.f<T> {
    // Fields
    final com.google.android.gms.dynamic.a a;

    // Methods
    a$1(com.google.android.gms.dynamic.a p0)
    {
      super();
      this.a = p0;
    
    }

    public final void a(T p0)
    {
      java.util.Iterator v2;
      com.google.android.gms.dynamic.a$a v3;
      a.a(this.a, p0);
      v2 = a.a(this.a).iterator();
      while ( v2.hasNext() )
      {
        v3 = (com.google.android.gms.dynamic.a$a)v2.next();
        a.b(this.a);
        v3.b();
      }
      a.a(this.a).clear();
      a.a(this.a, (android.os.Bundle)null);
    }

}

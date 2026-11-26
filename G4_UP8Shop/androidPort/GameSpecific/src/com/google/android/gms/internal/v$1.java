// Decompiled from classes.dex (SourceFile: v$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class v$1 implements android.content.ComponentCallbacks {
    // Fields
    final com.google.android.gms.internal.v a;

    // Methods
    v$1(com.google.android.gms.internal.v p0)
    {
      super();
      this.a = p0;
    
    }

    public void onConfigurationChanged(android.content.res.Configuration p0)
    {
      if ( v.a(this.a) != null && v.a(this.a).i != null && v.a(this.a).i.b != null )
        v.a(this.a).i.b.a();
    }

    public void onLowMemory()
    {
      ;
    }

}

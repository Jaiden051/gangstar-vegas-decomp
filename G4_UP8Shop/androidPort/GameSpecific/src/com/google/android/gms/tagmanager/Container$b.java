// Decompiled from classes.dex (SourceFile: Container$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class Container$b implements com.google.android.gms.tagmanager.s$a {
    // Fields
    final com.google.android.gms.tagmanager.Container a;

    // Methods
    private Container$b(com.google.android.gms.tagmanager.Container p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ Container$b(com.google.android.gms.tagmanager.Container p0, int p1)
    {
      this(p0);
    }

    public final Object a(String p0, java.util.Map<String, Object> p1)
    {
      com.google.android.gms.tagmanager.Container$FunctionCallTagCallback v3; // RETVAL
    
      v3 = this.a.b(p0);
      if ( v3 != null )
        v3.a();
      return dh.mX();
    }

}

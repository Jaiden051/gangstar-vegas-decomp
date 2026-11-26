// Decompiled from classes.dex (SourceFile: Container$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class Container$a implements com.google.android.gms.tagmanager.s$a {
    // Fields
    final com.google.android.gms.tagmanager.Container a;

    // Methods
    private Container$a(com.google.android.gms.tagmanager.Container p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ Container$a(com.google.android.gms.tagmanager.Container p0, int p1)
    {
      this(p0);
    }

    public final Object a(String p0, java.util.Map<String, Object> p1)
    {
      com.google.android.gms.tagmanager.Container$FunctionCallMacroCallback v3; // RETVAL
    
      v3 = this.a.a(p0);
      if ( v3 != null )
        return v3.a();
      else
        return null;
    }

}

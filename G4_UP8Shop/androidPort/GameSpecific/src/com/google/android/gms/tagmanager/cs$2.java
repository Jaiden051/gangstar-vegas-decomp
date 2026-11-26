// Decompiled from classes.dex (SourceFile: cs$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class cs$2 implements com.google.android.gms.tagmanager.l$a {
    // Fields
    final com.google.android.gms.tagmanager.cs a;

    // Methods
    cs$2(com.google.android.gms.tagmanager.cs p0)
    {
      super();
      this.a = p0;
    
    }

    private static int a(String p0, com.google.android.gms.tagmanager.cs$b p1)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      return p0.length() + p1.c();
    }

    /* synthetic */ public final int a(Object p0, Object p1)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      return ((String)p0).length() + ((com.google.android.gms.tagmanager.cs$b)p1).c();
    }

}

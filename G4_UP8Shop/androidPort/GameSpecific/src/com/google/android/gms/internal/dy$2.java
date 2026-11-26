// Decompiled from classes.dex (SourceFile: dy$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class dy$2 implements com.google.android.gms.internal.ez$a {
    // Fields
    final java.lang.String a;

    // Methods
    dy$2(String p0)
    {
      super();
      this.a = p0;
    
    }

    public final void a(com.google.android.gms.internal.ey p0)
    {
      Object[] v2;
      String v3;
      v2 = new Object[2];
      v2[0] = "AFMA_buildAdURL";
      v2[1] = this.a;
      v3 = String.format("javascript:%s(%s);", v2);
      ev.C("About to execute: " + v3);
      p0.loadUrl(v3);
    }

}

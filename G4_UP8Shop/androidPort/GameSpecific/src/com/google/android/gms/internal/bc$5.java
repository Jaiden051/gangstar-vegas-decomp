// Decompiled from classes.dex (SourceFile: bc$5.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class bc$5 implements com.google.android.gms.internal.bd {
    // Methods
    bc$5()
    {
      super();
    }

    public final void a(com.google.android.gms.internal.ey p0, java.util.Map<String, String> p1)
    {
      com.google.android.gms.internal.cg v3;
      v3 = p0.d();
      if ( v3 != null )
        v3.a("1".equals(p1.get("custom_close")));
      else
        ev.D("A GMSG tried to use a custom close button on something that wasn't an overlay.");
    }

}

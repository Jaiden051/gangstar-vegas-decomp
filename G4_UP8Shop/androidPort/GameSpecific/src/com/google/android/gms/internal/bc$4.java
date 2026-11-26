// Decompiled from classes.dex (SourceFile: bc$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class bc$4 implements com.google.android.gms.internal.bd {
    // Methods
    bc$4()
    {
      super();
    }

    public final void a(com.google.android.gms.internal.ey p0, java.util.Map<String, String> p1)
    {
      com.google.android.gms.internal.cg v3; // RETVAL
    
      v3 = p0.d();
      if ( v3 != null )
        v3.a();
      else
        ev.D("A GMSG tried to close something that wasn't an overlay.");
    }

}

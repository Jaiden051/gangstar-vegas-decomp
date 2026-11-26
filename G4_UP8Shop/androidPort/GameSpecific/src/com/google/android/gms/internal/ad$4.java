// Decompiled from classes.dex (SourceFile: ad$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class ad$4 implements com.google.android.gms.internal.bd {
    // Fields
    final com.google.android.gms.internal.ad a;

    // Methods
    ad$4(com.google.android.gms.internal.ad p0)
    {
      super();
      this.a = p0;
    
    }

    public final void a(com.google.android.gms.internal.ey p0, java.util.Map<String, String> p1)
    {
      if ( p1.containsKey("pingType") && "unloadPing".equals(p1.get("pingType")) )
      {
        ad.c(ad.b(this.a));
        ev.B("Unregistered GMSG handlers for: " + ad.c(this.a).d());
      }
    }

}

// Decompiled from classes.dex (SourceFile: bc$6.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class bc$6 implements com.google.android.gms.internal.bd {
    // Methods
    bc$6()
    {
      super();
    }

    public final void a(com.google.android.gms.internal.ey p0, java.util.Map<String, String> p1)
    {
      String v3;
      v3 = (String)p1.get("u");
      if ( v3 != null )
        new com.google.android.gms.internal.et(p0.getContext(), p0.h().b, v3).e();
      else
        ev.D("URL missing from httpTrack GMSG.");
    }

}

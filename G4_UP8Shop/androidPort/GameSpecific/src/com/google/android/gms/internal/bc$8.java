// Decompiled from classes.dex (SourceFile: bc$8.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class bc$8 implements com.google.android.gms.internal.bd {
    // Methods
    bc$8()
    {
      super();
    }

    public final void a(com.google.android.gms.internal.ey p0, java.util.Map<String, String> p1)
 throws InterruptedException {
      String v3;
      String v4;
      String v5;
      int v6;
      int v7;
      int v8;
      com.google.android.gms.internal.l v9; // RETVAL
    
      v3 = (String)p1.get("tx");
      v4 = (String)p1.get("ty");
      v5 = (String)p1.get("td");
      try
      {
        v6 = Integer.parseInt(v3);
        v7 = Integer.parseInt(v4);
        v8 = Integer.parseInt(v5);
        v9 = p0.g();
        if ( v9 != null )
          v9.a().a(v6, v7, v8);
      }
      catch ( NumberFormatException e )
      {
        ev.D("Could not parse touch parameters from gmsg.");
      }
    }

}

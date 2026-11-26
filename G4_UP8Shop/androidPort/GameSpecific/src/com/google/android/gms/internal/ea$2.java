// Decompiled from classes.dex (SourceFile: ea$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class ea$2 implements com.google.android.gms.internal.bd {
    // Fields
    final com.google.android.gms.internal.ea a;

    // Methods
    ea$2(com.google.android.gms.internal.ea p0)
    {
      super();
      this.a = p0;
    
    }

    public final void a(com.google.android.gms.internal.ey p0, java.util.Map<String, String> p1)
    {
      Object v3; // RETVAL
      Object v4;
      com.google.android.gms.internal.ec v5;
      String v6; // RETVAL
      String v7;
      v3 = ea.a(this.a);
      v4 = v3;
      synchronized ( v4 )
      {
        v5 = new com.google.android.gms.internal.ec(p1);
        v6 = v5.c();
        v7 = v6;
        if ( v6 != null )
        {
          if ( v6.contains("%40mediation_adapters%40") )
            ev.C(
              "Ad request URL modified to "
            + v7.replaceAll("%40mediation_adapters%40", em.a(
                                                          p0.getContext(),
                                                          (String)p1.get("check_adapters"),
                                                          ea.b(this.a))));
          ea.a(this.a, v5);
          ea.a(this.a).notify();
          com.gameloft.android.DecompRT.monitorExit(v4);
        }
        else
        {
          ev.D("URL missing in loadAdUrl GMSG.");
          com.gameloft.android.DecompRT.monitorExit(v4);
        }
        return;
      }
    }

}

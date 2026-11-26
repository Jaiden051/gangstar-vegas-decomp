// Decompiled from classes.dex (SourceFile: ea$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class ea$1 implements com.google.android.gms.internal.bd {
    // Fields
    final com.google.android.gms.internal.ea a;

    // Methods
    ea$1(com.google.android.gms.internal.ea p0)
    {
      super();
      this.a = p0;
    
    }

    public final void a(com.google.android.gms.internal.ey p0, java.util.Map<String, String> p1)
    {
      Object v3; // RETVAL
      Object v4;
      com.google.android.gms.internal.ec v5;
      v3 = ea.a(this.a);
      v4 = v3;
      synchronized ( v4 )
      {
        v5 = new com.google.android.gms.internal.ec(p1);
        ev.D("Invalid " + v5.d() + " request error: " + v5.a());
        ea.a(this.a, 1);
        ea.a(this.a).notify();
        com.gameloft.android.DecompRT.monitorExit(v4);
      }
    }

}

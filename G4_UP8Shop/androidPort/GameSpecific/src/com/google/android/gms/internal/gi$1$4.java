// Decompiled from classes.dex (SourceFile: gi$1$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class gi$1$4 implements java.lang.Runnable {
    // Fields
    final java.lang.String a;
    final java.lang.String b;
    final com.google.android.gms.internal.gi$1 c;

    // Methods
    gi$1$4(com.google.android.gms.internal.gi$1 p0, String p1, String p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    public void run()
    {
      try {
      com.google.android.gms.internal.gi a;
      java.util.Map v2; // RETVAL
      Object v3;
      com.google.android.gms.cast.Cast$MessageReceivedCallback v4;
      Object[] v6;
      a = this.c.a;
      v2 = gi.f(a);
      v3 = v2;
      synchronized ( v3 )
      {
        v4 = (com.google.android.gms.cast.Cast$MessageReceivedCallback)gi.f(this.c.a).get(this.a);
        com.gameloft.android.DecompRT.monitorExit(v3);
      }
      if ( v4 != null )
      {
        gi.g(this.c.a);
        v4.a(this.b);
      }
      else
      {
        v6 = new Object[1];
        v6[0] = this.a;
        gi.ef().b("Discarded message for unknown namespace '%s'", v6);
      }
      } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
    }

}

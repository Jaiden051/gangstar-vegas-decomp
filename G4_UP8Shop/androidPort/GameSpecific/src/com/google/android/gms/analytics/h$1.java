// Decompiled from classes.dex (SourceFile: h$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

class h$1 extends java.lang.Thread {
    // Fields
    final com.google.android.gms.analytics.h a;

    // Methods
    h$1(com.google.android.gms.analytics.h p0, String p1)
    {
      super(p1);
      this.a = p0;
    
    }

    public void run()
    {
      Object v1; // RETVAL
      Object v2;
      v1 = h.a(this.a);
      v2 = v1;
      synchronized ( v2 )
      {
        h.a(this.a, this.a.b());
        h.a(this.a, true);
        h.a(this.a).notifyAll();
        com.gameloft.android.DecompRT.monitorExit(v2);
      }
    }

}

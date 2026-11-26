// Decompiled from classes.dex (SourceFile: bf.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class bf implements com.google.android.gms.tagmanager.cf {
    // Fields
    private final long a;
    private final long b;
    private final int c;
    private double d;
    private long e;
    private final java.lang.Object f;
    private final java.lang.String g;
    private final com.google.android.gms.internal.ik h;

    // Methods
    public bf(int p0, long p1, long p3, String p5, com.google.android.gms.internal.ik p6)
    {
      super();
      this.f = new Object();
      this.c = 30;
      this.d = (double)this.c;
      this.a = 900000;
      this.b = 5000;
      this.g = p5;
      this.h = p6;
    }

    public final boolean a()
    {
      boolean v1 = false;
      Object f = null;
      long v3 = 0L; // RETVAL
      long v4 = 0L;
      double v6 = 0.0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v1 = false;
            f = this.f;
            com.gameloft.android.DecompRT.monitorEnter(f);
            v3 = this.h.a();
            v4 = v3;
            if ( v3 - this.e < this.b )
            { _pc = 1; continue _sm; }
            if ( this.d < (double)this.c )
            {
            v6 = (double)(v3 - this.e) / (double)this.a;
            if ( v6 > 0.0 )
            this.d = Math.min((double)this.c, v6 + this.d);
            }
            this.e = v4;
            if ( !(this.d < 1.0) ) { _pc = 2; continue _sm; }
            _pc = 1;
            continue _sm;
          case 1:
            bh.D("Excessive " + this.g + " detected; call ignored.");
            _pc = 3;
            continue _sm;
          case 2:
            {
            this.d = this.d - 1.0;
            return true;
            }
          case 3:
            return v1;
        }
      }
}

}

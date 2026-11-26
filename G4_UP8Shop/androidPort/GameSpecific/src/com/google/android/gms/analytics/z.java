// Decompiled from classes.dex (SourceFile: z.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

class z implements com.google.android.gms.analytics.ad {
    // Fields
    private final long a;
    private final int b;
    private double c;
    private long d;
    private final java.lang.Object e;
    private final java.lang.String f;

    // Methods
    private z(int p0, long p1, String p3)
    {
      super();
      this.e = new Object();
      this.b = 60;
      this.c = (double)this.b;
      this.a = 2000;
      this.f = p3;
    }

    public z(String p0)
    {
      this(60, 2000, p0);
    }

    public final boolean a()
    {
      Object e;
      long v2; // RETVAL
      long v3;
      double v4;
      e = this.e;
      synchronized ( e )
      {
        v2 = System.currentTimeMillis();
        v3 = v2;
        if ( this.c < (double)this.b )
        {
          v4 = (double)(v2 - this.d) / (double)this.a;
          if ( v4 > 0.0 )
            this.c = Math.min((double)this.b, v4 + this.c);
        }
        this.d = v3;
        if ( this.c < 1.0 )
        {
          aa.D("Excessive " + this.f + " detected; call ignored.");
          return false;
        }
        else
        {
          this.c = this.c - 1.0;
          return true;
        }
      }
    }

}

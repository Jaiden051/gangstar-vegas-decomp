// Decompiled from classes.dex (SourceFile: cv.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class cv implements com.google.android.gms.tagmanager.cf {
    // Fields
    private final long a;
    private final int b;
    private double c;
    private long d;
    private final java.lang.Object e;

    // Methods
    public cv()
    {
      this(60, 2000);
    }

    private cv(int p0, long p1)
    {
      super();
      this.e = new Object();
      this.b = 60;
      this.c = (double)this.b;
      this.a = 2000;
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
          bh.D("No more tokens available.");
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

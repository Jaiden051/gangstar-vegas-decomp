// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer.utils;

public final class b extends java.io.FilterInputStream {
    // Fields
    private long a;
    private long b;

    // Methods
    public b(java.io.InputStream p0)
    {
      super(p0);
      this.a = 0;
      this.b = 0;
    }

    private synchronized long c()
    {
      return this.a;
    }

    public final synchronized void a()
    {
      this.a = 0;
    }

    public final synchronized void a(long p0)
    {
      this.b = p0;
    }

    public final synchronized void b()
    {
      long v1;
      try
      {
        v1 = this.b - this.a;
        if ( v1 > 0 )
          this.skip(v1);
      }
      catch ( Exception e )
      {
      }
      finally
      {
      }
    }

    public final synchronized int read()
 throws java.io.IOException {
      int v1;
      int v2;
      v1 = com.gameloft.android.DecompRT.__cmp_long(this.a + 1, this.b);
      if ( v1 > 0 )
        return -2;
      try
      {
        v2 = super.read();
        if ( v2 >= 0 )
          ++this.a;
      }
      finally
      {
      }
      return v2;
    }

    public final synchronized int read(byte[] p0, int p1, int p2)
 throws java.io.IOException {
      int v4;
      long v5;
      int v6;
      int v8; // RETVAL
    
      v4 = com.gameloft.android.DecompRT.__cmp_long(this.a + p2, this.b);
      if ( v4 > 0 )
      {
        v5 = this.b - this.a;
        p2 = (int)v5;
        if ( (int)v5 <= 0 )
          return -2;
      }
      try
      {
        v8 = super.read(p0, p1, p2);
        v6 = v8;
        if ( v8 > 0 )
          this.a += v8;
      }
      finally
      {
      }
      return v6;
    }

    public final synchronized long skip(long p0)
 throws java.io.IOException {
      long result; // RETVAL
    
      result = super.skip(p0);
      if ( result > 0 )
        this.a += result;
      return result;
    }

}

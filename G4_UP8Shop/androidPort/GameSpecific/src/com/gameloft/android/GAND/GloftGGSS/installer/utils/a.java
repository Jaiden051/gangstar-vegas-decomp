// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer.utils;

public final class a extends java.io.FilterInputStream {
    // Fields
    private java.util.zip.Checksum a;

    // Methods
    private a(java.io.InputStream p0, java.util.zip.Checksum p1)
    {
      super(p0);
      this.a = p1;
    }

    private java.util.zip.Checksum a()
    {
      return this.a;
    }

    public final int read()
 throws java.io.IOException {
      int result; // RETVAL
    
      result = this.in.read();
      if ( result != -1 )
        this.a.update(result);
      return result;
    }

    public final int read(byte[] p0, int p1, int p2)
 throws java.io.IOException {
      int result; // RETVAL
    
      result = this.in.read(p0, p1, p2);
      if ( result != -1 )
        this.a.update(p0, p1, result);
      return result;
    }

    public final long skip(long p0)
 throws java.io.IOException {
      long v2;
      int v4;
      byte[] v5;
      int v6; // RETVAL
      int v7;
      if ( p0 == 0 )
        return 0;
      v4 = (int)Math.min(p0, 1024);
      v5 = new byte[v4];
      v2 = 0;
      while ( p0 > 0 )
      {
        v6 = this.in.read(v5, 0, v4);
        v7 = v6;
        if ( v6 == -1 )
          break;
        p0 -= v6;
        v2 += v6;
        v4 = (int)Math.min(p0, 1024);
        this.a.update(v5, 0, v7);
      }
      this.a.reset();
      return v2;
    }

}

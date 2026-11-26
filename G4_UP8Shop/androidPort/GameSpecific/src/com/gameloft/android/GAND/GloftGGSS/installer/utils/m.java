// Decompiled from classes.dex (SourceFile: m.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer.utils;

public final class m {
    // Fields
    int a;
    private java.util.zip.CRC32 b;
    private java.util.zip.CheckedInputStream c;
    private java.lang.String d;

    // Methods
    public m(String p0)
    {
      super();
      this.b = null;
      this.c = null;
      this.d = null;
      this.a = -1;
      try
      {
        this.b = new java.util.zip.CRC32();
        this.c = new java.util.zip.CheckedInputStream(new java.io.FileInputStream(p0), this.b);
        this.d = p0;
      }
      catch ( java.io.FileNotFoundException e )
      {
      }
    }

    private long c()
    {
      try
      {
        this.b.reset();
        this.c.skip(0x200000);
        ++this.a;
        return this.c.getChecksum().getValue();
      }
      catch ( Exception e )
      {
        return -1;
      }
    }

    public final String a()
    {
      return this.d;
    }

    public final boolean a(long p0)
    {
      return this.c() == p0;
    }

    public final void b()
    {
      try
      {
        if ( this.c != null )
        {
          this.c.close();
          this.c = null;
        }
        this.b = null;
      }
      catch ( Exception e )
      {
      }
    }

}

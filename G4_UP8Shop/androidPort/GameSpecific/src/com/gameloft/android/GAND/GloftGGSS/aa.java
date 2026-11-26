// Decompiled from classes.dex (SourceFile: aa.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class aa extends java.io.Writer {
    // Fields
    private java.lang.StringBuilder a;

    // Methods
    aa()
    {
      super();
      this.a = new StringBuilder();
    }

    private void a()
    {
      if ( this.a.length() > 0 )
      {
        Log.v("GLSurfaceView", this.a.toString(), new Object[0]);
        this.a.delete(0, this.a.length());
      }
    }

    public final void close()
    {
      this.a();
    }

    public final void flush()
    {
      this.a();
    }

    public final void write(char[] p0, int p1, int p2)
    {
      int i;
      int v5;
      for ( i = 0; i < p2; ++i )
      {
        v5 = p0[p1 + i];
        if ( v5 == 10 )
          this.a();
        else
          this.a.append((char)v5);
      }
    }

}

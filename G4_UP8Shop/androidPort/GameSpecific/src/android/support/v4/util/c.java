// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.util;

import android.util.Log;
public final class c extends java.io.Writer {
    // Fields
    private final java.lang.String a;
    private java.lang.StringBuilder b;

    // Methods
    public c(String p0)
    {
      super();
      this.b = new StringBuilder(128);
      this.a = p0;
    }

    private void a()
    {
      if ( this.b.length() > 0 )
      {
        Log.d(this.a, this.b.toString());
        this.b.delete(0, this.b.length());
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
          this.b.append((char)v5);
      }
    }

}

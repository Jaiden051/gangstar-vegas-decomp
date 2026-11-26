// Decompiled from classes.dex (SourceFile: h.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.text;

import java.nio.CharBuffer;
abstract class h implements android.support.v4.text.e {
    // Fields
    private final android.support.v4.text.g a;

    // Methods
    public h(android.support.v4.text.g p0)
    {
      super();
      this.a = p0;
    }

    private boolean b(CharSequence p0, int p1, int p2)
    {
      boolean v4;
      switch ( this.a.a(p0, p1, p2) )
      {
        case 0:
          v4 = true;
          break;
        case 1:
          v4 = false;
          break;
        default:
          v4 = this.a();
          break;
      }
      return v4;
    }

    protected abstract boolean a();

    public final boolean a(CharSequence p0, int p1, int p2)
    {
      boolean v4;
      if ( p0 == null || p1 < 0 || p2 < 0 || p0.length() - p2 < p1 )
        throw new IllegalArgumentException();
      if ( this.a == null )
        return this.a();
      switch ( this.a.a(p0, p1, p2) )
      {
        case 0:
          v4 = true;
          break;
        case 1:
          v4 = false;
          break;
        default:
          return this.a();
      }
      return v4;
    }

    public final boolean a(char[] p0, int p1, int p2)
    {
      return this.a(CharBuffer.wrap(p0), p1, p2);
    }

}

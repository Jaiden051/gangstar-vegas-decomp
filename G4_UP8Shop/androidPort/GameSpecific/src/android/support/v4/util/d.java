// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.util;

final class d<T> implements java.util.Iterator<T> {
    // Fields
    final int a;
    int b;
    int c;
    boolean d;
    final android.support.v4.util.MapCollections e;

    // Methods
    d(android.support.v4.util.MapCollections p0, int p1)
    {
      super();
      this.e = p0;
      this.d = false;
      this.a = p1;
      this.b = p0.a();
    
    }

    public final boolean hasNext()
    {
      return this.c < this.b;
    }

    public final T next()
    {
      Object result; // RETVAL
    
      result = this.e.a(this.c, this.a);
      ++this.c;
      this.d = true;
      return (T)result;
    }

    public final void remove()
    {
      if ( !this.d )
        throw new IllegalStateException();
      --this.c;
      --this.b;
      this.d = false;
      this.e.a(this.c);
    }

}

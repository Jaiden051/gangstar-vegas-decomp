// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.util;

final class b<K, V> extends android.support.v4.util.MapCollections<K, V> {
    // Fields
    final android.support.v4.util.a a;

    // Methods
    b(android.support.v4.util.a p0)
    {
      super();
      this.a = p0;
    
    }

    protected final int a()
    {
      return this.a.h;
    }

    protected final int a(Object p0)
    {
      if ( p0 != null )
        return this.a.a(p0, p0.hashCode());
      else
        return this.a.a();
    }

    protected final Object a(int p0, int p1)
    {
      return this.a.g[2 * p0 + p1];
    }

    protected final V a(int p0, V p1)
    {
      return (V)this.a.a(p0, p1);
    }

    protected final void a(int p0)
    {
      this.a.c(p0);
    }

    protected final void a(K p0, V p1)
    {
      this.a.put(p0, p1);
    }

    protected final int b(Object p0)
    {
      return this.a.a(p0);
    }

    protected final java.util.Map<K, V> b()
    {
      return (java.util.Map)this.a;
    }

    protected final void c()
    {
      this.a.clear();
    }

}

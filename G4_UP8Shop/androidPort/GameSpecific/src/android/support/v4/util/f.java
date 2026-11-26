// Decompiled from classes.dex (SourceFile: f.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.util;

final class f<K, V> implements java.util.Iterator<java.util.Map.Entry<K, V>>, java.util.Map.Entry<K, V> {
    // Fields
    int a;
    int b;
    boolean c;
    final android.support.v4.util.MapCollections d;

    // Methods
    f(android.support.v4.util.MapCollections p0)
    {
      super();
      this.d = p0;
      this.c = false;
      this.a = p0.a() - 1;
      this.b = -1;
    
    }

    private java.util.Map.Entry<K, V> a()
    {
      ++this.b;
      this.c = true;
      return (java.util.Map.Entry)this;
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      java.util.Map.Entry v4;
      v2 = false;
      if ( !this.c )
        throw new IllegalStateException("This container does not support retaining Map.Entry objects");
      if ( p0 instanceof java.util.Map.Entry )
      {
        v4 = (java.util.Map.Entry)p0;
        if ( ContainerHelpers.equal(v4.getKey(), this.d.a(this.b, 0)) )
          return ContainerHelpers.equal(v4.getValue(), this.d.a(this.b, 1));
      }
      return v2;
    }

    public final K getKey()
    {
      if ( !this.c )
        throw new IllegalStateException("This container does not support retaining Map.Entry objects");
      return (K)this.d.a(this.b, 0);
    }

    public final V getValue()
    {
      if ( !this.c )
        throw new IllegalStateException("This container does not support retaining Map.Entry objects");
      return (V)this.d.a(this.b, 1);
    }

    public final boolean hasNext()
    {
      return this.b < this.a;
    }

    public final int hashCode()
    {
      int v1;
      Object v2;
      Object v3;
      int v4;
      v1 = 0;
      if ( !this.c )
        throw new IllegalStateException("This container does not support retaining Map.Entry objects");
      v2 = this.d.a(this.b, 0);
      v3 = this.d.a(this.b, 1);
      if ( v2 != null )
        v4 = v2.hashCode();
      else
        v4 = 0;
      if ( v3 != null )
        v1 = v3.hashCode();
      return v1 ^ v4;
    }

    public final java.util.Map.Entry<K, V> next()
    {
      ++this.b;
      this.c = true;
      return this;
    }

    public final void remove()
    {
      if ( !this.c )
        throw new IllegalStateException();
      this.d.a(this.b);
      --this.b;
      --this.a;
      this.c = false;
    }

    public final V setValue(V p0)
    {
      if ( !this.c )
        throw new IllegalStateException("This container does not support retaining Map.Entry objects");
      return (V)this.d.a(this.b, p0);
    }

    public final String toString()
    {
      return this.getKey() + "=" + this.getValue();
    }

}

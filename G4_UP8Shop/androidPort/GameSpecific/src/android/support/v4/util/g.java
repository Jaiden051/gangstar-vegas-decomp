// Decompiled from classes.dex (SourceFile: g.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.util;

final class g<V> implements java.util.Collection<V> {
    // Fields
    final android.support.v4.util.MapCollections a;

    // Methods
    g(android.support.v4.util.MapCollections p0)
    {
      super();
      this.a = p0;
    
    }

    public final boolean add(V p0)
    {
      throw new UnsupportedOperationException();
    }

    public final boolean addAll(java.util.Collection<? extends V> p0)
    {
      throw new UnsupportedOperationException();
    }

    public final void clear()
    {
      this.a.c();
    }

    public final boolean contains(Object p0)
    {
      return this.a.b(p0) >= 0;
    }

    public final boolean containsAll(java.util.Collection<?> p0)
    {
      java.util.Iterator v2;
      v2 = p0.iterator();
      while ( v2.hasNext() )
      {
        if ( !this.contains(v2.next()) )
          return false;
      }
      return true;
    }

    public final boolean isEmpty()
    {
      return this.a.a() == 0;
    }

    public final java.util.Iterator<V> iterator()
    {
      return (java.util.Iterator)new android.support.v4.util.d(this.a, 1);
    }

    public final boolean remove(Object p0)
    {
      int v2; // RETVAL
    
      v2 = this.a.b(p0);
      if ( v2 < 0 )
        return false;
      this.a.a(v2);
      return true;
    }

    public final boolean removeAll(java.util.Collection<?> p0)
    {
      int v2;
      int v3;
      boolean v4;
      v2 = 0;
      v3 = this.a.a();
      v4 = false;
      while ( v2 < v3 )
      {
        if ( p0.contains(this.a.a(v2, 1)) )
        {
          this.a.a(v2--);
          --v3;
          v4 = true;
        }
        ++v2;
      }
      return v4;
    }

    public final boolean retainAll(java.util.Collection<?> p0)
    {
      int v2;
      int v3;
      boolean v4;
      v2 = 0;
      v3 = this.a.a();
      v4 = false;
      while ( v2 < v3 )
      {
        if ( !p0.contains(this.a.a(v2, 1)) )
        {
          this.a.a(v2--);
          --v3;
          v4 = true;
        }
        ++v2;
      }
      return v4;
    }

    public final int size()
    {
      return this.a.a();
    }

    public final Object[] toArray()
    {
      return this.a.b(1);
    }

    public final <T> T[] toArray(T[] p0)
    {
      return (T[])this.a.a(p0, 1);
    }

}

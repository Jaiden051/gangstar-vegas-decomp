// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.util;

final class e<K> implements java.util.Set<K> {
    // Fields
    final android.support.v4.util.MapCollections a;

    // Methods
    e(android.support.v4.util.MapCollections p0)
    {
      super();
      this.a = p0;
    
    }

    public final boolean add(K p0)
    {
      throw new UnsupportedOperationException();
    }

    public final boolean addAll(java.util.Collection<? extends K> p0)
    {
      throw new UnsupportedOperationException();
    }

    public final void clear()
    {
      this.a.c();
    }

    public final boolean contains(Object p0)
    {
      return this.a.a(p0) >= 0;
    }

    public final boolean containsAll(java.util.Collection<?> p0)
    {
      return MapCollections.containsAllHelper(this.a.b(), p0);
    }

    public final boolean equals(Object p0)
    {
      return MapCollections.equalsSetHelper((java.util.Set)this, p0);
    }

    public final int hashCode()
    {
      int v1;
      int v2;
      Object v3; // RETVAL
      int v4;
      v1 = this.a.a() - 1;
      v2 = 0;
      while ( v1 >= 0 )
      {
        v3 = this.a.a(v1, 0);
        if ( v3 != null )
          v4 = v3.hashCode();
        else
          v4 = 0;
        v2 += v4;
        --v1;
      }
      return v2;
    }

    public final boolean isEmpty()
    {
      return this.a.a() == 0;
    }

    public final java.util.Iterator<K> iterator()
    {
      return (java.util.Iterator)new android.support.v4.util.d(this.a, 0);
    }

    public final boolean remove(Object p0)
    {
      int v2; // RETVAL
    
      v2 = this.a.a(p0);
      if ( v2 < 0 )
        return false;
      this.a.a(v2);
      return true;
    }

    public final boolean removeAll(java.util.Collection<?> p0)
    {
      return MapCollections.removeAllHelper(this.a.b(), p0);
    }

    public final boolean retainAll(java.util.Collection<?> p0)
    {
      return MapCollections.retainAllHelper(this.a.b(), p0);
    }

    public final int size()
    {
      return this.a.a();
    }

    public final Object[] toArray()
    {
      return this.a.b(0);
    }

    public final <T> T[] toArray(T[] p0)
    {
      return (T[])this.a.a(p0, 0);
    }

}

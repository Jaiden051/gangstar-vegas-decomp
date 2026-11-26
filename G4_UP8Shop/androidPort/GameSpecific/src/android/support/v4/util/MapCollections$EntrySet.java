// Decompiled from classes.dex (SourceFile: MapCollections$EntrySet.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.util;

final class MapCollections$EntrySet<K, V> implements java.util.Set<java.util.Map.Entry<K, V>> {
    // Fields
    final android.support.v4.util.MapCollections a;

    // Methods
    MapCollections$EntrySet(android.support.v4.util.MapCollections p0)
    {
      super();
      this.a = p0;
    
    }

    private static boolean add$58840bfa()
    {
      throw new UnsupportedOperationException();
    }

    public final boolean add(java.util.Map.Entry<K, V> p0)
    {
      throw new UnsupportedOperationException();
    }

    public final boolean addAll(java.util.Collection<? extends java.util.Map.Entry<K, V>> p0)
    {
      int v2;
      java.util.Iterator v3;
      java.util.Map.Entry v4;
      v2 = this.a.a();
      v3 = p0.iterator();
      while ( v3.hasNext() )
      {
        v4 = (java.util.Map.Entry)v3.next();
        this.a.a(v4.getKey(), v4.getValue());
      }
      return v2 != this.a.a();
    }

    public final void clear()
    {
      this.a.c();
    }

    public final boolean contains(Object p0)
    {
      boolean v2;
      java.util.Map.Entry v4;
      int v5; // RETVAL
    
      v2 = false;
      if ( p0 instanceof java.util.Map.Entry )
      {
        v4 = (java.util.Map.Entry)p0;
        v5 = this.a.a(v4.getKey());
        if ( v5 >= 0 )
          return ContainerHelpers.equal(this.a.a(v5, 1), v4.getValue());
      }
      return v2;
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

    public final boolean equals(Object p0)
    {
      return MapCollections.equalsSetHelper((java.util.Set)this, p0);
    }

    public final int hashCode()
    {
      int v1;
      int v2;
      Object v3;
      Object v4;
      int v5;
      int v6;
      v1 = this.a.a() - 1;
      v2 = 0;
      while ( v1 >= 0 )
      {
        v3 = this.a.a(v1, 0);
        v4 = this.a.a(v1, 1);
        if ( v3 != null )
          v5 = v3.hashCode();
        else
          v5 = 0;
        if ( v4 != null )
          v6 = v4.hashCode();
        else
          v6 = 0;
        --v1;
        v2 += v6 ^ v5;
      }
      return v2;
    }

    public final boolean isEmpty()
    {
      return this.a.a() == 0;
    }

    public final java.util.Iterator<java.util.Map.Entry<K, V>> iterator()
    {
      return (java.util.Iterator)new android.support.v4.util.f(this.a);
    }

    public final boolean remove(Object p0)
    {
      throw new UnsupportedOperationException();
    }

    public final boolean removeAll(java.util.Collection<?> p0)
    {
      throw new UnsupportedOperationException();
    }

    public final boolean retainAll(java.util.Collection<?> p0)
    {
      throw new UnsupportedOperationException();
    }

    public final int size()
    {
      return this.a.a();
    }

    public final Object[] toArray()
    {
      throw new UnsupportedOperationException();
    }

    public final <T> T[] toArray(T[] p0)
    {
      throw new UnsupportedOperationException();
    }

}

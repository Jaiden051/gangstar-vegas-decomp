// Decompiled from classes.dex (SourceFile: MapCollections.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.util;

import java.lang.reflect.Array;
abstract class MapCollections<K, V> {
    // Fields
    android.support.v4.util.MapCollections$EntrySet b;
    android.support.v4.util.e c;
    android.support.v4.util.g d;

    // Methods
    MapCollections()
    {
      super();
    }

    public static <K, V> boolean containsAllHelper(java.util.Map<K, V> p0, java.util.Collection<?> p1)
    {
      java.util.Iterator v2;
      v2 = p1.iterator();
      while ( v2.hasNext() )
      {
        if ( !p0.containsKey(v2.next()) )
          return false;
      }
      return true;
    }

    public static <T> boolean equalsSetHelper(java.util.Set<T> p0, Object p1)
    {
      boolean v2;
      java.util.Set v4;
      v2 = true;
      if ( p0 == p1 )
        return v2;
      if ( !(p1 instanceof java.util.Set) )
        return false;
      v4 = (java.util.Set)p1;
      try
      {
        if ( p0.size() != v4.size() || !p0.containsAll(v4) )
          return false;
        return v2;
      }
      catch ( NullPointerException e )
      {
        return false;
      }
      catch ( ClassCastException e )
      {
        return false;
      }
    }

    public static <K, V> boolean removeAllHelper(java.util.Map<K, V> p0, java.util.Collection<?> p1)
    {
      int v2;
      java.util.Iterator i;
      v2 = p0.size();
      for ( i = p1.iterator(); i.hasNext(); p0.remove(i.next()) )
        ;
      return v2 != p0.size();
    }

    public static <K, V> boolean retainAllHelper(java.util.Map<K, V> p0, java.util.Collection<?> p1)
    {
      int v2;
      java.util.Iterator v3;
      v2 = p0.size();
      v3 = p0.keySet().iterator();
      while ( v3.hasNext() )
      {
        if ( !p1.contains(v3.next()) )
          v3.remove();
      }
      return v2 != p0.size();
    }

    protected abstract int a();

    protected abstract int a(java.lang.Object p0);

    protected abstract java.lang.Object a(int p0, int p1);

    protected abstract V a(int p0, V p1);

    protected abstract void a(int p0);

    protected abstract void a(K p0, V p1);

    public final <T> T[] a(T[] p0, int p1)
    {
      int v3;
      Object[] v4;
      int i;
      v3 = this.a();
      if ( p0.length >= v3 )
        v4 = p0;
      else
        v4 = (Object[])Array.newInstance(p0.getClass().getComponentType(), v3);
      for ( i = 0; i < v3; ++i )
        v4[i] = this.a(i, p1);
      if ( v4.length > v3 )
        v4[v3] = null;
      return (T[])v4;
    }

    protected abstract int b(java.lang.Object p0);

    protected abstract java.util.Map b();

    public final Object[] b(int p0)
    {
      int v2;
      Object[] v3;
      int i;
      v2 = this.a();
      v3 = new Object[v2];
      for ( i = 0; i < v2; ++i )
        v3[i] = this.a(i, p0);
      return v3;
    }

    protected abstract void c();

    public final java.util.Set<java.util.Map.Entry<K, V>> d()
    {
      if ( this.b == null )
        this.b = new android.support.v4.util.MapCollections$EntrySet(this);
      return (java.util.Set)this.b;
    }

    public final java.util.Set<K> e()
    {
      if ( this.c == null )
        this.c = new android.support.v4.util.e(this);
      return (java.util.Set)this.c;
    }

    public final java.util.Collection<V> f()
    {
      if ( this.d == null )
        this.d = new android.support.v4.util.g(this);
      return (java.util.Collection)this.d;
    }

}

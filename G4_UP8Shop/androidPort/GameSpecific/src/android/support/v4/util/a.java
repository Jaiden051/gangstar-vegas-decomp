// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.util;

public class a<K, V> extends android.support.v4.util.SimpleArrayMap<K, V> implements java.util.Map<K, V> {
    // Fields
    android.support.v4.util.MapCollections a;

    // Methods
    public a()
    {
      super();
    }

    private a(int p0)
    {
      super(p0);
    }

    private a(android.support.v4.util.SimpleArrayMap p0)
    {
      super(p0);
    }

    private boolean a(java.util.Collection<?> p0)
    {
      return MapCollections.containsAllHelper((java.util.Map)this, p0);
    }

    private android.support.v4.util.MapCollections<K, V> b()
    {
      if ( this.a == null )
        this.a = new android.support.v4.util.b(this);
      return this.a;
    }

    private boolean b(java.util.Collection<?> p0)
    {
      return MapCollections.removeAllHelper((java.util.Map)this, p0);
    }

    private boolean c(java.util.Collection<?> p0)
    {
      return MapCollections.retainAllHelper((java.util.Map)this, p0);
    }

    public java.util.Set<java.util.Map.Entry<K, V>> entrySet()
    {
      return this.b().d();
    }

    public java.util.Set<K> keySet()
    {
      return this.b().e();
    }

    public void putAll(java.util.Map<? extends K, ? extends V> p0)
    {
      java.util.Iterator v2;
      java.util.Map.Entry v3;
      this.a(this.h + p0.size());
      v2 = p0.entrySet().iterator();
      while ( v2.hasNext() )
      {
        v3 = (java.util.Map.Entry)v2.next();
        this.put((K)v3.getKey(), (V)v3.getValue());
      }
    }

    public java.util.Collection<V> values()
    {
      return this.b().f();
    }

}

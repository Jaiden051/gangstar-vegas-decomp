// Decompiled from classes.dex (SourceFile: LruCache.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.util;

public final class LruCache<K, V> {
    // Fields
    private final java.util.LinkedHashMap a;
    private int b;
    private int c;
    private int d;
    private int e;
    private int f;
    private int g;
    private int h;

    // Methods
    private LruCache(int p0)
    {
      super();
      if ( p0 <= 0 )
        throw new IllegalArgumentException("maxSize <= 0");
      this.c = p0;
      this.a = new java.util.LinkedHashMap(0, 0.75f, true);
    }

    private V a(K p0)
    {
      Object v2;
      if ( p0 == null )
        throw new NullPointerException("key == null");
      synchronized ( this )
      {
        v2 = this.a.get(p0);
        if ( v2 != null )
        {
          ++this.g;
        }
        else
        {
          ++this.h;
          return null;
        }
        return (V)v2;
      }
    }

    private V a(K p0, V p1)
    {
      Object v3;
      if ( p0 == null || p1 == null )
        throw new NullPointerException("key == null || value == null");
      synchronized ( this )
      {
        ++this.d;
        ++this.b;
        v3 = this.a.put(p0, p1);
        if ( v3 != null )
          --this.b;
      }
      this.a(this.c);
      return (V)v3;
    }

    private void a()
    {
      this.a(-1);
    }

    private void a(int p0)
    {
      java.util.Map.Entry v3;
      Object Key;
      while ( true )
      {
        synchronized ( this )
        {
          if ( this.b < 0 || this.a.isEmpty() && this.b != 0 )
            throw new IllegalStateException(this.getClass().getName() + ".sizeOf() is reporting inconsistent results!");
          if ( this.b > p0 && !this.a.isEmpty() )
          {
            v3 = (java.util.Map.Entry)this.a.entrySet().iterator().next();
            Key = v3.getKey();
            v3.getValue();
            this.a.remove(Key);
            --this.b;
            ++this.f;
            continue;
          }
          return;
        }
      }
    }

    private synchronized int b()
    {
      return this.b;
    }

    private int b(K p0, V p1)
    {
      return 1;
    }

    private V b(K p0)
    {
      Object v2;
      if ( p0 == null )
        throw new NullPointerException("key == null");
      synchronized ( this )
      {
        v2 = this.a.remove(p0);
        if ( v2 != null )
          --this.b;
        return (V)v2;
      }
    }

    private synchronized int c()
    {
      return this.c;
    }

    private static <V> V create$7713a341()
    {
      return null;
    }

    private synchronized int d()
    {
      return this.g;
    }

    private synchronized int e()
    {
      return this.h;
    }

    private static void entryRemoved$7ef8fcad()
    {
      ;
    }

    private synchronized int f()
    {
      return this.e;
    }

    private synchronized int g()
    {
      return this.d;
    }

    private synchronized int h()
    {
      return this.f;
    }

    private synchronized java.util.Map<K, V> i()
    {
      return new java.util.LinkedHashMap(this.a);
    }

    private static int sizeOf$2838e5a0()
    {
      return 1;
    }

    public final synchronized String toString()
    {
      int v1;
      int v2;
      Object[] v3;
    
      v1 = 0;
      v2 = this.g + this.h;
      if ( v2 != 0 )
        v1 = 100 * this.g / v2;
      v3 = new Object[4];
      v3[0] = Integer.valueOf(this.c);
      v3[1] = Integer.valueOf(this.g);
      v3[2] = Integer.valueOf(this.h);
      v3[3] = Integer.valueOf(v1);
      return String.format("LruCache[maxSize=%d,hits=%d,misses=%d,hitRate=%d%%]", v3);
    }

}

// Decompiled from classes.dex (SourceFile: hr.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class hr<K, V> {
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
    public hr(int p0)
    {
      super();
      if ( p0 <= 0 )
        throw new IllegalArgumentException("maxSize <= 0");
      this.c = p0;
      this.a = new java.util.LinkedHashMap(0, 0.75f, true);
    }

    private int c(K p0, V p1)
    {
      int result; // RETVAL
    
      result = this.a(p0, p1);
      if ( result < 0 )
        throw new IllegalStateException("Negative size: " + p0 + "=" + p1);
      return result;
    }

    private static <V> V create$7713a341()
    {
      return null;
    }

    protected int a(K p0, V p1)
    {
      return 1;
    }

    public final V a(K p0)
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

    public final void a()
    {
      this.a(-1);
    }

    public final void a(int p0)
    {
      java.util.Map.Entry v3;
      Object Key;
      Object Value;
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
            Value = v3.getValue();
            this.a.remove(Key);
            this.b -= this.c((K)Key, (V)Value);
            ++this.f;
            continue;
          }
          return;
        }
      }
    }

    protected void a(boolean p0, K p1, V p2, V p3)
    {
      ;
    }

    public final synchronized int b()
    {
      return this.b;
    }

    public final V b(K p0, V p1)
    {
      Object v3; // RETVAL
      Object v4;
      if ( p0 == null || p1 == null )
        throw new NullPointerException("key == null || value == null");
      synchronized ( this )
      {
        ++this.d;
        this.b += this.c(p0, p1);
        v3 = this.a.put(p0, p1);
        v4 = v3;
        if ( v3 != null )
          this.b -= this.c(p0, (V)v3);
      }
      this.a(this.c);
      return (V)v4;
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

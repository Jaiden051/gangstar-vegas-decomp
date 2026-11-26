// Decompiled from classes.dex (SourceFile: SimpleArrayMap.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.util;

public class SimpleArrayMap<K, V> {
    // Fields
    private static boolean a;
    static java.lang.Object[] b;
    static int c;
    static java.lang.Object[] d;
    static int e;
    private static final java.lang.String i = "ArrayMap";
    private static final int j = 4;
    private static int k;
    int[] f;
    java.lang.Object[] g;
    int h;

    // Methods
    public SimpleArrayMap()
    {
      super();
      this.f = ContainerHelpers.a;
      this.g = ContainerHelpers.c;
      this.h = 0;
    }

    public SimpleArrayMap(int p0)
    {
      super();
      if ( p0 != 0 )
      {
        this.d(p0);
      }
      else
      {
        this.f = ContainerHelpers.a;
        this.g = ContainerHelpers.c;
      }
      this.h = 0;
    }

    public SimpleArrayMap(android.support.v4.util.SimpleArrayMap p0)
    {
      this();
      int v2;
      int h;
      v2 = 0;
      if ( p0 != null )
      {
        h = p0.h;
        this.a(this.h + h);
        if ( this.h != 0 )
        {
          while ( v2 < h )
          {
            this.put((K)p0.e(v2), (V)p0.b(v2));
            ++v2;
          }
        }
        else if ( h > 0 )
        {
          System.arraycopy(p0.f, 0, this.f, 0, h);
          System.arraycopy(p0.g, 0, this.g, 0, 2 * h);
          this.h = h;
        }
      }
    
    }

    private void a(android.support.v4.util.SimpleArrayMap<? extends K, ? extends V> p0)
    {
      int v2;
      int h;
      v2 = 0;
      h = p0.h;
      this.a(this.h + h);
      if ( this.h != 0 )
      {
        while ( v2 < h )
        {
          this.put((K)p0.e(v2), (V)p0.b(v2));
          ++v2;
        }
      }
      else if ( h > 0 )
      {
        System.arraycopy(p0.f, 0, this.f, 0, h);
        System.arraycopy(p0.g, 0, this.g, 0, 2 * h);
        this.h = h;
      }
    }

    private void d(int p0)
    {
      Object v2 = null;
      Object[] v3 = null;
      Object[] v5 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( !(p0 == 8) ) { _pc = 1; continue _sm; }
            {
            v2 = android.support.v4.util.a.class;
            synchronized ( v2 )
            {
            if ( d != null )
            {
            v3 = d;
            this.g = v3;
            d = (Object[])v3[0];
            this.f = (int[])v3[1];
            v3[1] = null;
            v3[0] = null;
            --e;
            return;
            }
            { _pc = 2; continue _sm; }
            }
            }
          case 1:
            if ( p0 != 4 )
            { _pc = 2; continue _sm; }
            v2 = android.support.v4.util.a.class;
            com.gameloft.android.DecompRT.monitorEnter(v2);
            if ( !(b == null) ) { _pc = 3; continue _sm; }
            _pc = 2;
            continue _sm;
          case 2:
            this.f = new int[p0];
            this.g = new Object[(2 * p0)];
            return;
          case 3:
            v5 = b;
            this.g = v5;
            b = (Object[])v5[0];
            this.f = (int[])v5[1];
            v5[1] = null;
            v5[0] = null;
            --c;
            com.gameloft.android.DecompRT.monitorExit(v2);
            _pc = 4;
            continue _sm;
          case 4:
            return;
        }
      }
}

    private K e(int p0)
    {
      return (K)this.g[2 * p0];
    }

    private static void freeArrays(int[] p0, Object[] p1, int p2)
    {
      Object v3;
      int i;
      Object v6;
      int j;
      if ( p0.length == 8 )
      {
        v3 = android.support.v4.util.a.class;
        synchronized ( v3 )
        {
          if ( e < 10 )
          {
            p1[0] = d;
            p1[1] = p0;
            for ( i = 2 * p2 - 1; i >= 2; --i )
              p1[i] = null;
            d = p1;
            ++e;
          }
        }
      }
      else if ( p0.length == 4 )
      {
        v6 = android.support.v4.util.a.class;
        synchronized ( v6 )
        {
          if ( c < 10 )
          {
            p1[0] = b;
            p1[1] = p0;
            for ( j = 2 * p2 - 1; j >= 2; --j )
              p1[j] = null;
            b = p1;
            ++c;
          }
        }
      }
    }

    final int a()
    {
      int h;
      int j;
      int v4; // RETVAL
      int i;
      h = this.h;
      if ( h == 0 )
        return -1;
      v4 = ContainerHelpers.binarySearch(this.f, h, 0);
      j = v4;
      if ( v4 >= 0 && this.g[2 * v4] != null )
      {
        for ( i = v4 + 1; i < h && this.f[i] == 0; ++i )
        {
          if ( this.g[2 * i] == null )
            return i;
        }
        for ( j = v4 - 1; j >= 0 && this.f[j] == 0; --j )
        {
          if ( this.g[2 * j] == null )
            return j;
        }
        return ~i;
      }
      return j;
    }

    final int a(Object p0)
    {
      int v2;
      int v3;
      Object[] g;
      v2 = 1;
      v3 = 2 * this.h;
      g = this.g;
      if ( p0 != null )
      {
        while ( v2 < v3 )
        {
          if ( p0.equals(g[v2]) )
            return v2 >> 1;
          v2 += 2;
        }
      }
      else
      {
        while ( v2 < v3 )
        {
          if ( g[v2] == null )
            return v2 >> 1;
          v2 += 2;
        }
      }
      return -1;
    }

    final int a(Object p0, int p1)
    {
      int h;
      int v4;
      int v6; // RETVAL
      int i;
      h = this.h;
      if ( h == 0 )
        return -1;
      v6 = ContainerHelpers.binarySearch(this.f, h, p1);
      v4 = v6;
      if ( v6 >= 0 && !p0.equals(this.g[2 * v6]) )
      {
        for ( i = v4 + 1; i < h && this.f[i] == p1; ++i )
        {
          if ( p0.equals(this.g[2 * i]) )
            return i;
        }
        --v4;
        while ( v4 >= 0 && this.f[v4] == p1 )
        {
          if ( p0.equals(this.g[2 * v4]) )
            return v4;
          --v4;
        }
        return ~i;
      }
      return v4;
    }

    public final V a(int p0, V p1)
    {
      int v3;
      v3 = 2 * p0 + 1;
      this.g[v3] = p1;
      return (V)this.g[v3];
    }

    public final void a(int p0)
    {
      int[] f;
      Object[] g;
      if ( this.f.length < p0 )
      {
        f = this.f;
        g = this.g;
        this.d(p0);
        if ( this.h > 0 )
        {
          System.arraycopy(f, 0, this.f, 0, this.h);
          System.arraycopy(g, 0, this.g, 0, 2 * this.h);
        }
        freeArrays(f, g, this.h);
      }
    }

    public final V b(int p0)
    {
      return (V)this.g[2 * p0 + 1];
    }

    public final V c(int p0)
    {
      int v2;
      Object v3;
      int[] f;
      Object[] g;
      v2 = 8;
      v3 = this.g[2 * p0 + 1];
      if ( this.h > 1 )
      {
        if ( this.f.length <= 8 || this.h >= this.f.length / 3 )
        {
          if ( p0 < --this.h )
          {
            System.arraycopy(this.f, p0 + 1, this.f, p0, this.h - p0);
            System.arraycopy(this.g, 2 * (p0 + 1), this.g, 2 * p0, 2 * (this.h - p0));
          }
          this.g[2 * this.h] = null;
          this.g[2 * this.h + 1] = null;
        }
        else
        {
          if ( this.h > 8 )
            v2 = this.h + (this.h >> 1);
          f = this.f;
          g = this.g;
          this.d(v2);
          --this.h;
          if ( p0 > 0 )
          {
            System.arraycopy(f, 0, this.f, 0, p0);
            System.arraycopy(g, 0, this.g, 0, 2 * p0);
          }
          if ( p0 < this.h )
          {
            System.arraycopy(f, p0 + 1, this.f, p0, this.h - p0);
            System.arraycopy(g, 2 * (p0 + 1), this.g, 2 * p0, 2 * (this.h - p0));
          }
        }
      }
      else
      {
        freeArrays(this.f, this.g, this.h);
        this.f = ContainerHelpers.a;
        this.g = ContainerHelpers.c;
        this.h = 0;
      }
      return (V)v3;
    }

    public void clear()
    {
      if ( this.h != 0 )
      {
        freeArrays(this.f, this.g, this.h);
        this.f = ContainerHelpers.a;
        this.g = ContainerHelpers.c;
        this.h = 0;
      }
    }

    public boolean containsKey(Object p0)
    {
      if ( p0 != null )
        return this.a(p0, p0.hashCode()) >= 0;
      else
        return this.a() >= 0;
    }

    public boolean containsValue(Object p0)
    {
      return this.a(p0) >= 0;
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      java.util.Map v4;
      int v5;
      Object v6;
      Object v7;
      Object v8; // RETVAL
    
      v2 = true;
      if ( this == p0 )
        return v2;
      if ( !(p0 instanceof java.util.Map) )
        return false;
      v4 = (java.util.Map)p0;
      if ( this.size() != v4.size() )
        return false;
      v5 = 0;
      try
      {
        while ( true )
        {
        if ( true )
        {
          if ( v5 >= this.h )
            return v2;
          v6 = this.e(v5);
          v7 = this.b(v5);
          v8 = v4.get(v6);
          if ( v7 != null )
          {
            if ( !v7.equals(v8) )
              return false;
          }
          else if ( v8 != null || !v4.containsKey(v6) )
          {
            return false;
          }
          ++v5;
          continue;
        }
        break;
      }
      }
      catch ( Throwable _ehEx )
      {
        if ( (_ehEx instanceof NullPointerException) )
        {
return false;
        }
        if ( (_ehEx instanceof ClassCastException) )
        {
return false;
        }
      if ( _ehEx instanceof Error ) throw (Error)_ehEx;
      if ( _ehEx instanceof RuntimeException ) throw (RuntimeException)_ehEx;
}
      return v2;
    }

    public V get(Object p0)
    {
      int v2;
      if ( p0 != null )
        v2 = this.a(p0, p0.hashCode());
      else
        v2 = this.a();
      if ( v2 < 0 )
        return null;
      else
        return (V)this.g[2 * v2 + 1];
    }

    public int hashCode()
    {
      int[] f;
      Object[] g;
      int h;
      int v4;
      int v5;
      int v6;
      Object v7;
      int v8;
      int v9;
      f = this.f;
      g = this.g;
      h = this.h;
      v4 = 1;
      v5 = 0;
      v6 = 0;
      while ( v5 < h )
      {
        v7 = g[v4];
        v8 = f[v5];
        if ( v7 != null )
          v9 = v7.hashCode();
        else
          v9 = 0;
        v6 += v9 ^ v8;
        ++v5;
        v4 += 2;
      }
      return v6;
    }

    public boolean isEmpty()
    {
      return this.h <= 0;
    }

    public V put(K p0, V p1)
    {
      int v3;
      int v4;
      int v5;
      int v6;
      Object v7;
      int v9;
      int[] f;
      Object[] g;
      v3 = 8;
      if ( p0 != null )
      {
        v5 = p0.hashCode();
        v4 = this.a(p0, v5);
      }
      else
      {
        v4 = this.a();
        v5 = 0;
      }
      if ( v4 < 0 )
      {
        v9 = ~v4;
        if ( this.h >= this.f.length )
        {
          if ( this.h < 8 )
          {
            if ( this.h < 4 )
              v3 = 4;
          }
          else
          {
            v3 = this.h + (this.h >> 1);
          }
          f = this.f;
          g = this.g;
          this.d(v3);
          if ( f.length > 0 )
          {
            System.arraycopy(f, 0, this.f, 0, f.length);
            System.arraycopy(g, 0, this.g, 0, g.length);
          }
          freeArrays(f, g, this.h);
        }
        if ( v9 < this.h )
        {
          System.arraycopy(this.f, v9, this.f, v9 + 1, this.h - v9);
          System.arraycopy(this.g, 2 * v9, this.g, 2 * (v9 + 1), 2 * (this.h - v9));
        }
        this.f[v9] = v5;
        this.g[2 * v9] = p0;
        this.g[2 * v9 + 1] = p1;
        ++this.h;
        return null;
      }
      else
      {
        v6 = 2 * v4 + 1;
        v7 = this.g[v6];
        this.g[v6] = p1;
      }
      return (V)v7;
    }

    public V remove(Object p0)
    {
      int v2;
      if ( p0 != null )
        v2 = this.a(p0, p0.hashCode());
      else
        v2 = this.a();
      if ( v2 < 0 )
        return null;
      else
        return this.c(v2);
    }

    public int size()
    {
      return this.h;
    }

    public String toString()
    {
      StringBuilder v3;
      int i;
      Object v5; // RETVAL
      Object v6; // RETVAL
    
      if ( this.isEmpty() )
        return "{}";
      v3 = new StringBuilder(28 * this.h);
      v3.append('{');
      for ( i = 0; i < this.h; ++i )
      {
        if ( i > 0 )
          v3.append(", ");
        v5 = this.e(i);
        if ( v5 == this )
          v3.append("(this Map)");
        else
          v3.append(v5);
        v3.append('=');
        v6 = this.b(i);
        if ( v6 == this )
          v3.append("(this Map)");
        else
          v3.append(v6);
      }
      v3.append('}');
      return v3.toString();
    }

}

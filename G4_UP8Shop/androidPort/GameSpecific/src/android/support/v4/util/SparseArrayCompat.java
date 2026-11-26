// Decompiled from classes.dex (SourceFile: SparseArrayCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.util;

public class SparseArrayCompat<E> implements java.lang.Cloneable {
    // Fields
    private static final java.lang.Object a;
    private boolean b;
    private int[] c;
    private java.lang.Object[] d;
    private int e;

    // Methods
    static
    {
      a = new Object();
    }

    public SparseArrayCompat()
    {
      this(10);
    }

    private SparseArrayCompat(int p0)
    {
      super();
      int v2; // RETVAL
      this.b = false;
      v2 = ContainerHelpers.idealIntArraySize(10);
      this.c = new int[v2];
      this.d = new Object[v2];
      this.e = 0;
    
    }

    private int a(E p0)
    {
      int i;
      if ( this.b )
        this.d();
      for ( i = 0; i < this.e; ++i )
      {
        if ( this.d[i] == p0 )
          return i;
      }
      return -1;
    }

    private void a(int p0, int p1)
    {
      int v3; // RETVAL
    
      v3 = Math.min(this.e, p0 + p1);
      while ( p0 < v3 )
        this.c(p0++);
    }

    private E b(int p0, E p1)
    {
      int v3; // RETVAL
    
      v3 = ContainerHelpers.binarySearch(this.c, this.e, p0);
      if ( v3 < 0 || this.d[v3] == a )
        return null;
      else
        return (E)this.d[v3];
    }

    private android.support.v4.util.SparseArrayCompat<E> c()
    {
      android.support.v4.util.SparseArrayCompat v1;
      try
      {
        v1 = (android.support.v4.util.SparseArrayCompat)super.clone();
        v1.c = (int[])this.c.clone();
          v1.d = (Object[])this.d.clone();
          return v1;
      }
      catch ( CloneNotSupportedException e )
      {
        return null;
      }
    }

    private void c(int p0, E p1)
    {
      if ( this.b )
        this.d();
      this.d[p0] = p1;
    }

    private void d()
    {
      int e;
      int[] c;
      Object[] d;
      int v4;
      int v5;
      Object v6;
      e = this.e;
      c = this.c;
      d = this.d;
      v4 = 0;
      v5 = 0;
      while ( v4 < e )
      {
        v6 = d[v4];
        if ( v6 != a )
        {
          if ( v4 != v5 )
          {
            c[v5] = c[v4];
            d[v5] = v6;
            d[v4] = null;
          }
          ++v5;
        }
        ++v4;
      }
      this.b = false;
      this.e = v5;
    }

    private void d(int p0, E p1)
    {
      int e;
      int v4; // RETVAL
      int[] v5;
      Object[] v6;
      if ( this.e != 0 && p0 <= this.c[this.e - 1] )
      {
        this.a(p0, p1);
      }
      else
      {
        if ( this.b && this.e >= this.c.length )
          this.d();
        e = this.e;
        if ( e >= this.c.length )
        {
          v4 = ContainerHelpers.idealIntArraySize(e + 1);
          v5 = new int[v4];
          v6 = new Object[v4];
          System.arraycopy(this.c, 0, v5, 0, this.c.length);
          System.arraycopy(this.d, 0, v6, 0, this.d.length);
          this.c = v5;
          this.d = v6;
        }
        this.c[e] = p0;
        this.d[e] = p1;
        this.e = e + 1;
      }
    }

    private void g(int p0)
    {
      int v2; // RETVAL
    
      v2 = ContainerHelpers.binarySearch(this.c, this.e, p0);
      if ( v2 >= 0 && this.d[v2] != a )
      {
        this.d[v2] = a;
        this.b = true;
      }
    }

    public final int a()
    {
      if ( this.b )
        this.d();
      return this.e;
    }

    public final E a(int p0)
    {
      int v2; // RETVAL
    
      v2 = ContainerHelpers.binarySearch(this.c, this.e, p0);
      if ( v2 < 0 || this.d[v2] == a )
        return null;
      else
        return (E)this.d[v2];
    }

    public final void a(int p0, E p1)
    {
      int v3; // RETVAL
      int v4;
      int v5; // RETVAL
      int[] v6;
      Object[] v7;
      v3 = ContainerHelpers.binarySearch(this.c, this.e, p0);
      if ( v3 < 0 )
      {
        v4 = ~v3;
        if ( ~v3 < this.e && this.d[v4] == a )
        {
          this.c[v4] = p0;
          this.d[v4] = p1;
        }
        else
        {
          if ( this.b && this.e >= this.c.length )
          {
            this.d();
            v4 = ~ContainerHelpers.binarySearch(this.c, this.e, p0);
          }
          if ( this.e >= this.c.length )
          {
            v5 = ContainerHelpers.idealIntArraySize(this.e + 1);
            v6 = new int[v5];
            v7 = new Object[v5];
            System.arraycopy(this.c, 0, v6, 0, this.c.length);
            System.arraycopy(this.d, 0, v7, 0, this.d.length);
            this.c = v6;
            this.d = v7;
          }
          if ( this.e != v4 )
          {
            System.arraycopy(this.c, v4, this.c, v4 + 1, this.e - v4);
            System.arraycopy(this.d, v4, this.d, v4 + 1, this.e - v4);
          }
          this.c[v4] = p0;
          this.d[v4] = p1;
          ++this.e;
        }
      }
      else
      {
        this.d[v3] = p1;
      }
    }

    public final void b()
    {
      int e;
      Object[] d;
      int i;
      e = this.e;
      d = this.d;
      for ( i = 0; i < e; ++i )
        d[i] = null;
      this.e = 0;
      this.b = false;
    }

    public final void b(int p0)
    {
      int v2; // RETVAL
    
      v2 = ContainerHelpers.binarySearch(this.c, this.e, p0);
      if ( v2 >= 0 && this.d[v2] != a )
      {
        this.d[v2] = a;
        this.b = true;
      }
    }

    public final void c(int p0)
    {
      if ( this.d[p0] != a )
      {
        this.d[p0] = a;
        this.b = true;
      }
    }

    /* synthetic */ public Object clone()
    {
      return this.c();
    }

    public final int d(int p0)
    {
      if ( this.b )
        this.d();
      return this.c[p0];
    }

    public final E e(int p0)
    {
      if ( this.b )
        this.d();
      return (E)this.d[p0];
    }

    public final int f(int p0)
    {
      if ( this.b )
        this.d();
      return ContainerHelpers.binarySearch(this.c, this.e, p0);
    }

    public String toString()
    {
      StringBuilder v3;
      int i;
      Object v5; // RETVAL
    
      if ( this.a() <= 0 )
        return "{}";
      v3 = new StringBuilder(28 * this.e);
      v3.append('{');
      for ( i = 0; i < this.e; ++i )
      {
        if ( i > 0 )
          v3.append(", ");
        v3.append(this.d(i));
        v3.append('=');
        v5 = this.e(i);
        if ( v5 == this )
          v3.append("(this Map)");
        else
          v3.append(v5);
      }
      v3.append('}');
      return v3.toString();
    }

}

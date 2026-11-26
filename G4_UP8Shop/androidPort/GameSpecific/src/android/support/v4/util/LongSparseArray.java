// Decompiled from classes.dex (SourceFile: LongSparseArray.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.util;

public class LongSparseArray<E> implements java.lang.Cloneable {
    // Fields
    private static final java.lang.Object a;
    private boolean b;
    private long[] c;
    private java.lang.Object[] d;
    private int e;

    // Methods
    static
    {
      a = new Object();
    }

    public LongSparseArray()
    {
      this(10);
    }

    private LongSparseArray(int p0)
    {
      super();
      int v2; // RETVAL
      this.b = false;
      v2 = ContainerHelpers.idealLongArraySize(10);
      this.c = new long[v2];
      this.d = new Object[v2];
      this.e = 0;
    
    }

    private int a(E p0)
    {
      int i;
      if ( this.b )
        this.b();
      for ( i = 0; i < this.e; ++i )
      {
        if ( this.d[i] == p0 )
          return i;
      }
      return -1;
    }

    private android.support.v4.util.LongSparseArray<E> a()
    {
      android.support.v4.util.LongSparseArray v1;
      try
      {
        v1 = (android.support.v4.util.LongSparseArray)super.clone();
        v1.c = (long[])this.c.clone();
        v1.d = (Object[])this.d.clone();
        return v1;
      }
      catch ( CloneNotSupportedException e )
      {
        return null;
      }
    }

    private E a(long p0)
    {
      int v2; // RETVAL
    
      v2 = ContainerHelpers.binarySearch(this.c, this.e, p0);
      if ( v2 < 0 || this.d[v2] == a )
        return null;
      else
        return (E)this.d[v2];
    }

    private E a(long p0, E p2)
    {
      int v3; // RETVAL
    
      v3 = ContainerHelpers.binarySearch(this.c, this.e, p0);
      if ( v3 < 0 || this.d[v3] == a )
        return null;
      else
        return (E)this.d[v3];
    }

    private void a(int p0)
    {
      if ( this.d[p0] != a )
      {
        this.d[p0] = a;
        this.b = true;
      }
    }

    private void a(int p0, E p1)
    {
      if ( this.b )
        this.b();
      this.d[p0] = p1;
    }

    private long b(int p0)
    {
      if ( this.b )
        this.b();
      return this.c[p0];
    }

    private void b()
    {
      int e;
      long[] c;
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

    private void b(long p0)
    {
      int v2; // RETVAL
    
      v2 = ContainerHelpers.binarySearch(this.c, this.e, p0);
      if ( v2 >= 0 && this.d[v2] != a )
      {
        this.d[v2] = a;
        this.b = true;
      }
    }

    private void b(long p0, E p2)
    {
      int v3; // RETVAL
      int v4;
      int v5; // RETVAL
      long[] v6;
      Object[] v7;
      v3 = ContainerHelpers.binarySearch(this.c, this.e, p0);
      if ( v3 < 0 )
      {
        v4 = ~v3;
        if ( ~v3 < this.e && this.d[v4] == a )
        {
          this.c[v4] = p0;
          this.d[v4] = p2;
        }
        else
        {
          if ( this.b && this.e >= this.c.length )
          {
            this.b();
            v4 = ~ContainerHelpers.binarySearch(this.c, this.e, p0);
          }
          if ( this.e >= this.c.length )
          {
            v5 = ContainerHelpers.idealLongArraySize(this.e + 1);
            v6 = new long[v5];
            v7 = new Object[v5];
            System.arraycopy(this.c, 0, v6, 0, this.c.length);
            System.arraycopy(this.d, 0, v7, 0, this.d.length);
            this.c = (long[])v6;
            this.d = v7;
          }
          if ( this.e != v4 )
          {
            System.arraycopy(this.c, v4, this.c, v4 + 1, this.e - v4);
            System.arraycopy(this.d, v4, this.d, v4 + 1, this.e - v4);
          }
          this.c[v4] = p0;
          this.d[v4] = p2;
          ++this.e;
        }
      }
      else
      {
        this.d[v3] = p2;
      }
    }

    private int c()
    {
      if ( this.b )
        this.b();
      return this.e;
    }

    private E c(int p0)
    {
      if ( this.b )
        this.b();
      return (E)this.d[p0];
    }

    private void c(long p0)
    {
      int v2; // RETVAL
    
      v2 = ContainerHelpers.binarySearch(this.c, this.e, p0);
      if ( v2 >= 0 && this.d[v2] != a )
      {
        this.d[v2] = a;
        this.b = true;
      }
    }

    private void c(long p0, E p2)
    {
      int v3; // RETVAL
      int v4;
      int v5; // RETVAL
      long[] v6;
      Object[] v7;
      int e;
      int v9; // RETVAL
      long[] v10;
      Object[] v11;
      if ( this.e != 0 && p0 <= this.c[this.e - 1] )
      {
        v3 = ContainerHelpers.binarySearch(this.c, this.e, p0);
        if ( v3 < 0 )
        {
          v4 = ~v3;
          if ( ~v3 < this.e && this.d[v4] == a )
          {
            this.c[v4] = p0;
            this.d[v4] = p2;
          }
          else
          {
            if ( this.b && this.e >= this.c.length )
            {
              this.b();
              v4 = ~ContainerHelpers.binarySearch(this.c, this.e, p0);
            }
            if ( this.e >= this.c.length )
            {
              v5 = ContainerHelpers.idealLongArraySize(this.e + 1);
              v6 = new long[v5];
              v7 = new Object[v5];
              System.arraycopy(this.c, 0, v6, 0, this.c.length);
              System.arraycopy(this.d, 0, v7, 0, this.d.length);
              this.c = (long[])v6;
              this.d = v7;
            }
            if ( this.e != v4 )
            {
              System.arraycopy(this.c, v4, this.c, v4 + 1, this.e - v4);
              System.arraycopy(this.d, v4, this.d, v4 + 1, this.e - v4);
            }
            this.c[v4] = p0;
            this.d[v4] = p2;
            ++this.e;
          }
        }
        else
        {
          this.d[v3] = p2;
        }
      }
      else
      {
        if ( this.b && this.e >= this.c.length )
          this.b();
        e = this.e;
        if ( e >= this.c.length )
        {
          v9 = ContainerHelpers.idealLongArraySize(e + 1);
          v10 = new long[v9];
          v11 = new Object[v9];
          System.arraycopy(this.c, 0, v10, 0, this.c.length);
          System.arraycopy(this.d, 0, v11, 0, this.d.length);
          this.c = (long[])v10;
          this.d = v11;
        }
        this.c[e] = p0;
        this.d[e] = p2;
        this.e = e + 1;
      }
    }

    private int d(long p0)
    {
      if ( this.b )
        this.b();
      return ContainerHelpers.binarySearch(this.c, this.e, p0);
    }

    private void d()
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

    /* synthetic */ public Object clone()
    {
      return this.a();
    }

    public String toString()
    {
      StringBuilder v3;
      int i;
      Object v5; // RETVAL
    
      if ( this.b )
        this.b();
      if ( this.e <= 0 )
        return "{}";
      v3 = new StringBuilder(28 * this.e);
      v3.append('{');
      for ( i = 0; i < this.e; ++i )
      {
        if ( i > 0 )
          v3.append(", ");
        v3.append(this.b(i));
        v3.append('=');
        v5 = this.c(i);
        if ( v5 == this )
          v3.append("(this Map)");
        else
          v3.append(v5);
      }
      v3.append('}');
      return v3.toString();
    }

}

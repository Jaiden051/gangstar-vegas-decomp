// Decompiled from classes.dex (SourceFile: g.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.data;

public abstract class g<T> extends com.google.android.gms.common.data.DataBuffer<T> {
    // Fields
    private boolean b;
    private java.util.ArrayList c;

    // Methods
    protected g(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
      this.b = false;
    }

    private int a(int p0)
    {
      if ( p0 < 0 || p0 >= this.c.size() )
        throw new IllegalArgumentException("Position " + p0 + " is out of bounds for this buffer");
      return ((Integer)this.c.get(p0)).intValue();
    }

    private void a()
    {
      int v1;
      String v2;
      String v3;
      int i;
      String v5;
      synchronized ( this )
      {
        if ( !this.b )
        {
          v1 = this.a.g();
          this.c = new java.util.ArrayList();
          if ( v1 > 0 )
          {
            this.c.add(Integer.valueOf(0));
            v2 = this.f();
            v3 = this.a.c(v2, 0, this.a.a(0));
            for ( i = 1; i < v1; ++i )
            {
              v5 = this.a.c(v2, i, this.a.a(i));
              if ( v5.equals(v3) )
                v5 = v3;
              else
                this.c.add(Integer.valueOf(i));
              v3 = v5;
            }
          }
          this.b = true;
        }
      }
    }

    private int c(int p0)
    {
      int v2;
      if ( p0 < 0 || p0 == this.c.size() )
        return 0;
      if ( p0 == this.c.size() - 1 )
        v2 = this.a.g() - ((Integer)this.c.get(p0)).intValue();
      else
        v2 = ((Integer)this.c.get(p0 + 1)).intValue() - ((Integer)this.c.get(p0)).intValue();
      if ( v2 == 1 )
        this.a.a(this.a(p0));
      return v2;
    }

    private static String eW()
    {
      return null;
    }

    protected abstract java.lang.Object a(int p0, int p1);

    public final int b()
    {
      this.a();
      return this.c.size();
    }

    public final T b(int p0)
    {
      int v2;
      int v3;
      this.a();
      v2 = this.a(p0);
      if ( p0 < 0 || p0 == this.c.size() )
      {
        v3 = 0;
      }
      else
      {
        if ( p0 == this.c.size() - 1 )
          v3 = this.a.g() - ((Integer)this.c.get(p0)).intValue();
        else
          v3 = ((Integer)this.c.get(p0 + 1)).intValue() - ((Integer)this.c.get(p0)).intValue();
        if ( v3 == 1 )
          this.a.a(this.a(p0));
      }
      return (T)this.a(v2, v3);
    }

    protected abstract java.lang.String f();

}

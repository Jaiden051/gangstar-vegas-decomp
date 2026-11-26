// Decompiled from classes.dex (SourceFile: mc.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import java.lang.reflect.Array;
public class mc<M extends com.google.android.gms.internal.mb<M>, T> {
    // Fields
    protected final int a;
    protected final java.lang.Class b;
    protected final int c;
    protected final boolean d;

    // Methods
    private mc(int p0, Class<T> p1, int p2, boolean p3)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = false;
    }

    public static <M extends com.google.android.gms.internal.mb<M>, T extends com.google.android.gms.internal.mf> com.google.android.gms.internal.mc<M, T> a(
            int p0,
            Class<T> p1,
            int p2)
    {
      return new com.google.android.gms.internal.mc(p0, p1, p2, false);
    }

    private Object a(com.google.android.gms.internal.lz p0)
 {
      Class ComponentType; // RETVAL
      Class b;
      com.google.android.gms.internal.mf v5;
      if ( this.d )
      {
        ComponentType = this.b.getComponentType();
        b = ComponentType;
      }
      else
      {
        b = this.b;
      }
      try
      {
        switch ( this.a )
        {
          case 10:
            v5 = (com.google.android.gms.internal.mf)b.newInstance();
            p0.a(v5, mi.eO(this.c));
            break;
          case 11:
            v5 = (com.google.android.gms.internal.mf)b.newInstance();
            p0.a(v5);
            break;
          default:
            throw new IllegalArgumentException("Unknown type " + this.a);
        }
        return v5;
      }
      catch ( InstantiationException v4 )
      {
        throw new IllegalArgumentException("Error creating instance of class " + b, v4);
      }
      catch ( IllegalAccessException v7 )
      {
        throw new IllegalArgumentException("Error creating instance of class " + b, v7);
      }
      catch ( java.io.IOException v8 )
      {
        throw new IllegalArgumentException("Error reading extension field", v8);
      }
    }

    private void a(com.google.android.gms.internal.mh p0, java.util.List<Object> p1)
    {
      p1.add(this.a(lz.p(p0.b)));
    }

    private boolean a(int p0)
 {
      return p0 == this.c;
    }

    final T a(java.util.List<com.google.android.gms.internal.mh> p0)
 {
      int v2;
      Object v3;
      java.util.List v5;
      int i;
      com.google.android.gms.internal.mh v7;
      int v8;
      int v9;
      com.google.android.gms.internal.mh j;
      com.google.android.gms.internal.mh v11;
      v2 = 0;
      if ( p0 == null )
        return null;
      if ( this.d )
      {
        v5 = new java.util.ArrayList();
        for ( i = 0; i < p0.size(); ++i )
        {
          v7 = (com.google.android.gms.internal.mh)p0.get(i);
          if ( this.a(v7.a) && v7.b.length != 0 )
            v5.add(this.a(lz.p(v7.b)));
        }
        v8 = v5.size();
        if ( v8 != 0 )
        {
          v3 = this.b.cast(Array.newInstance(this.b.getComponentType(), v8));
          while ( v2 < v8 )
          {
            Array.set(v3, v2, v5.get(v2));
            ++v2;
          }
        }
        else
        {
          return null;
        }
      }
      else
      {
        v9 = p0.size() - 1;
        for ( j = null; j == null && v9 >= 0; j = v11 )
        {
          v11 = (com.google.android.gms.internal.mh)p0.get(v9);
          if ( !this.a(v11.a) || v11.b.length == 0 )
            v11 = null;
          --v9;
        }
        if ( j != null )
          return (T)this.b.cast(this.a(lz.p(j.b)));
        else
          return null;
      }
      return (T)v3;
    }

}

// Decompiled from classes.dex (SourceFile: com.google.android.gms.internal.Decomp_if.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
public class Decomp_if extends com.google.android.gms.internal.hz implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.ig CREATOR;
    private final int a;
    private final android.os.Parcel b;
    private final int c;
    private final com.google.android.gms.internal.ic d;
    private final java.lang.String e;
    private int f;
    private int g;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.ig();
    }

    Decomp_if(int p0, android.os.Parcel p1, com.google.android.gms.internal.ic p2)
    {
      super();
      this.a = p0;
      this.b = (android.os.Parcel)hn.f(p1);
      this.c = 2;
      this.d = p2;
      if ( this.d != null )
        this.e = this.d.e();
      else
        this.e = null;
      this.f = 2;
    }

    private Decomp_if(
            com.google.android.gms.common.internal.safeparcel.SafeParcelable p0,
            com.google.android.gms.internal.ic p1,
            String p2)
    {
      super();
      this.a = 1;
      this.b = Parcel.obtain();
      p0.writeToParcel(this.b, 0);
      this.c = 1;
      this.d = (com.google.android.gms.internal.ic)hn.f(p1);
      this.e = (String)hn.f(p2);
      this.f = 2;
    }

    public static <T extends com.google.android.gms.internal.hz & com.google.android.gms.common.internal.safeparcel.SafeParcelable> com.google.android.gms.internal.Decomp_if a(
            T p0)
    {
      return new com.google.android.gms.internal.Decomp_if((com.google.android.gms.common.internal.safeparcel.SafeParcelable)p0, b(p0), p0.getClass().getCanonicalName());
    }

    private static void a(com.google.android.gms.internal.ic p0, com.google.android.gms.internal.hz p1)
    {
      Class Class;
      java.util.HashMap v3;
      java.util.Iterator v4;
      com.google.android.gms.internal.hz$a v5;
      Class v6; // RETVAL
    
      Class = p1.getClass();
      if ( !p0.a(Class) )
      {
        v3 = p1.a();
        p0.a(Class, p1.a());
        v4 = v3.keySet().iterator();
        while ( v4.hasNext() )
        {
          v5 = (com.google.android.gms.internal.hz$a)v3.get((String)v4.next());
          v6 = v5.i();
          if ( v6 != null )
          {
            try
            {
              com.google.android.gms.internal.Decomp_if.a(p0, (com.google.android.gms.internal.hz)v6.newInstance());
            }
            catch ( InstantiationException v7 )
            {
              throw new IllegalStateException("Could not instantiate an object of type " + v5.i().getCanonicalName(), v7);
            }
            catch ( IllegalAccessException v8 )
            {
              throw new IllegalStateException("Could not access object of type " + v5.i().getCanonicalName(), v8);
            }
          }
        }
      }
    }

    private static void a(StringBuilder p0, int p1, Object p2)
    {
      switch ( p1 )
      {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
          p0.append(p2);
          break;
        case 7:
          p0.append("\"").append(io.aK(p2.toString())).append("\"");
          break;
        case 8:
          p0.append("\"").append(ii.d((byte[])p2)).append("\"");
          break;
        case 9:
          p0.append("\"").append(ii.e((byte[])p2));
          p0.append("\"");
          break;
        case 10:
          ip.a(p0, (java.util.HashMap)p2);
          break;
        case 11:
          throw new IllegalArgumentException("Method does not accept concrete type.");
        default:
          throw new IllegalArgumentException("Unknown type = " + p1);
      }
    }

    private void a(StringBuilder p0, com.google.android.gms.internal.hz$a<?, ?> p1, android.os.Parcel p2, int p3)
    {
      switch ( p1.e() )
      {
        case 0:
          this.a(p0, p1, hz.a(p1, Integer.valueOf(com.google.android.gms.common.internal.safeparcel.a.g(p2, p3))));
          break;
        case 1:
          this.a(p0, p1, hz.a(p1, com.google.android.gms.common.internal.safeparcel.a.k(p2, p3)));
          break;
        case 2:
          this.a(p0, p1, hz.a(p1, Long.valueOf(com.google.android.gms.common.internal.safeparcel.a.i(p2, p3))));
          break;
        case 3:
          this.a(p0, p1, hz.a(p1, Float.valueOf(com.google.android.gms.common.internal.safeparcel.a.l(p2, p3))));
          break;
        case 4:
          this.a(p0, p1, hz.a(p1, Double.valueOf(com.google.android.gms.common.internal.safeparcel.a.m(p2, p3))));
          break;
        case 5:
          this.a(p0, p1, hz.a(p1, com.google.android.gms.common.internal.safeparcel.a.n(p2, p3)));
          break;
        case 6:
          this.a(p0, p1, hz.a(p1, Boolean.valueOf(com.google.android.gms.common.internal.safeparcel.a.c(p2, p3))));
          break;
        case 7:
          this.a(p0, p1, hz.a(p1, com.google.android.gms.common.internal.safeparcel.a.o(p2, p3)));
          break;
        case 8:
        case 9:
          this.a(p0, p1, hz.a(p1, com.google.android.gms.common.internal.safeparcel.a.r(p2, p3)));
          break;
        case 10:
          this.a(p0, p1, hz.a(p1, d(com.google.android.gms.common.internal.safeparcel.a.q(p2, p3))));
          break;
        case 11:
          throw new IllegalArgumentException("Method does not accept concrete type.");
        default:
          throw new IllegalArgumentException("Unknown field out type = " + p1.e());
      }
    }

    private void a(StringBuilder p0, com.google.android.gms.internal.hz$a<?, ?> p1, Object p2)
    {
      java.util.ArrayList v4;
      int v5;
      int i;
      if ( p1.d() )
      {
        v4 = (java.util.ArrayList)p2;
        p0.append("[");
        v5 = v4.size();
        for ( i = 0; i < v5; ++i )
        {
          if ( i != 0 )
            p0.append(",");
          a(p0, p1.c(), v4.get(i));
        }
        p0.append("]");
      }
      else
      {
        a(p0, p1.c(), p2);
      }
    }

    private void a(StringBuilder p0, com.google.android.gms.internal.hz$a<?, ?> p1, java.util.ArrayList<?> p2)
    {
      int v4;
      int i;
      p0.append("[");
      v4 = p2.size();
      for ( i = 0; i < v4; ++i )
      {
        if ( i != 0 )
          p0.append(",");
        a(p0, p1.c(), p2.get(i));
      }
      p0.append("]");
    }

    private void a(
            StringBuilder p0,
            String p1,
            com.google.android.gms.internal.hz$a<?, ?> p2,
            android.os.Parcel p3,
            int p4)
    {
      p0.append("\"").append(p1).append("\":");
      if ( p2.k() )
      {
        switch ( p2.e() )
        {
          case 0:
            this.a(p0, p2, hz.a(p2, Integer.valueOf(com.google.android.gms.common.internal.safeparcel.a.g(p3, p4))));
            break;
          case 1:
            this.a(p0, p2, hz.a(p2, com.google.android.gms.common.internal.safeparcel.a.k(p3, p4)));
            break;
          case 2:
            this.a(p0, p2, hz.a(p2, Long.valueOf(com.google.android.gms.common.internal.safeparcel.a.i(p3, p4))));
            break;
          case 3:
            this.a(p0, p2, hz.a(p2, Float.valueOf(com.google.android.gms.common.internal.safeparcel.a.l(p3, p4))));
            break;
          case 4:
            this.a(p0, p2, hz.a(p2, Double.valueOf(com.google.android.gms.common.internal.safeparcel.a.m(p3, p4))));
            break;
          case 5:
            this.a(p0, p2, hz.a(p2, com.google.android.gms.common.internal.safeparcel.a.n(p3, p4)));
            break;
          case 6:
            this.a(p0, p2, hz.a(p2, Boolean.valueOf(com.google.android.gms.common.internal.safeparcel.a.c(p3, p4))));
            break;
          case 7:
            this.a(p0, p2, hz.a(p2, com.google.android.gms.common.internal.safeparcel.a.o(p3, p4)));
            break;
          case 8:
          case 9:
            this.a(p0, p2, hz.a(p2, com.google.android.gms.common.internal.safeparcel.a.r(p3, p4)));
            break;
          case 10:
            this.a(p0, p2, hz.a(p2, d(com.google.android.gms.common.internal.safeparcel.a.q(p3, p4))));
            break;
          case 11:
            throw new IllegalArgumentException("Method does not accept concrete type.");
          default:
            throw new IllegalArgumentException("Unknown field out type = " + p2.e());
        }
      }
      else
      {
        this.b(p0, p2, p3, p4);
      }
    }

    private void a(
            StringBuilder p0,
            java.util.HashMap<String, com.google.android.gms.internal.hz$a<?, ?>> p1,
            android.os.Parcel p2)
    {
      java.util.HashMap v4;
      int v5;
      int v6;
      int v7;
      java.util.Map.Entry v8;
      String v9;
      com.google.android.gms.internal.hz$a v10;
      v4 = b(p1);
      p0.append('{');
      v5 = com.google.android.gms.common.internal.safeparcel.a.B(p2);
      v6 = 0;
      while ( p2.dataPosition() < v5 )
      {
        v7 = com.google.android.gms.common.internal.safeparcel.a.A(p2);
        v8 = (java.util.Map.Entry)v4.get(Integer.valueOf(com.google.android.gms.common.internal.safeparcel.a.ar(v7)));
        if ( v8 != null )
        {
          if ( v6 != 0 )
            p0.append(",");
          v9 = (String)v8.getKey();
          v10 = (com.google.android.gms.internal.hz$a)v8.getValue();
          p0.append("\"").append(v9).append("\":");
          if ( v10.k() )
          {
            switch ( v10.e() )
            {
              case 0:
                this.a(p0, v10, hz.a(v10, Integer.valueOf(com.google.android.gms.common.internal.safeparcel.a.g(p2, v7))));
                break;
              case 1:
                this.a(p0, v10, hz.a(v10, com.google.android.gms.common.internal.safeparcel.a.k(p2, v7)));
                break;
              case 2:
                this.a(p0, v10, hz.a(v10, Long.valueOf(com.google.android.gms.common.internal.safeparcel.a.i(p2, v7))));
                break;
              case 3:
                this.a(p0, v10, hz.a(v10, Float.valueOf(com.google.android.gms.common.internal.safeparcel.a.l(p2, v7))));
                break;
              case 4:
                this.a(p0, v10, hz.a(v10, Double.valueOf(com.google.android.gms.common.internal.safeparcel.a.m(p2, v7))));
                break;
              case 5:
                this.a(p0, v10, hz.a(v10, com.google.android.gms.common.internal.safeparcel.a.n(p2, v7)));
                break;
              case 6:
                this.a(p0, v10, hz.a(v10, Boolean.valueOf(com.google.android.gms.common.internal.safeparcel.a.c(p2, v7))));
                break;
              case 7:
                this.a(p0, v10, hz.a(v10, com.google.android.gms.common.internal.safeparcel.a.o(p2, v7)));
                break;
              case 8:
              case 9:
                this.a(p0, v10, hz.a(v10, com.google.android.gms.common.internal.safeparcel.a.r(p2, v7)));
                break;
              case 10:
                this.a(p0, v10, hz.a(v10, d(com.google.android.gms.common.internal.safeparcel.a.q(p2, v7))));
                break;
              case 11:
                throw new IllegalArgumentException("Method does not accept concrete type.");
              default:
                throw new IllegalArgumentException("Unknown field out type = " + v10.e());
            }
          }
          else
          {
            this.b(p0, v10, p2, v7);
          }
          v6 = 1;
        }
      }
      if ( p2.dataPosition() != v5 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v5, p2);
      p0.append('}');
    }

    private static com.google.android.gms.internal.ic b(com.google.android.gms.internal.hz p0)
    {
      com.google.android.gms.internal.ic v1;
      v1 = new com.google.android.gms.internal.ic(p0.getClass());
      a(v1, p0);
      v1.b();
      v1.a();
      return v1;
    }

    private static java.util.HashMap<Integer, java.util.Map.Entry<String, com.google.android.gms.internal.hz$a<?, ?>>> b(
            java.util.HashMap<String, com.google.android.gms.internal.hz$a<?, ?>> p0)
    {
      java.util.HashMap v1;
      java.util.Iterator v2;
      java.util.Map.Entry v3;
      v1 = new java.util.HashMap();
      v2 = p0.entrySet().iterator();
      while ( v2.hasNext() )
      {
        v3 = (java.util.Map.Entry)v2.next();
        v1.put(Integer.valueOf(((com.google.android.gms.internal.hz$a)v3.getValue()).h()), v3);
      }
      return v1;
    }

    private void b(StringBuilder p0, com.google.android.gms.internal.hz$a<?, ?> p1, android.os.Parcel p2, int p3)
    {
      android.os.Parcel[] v5;
      int v6;
      int i;
      android.os.Bundle v8;
      java.util.Set v9;
      java.util.Iterator v10;
      int v11;
      String v12;
      android.os.Parcel v13;
      if ( p1.f() )
      {
        p0.append("[");
        switch ( p1.e() )
        {
          case 0:
            ih.a(p0, com.google.android.gms.common.internal.safeparcel.a.u(p2, p3));
            break;
          case 1:
            ih.a(p0, com.google.android.gms.common.internal.safeparcel.a.w(p2, p3));
            break;
          case 2:
            ih.a(p0, com.google.android.gms.common.internal.safeparcel.a.v(p2, p3));
            break;
          case 3:
            ih.a(p0, com.google.android.gms.common.internal.safeparcel.a.x(p2, p3));
            break;
          case 4:
            ih.a(p0, com.google.android.gms.common.internal.safeparcel.a.y(p2, p3));
            break;
          case 5:
            ih.a(p0, com.google.android.gms.common.internal.safeparcel.a.z(p2, p3));
            break;
          case 6:
            ih.a(p0, com.google.android.gms.common.internal.safeparcel.a.t(p2, p3));
            break;
          case 7:
            ih.a(p0, com.google.android.gms.common.internal.safeparcel.a.A(p2, p3));
            break;
          case 8:
          case 9:
          case 10:
            throw new UnsupportedOperationException("List of type BASE64, BASE64_URL_SAFE, or STRING_MAP is not supported");
          case 11:
            v5 = com.google.android.gms.common.internal.safeparcel.a.D(p2, p3);
            v6 = v5.length;
            for ( i = 0; i < v6; ++i )
            {
              if ( i > 0 )
                p0.append(",");
              v5[i].setDataPosition(0);
              this.a(p0, p1.m(), v5[i]);
            }
            break;
          default:
            throw new IllegalStateException("Unknown field type out.");
        }
        p0.append("]");
      }
      else
      {
        switch ( p1.e() )
        {
          case 0:
            p0.append(com.google.android.gms.common.internal.safeparcel.a.g(p2, p3));
            break;
          case 1:
            p0.append(com.google.android.gms.common.internal.safeparcel.a.k(p2, p3));
            break;
          case 2:
            p0.append(com.google.android.gms.common.internal.safeparcel.a.i(p2, p3));
            break;
          case 3:
            p0.append(com.google.android.gms.common.internal.safeparcel.a.l(p2, p3));
            break;
          case 4:
            p0.append(com.google.android.gms.common.internal.safeparcel.a.m(p2, p3));
            break;
          case 5:
            p0.append(com.google.android.gms.common.internal.safeparcel.a.n(p2, p3));
            break;
          case 6:
            p0.append(com.google.android.gms.common.internal.safeparcel.a.c(p2, p3));
            break;
          case 7:
            p0.append("\"").append(io.aK(com.google.android.gms.common.internal.safeparcel.a.o(p2, p3))).append("\"");
            break;
          case 8:
            p0.append("\"").append(ii.d(com.google.android.gms.common.internal.safeparcel.a.r(p2, p3))).append("\"");
            break;
          case 9:
            p0.append("\"").append(ii.e(com.google.android.gms.common.internal.safeparcel.a.r(p2, p3)));
            p0.append("\"");
            break;
          case 10:
            v8 = com.google.android.gms.common.internal.safeparcel.a.q(p2, p3);
            v9 = v8.keySet();
            v9.size();
            p0.append("{");
            v10 = v9.iterator();
            v11 = 1;
            while ( v10.hasNext() )
            {
              v12 = (String)v10.next();
              if ( v11 == 0 )
                p0.append(",");
              p0.append("\"").append(v12).append("\"");
              p0.append(":");
              p0.append("\"").append(io.aK(v8.getString(v12))).append("\"");
              v11 = 0;
            }
            p0.append("}");
            break;
          case 11:
            v13 = com.google.android.gms.common.internal.safeparcel.a.C(p2, p3);
            v13.setDataPosition(0);
            this.a(p0, p1.m(), v13);
            break;
          default:
            throw new IllegalStateException("Unknown field type out");
        }
      }
    }

    public static java.util.HashMap<String, String> d(android.os.Bundle p0)
    {
      java.util.HashMap v1;
      java.util.Iterator v2;
      String v3;
      v1 = new java.util.HashMap();
      v2 = p0.keySet().iterator();
      while ( v2.hasNext() )
      {
        v3 = (String)v2.next();
        v1.put(v3, p0.getString(v3));
      }
      return v1;
    }

    public final java.util.HashMap<String, com.google.android.gms.internal.hz$a<?, ?>> a()
    {
      if ( this.d != null )
        return this.d.a(this.e);
      else
        return null;
    }

    protected final Object b()
    {
      throw new UnsupportedOperationException("Converting to JSON does not require this method.");
    }

    protected final boolean c()
    {
      throw new UnsupportedOperationException("Converting to JSON does not require this method.");
    }

    public final int d()
    {
      return this.a;
    }

    public int describeContents()
    {
      return 0;
    }

    public final android.os.Parcel e()
    {
      switch ( this.f )
      {
        case 0:
          this.g = com.google.android.gms.common.internal.safeparcel.b.C(this.b);
        case 1:
          com.google.android.gms.common.internal.safeparcel.b.G(this.b, this.g);
          this.f = 2;
          break;
        default:
          return this.b;
      }
      return this.b;
    }

    final com.google.android.gms.internal.ic f()
    {
      com.google.android.gms.internal.ic d;
      switch ( this.c )
      {
        case 0:
          d = null;
          break;
        case 1:
        case 2:
          d = this.d;
          break;
        default:
          throw new IllegalStateException("Invalid creation type: " + this.c);
      }
      return d;
    }

    public String toString()
    {
      android.os.Parcel v1;
      StringBuilder v2;
      hn.b(this.d, "Cannot convert to JSON on client side.");
      v1 = this.e();
      v1.setDataPosition(0);
      v2 = new StringBuilder(100);
      this.a(v2, this.d.a(this.e), v1);
      return v2.toString();
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      ig.a(this, p0, p1);
    }

}

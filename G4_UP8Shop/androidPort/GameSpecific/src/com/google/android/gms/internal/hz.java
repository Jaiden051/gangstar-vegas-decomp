// Decompiled from classes.dex (SourceFile: hz.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class hz {
    // Methods
    public hz()
    {
      super();
    }

    protected static <O, I> I a(com.google.android.gms.internal.hz$a<I, O> p0, Object p1)
    {
      if ( hz$a.c(p0) != null )
        return (I)p0.a((O)p1);
      return (I)p1;
    }

    private static void a(StringBuilder p0, com.google.android.gms.internal.hz$a p1, Object p2)
    {
      if ( p1.c() == 11 )
      {
        p0.append(((com.google.android.gms.internal.hz)p1.i().cast(p2)).toString());
      }
      else if ( p1.c() == 7 )
      {
        p0.append("\"");
        p0.append(io.aK((String)p2));
        p0.append("\"");
      }
      else
      {
        p0.append(p2);
      }
    }

    private void a(StringBuilder p0, com.google.android.gms.internal.hz$a p1, java.util.ArrayList<Object> p2)
    {
      int v4;
      int v5;
      Object v6; // RETVAL
    
      p0.append("[");
      v4 = 0;
      v5 = p2.size();
      while ( v4 < v5 )
      {
        if ( v4 > 0 )
          p0.append(",");
        v6 = p2.get(v4);
        if ( v6 != null )
          a(p0, p1, v6);
        ++v4;
      }
      p0.append("]");
    }

    private static boolean aH$552c4dfd()
    {
      throw new UnsupportedOperationException("Concrete types not supported");
    }

    private static boolean aI$552c4dfd()
    {
      throw new UnsupportedOperationException("Concrete type arrays not supported");
    }

    private static java.util.HashMap<String, Object> fC()
    {
      return null;
    }

    private static java.util.HashMap<String, Object> fD()
    {
      return null;
    }

    public abstract java.util.HashMap a();

    protected boolean a(com.google.android.gms.internal.hz$a p0)
    {
      if ( p0.e() == 11 )
      {
        if ( p0.f() )
        {
          p0.g();
          throw new UnsupportedOperationException("Concrete type arrays not supported");
        }
        p0.g();
        throw new UnsupportedOperationException("Concrete types not supported");
      }
      p0.g();
      return this.c();
    }

    protected abstract java.lang.Object b();

    protected Object b(com.google.android.gms.internal.hz$a p0)
    {
      String v2;
      Object[] v3;
      boolean v4; // RETVAL
    
      v2 = p0.g();
      if ( p0.i() == null )
      {
        p0.g();
        return this.b();
      }
      p0.g();
      this.b();
      v3 = new Object[1];
      v3[0] = p0.g();
      hn.a(true, "Concrete field shouldn't be value object: %s", v3);
      v4 = p0.f();
      try
      {
        return this.getClass().getMethod("get" + Character.toUpperCase(v2.charAt(0)) + v2.substring(1), new Class[0]).invoke(this, new Object[0]);
      }
      catch ( Exception v8 )
      {
        throw new RuntimeException(v8);
      }
    }

    protected abstract boolean c();

    public String toString()
    {
      java.util.HashMap v1;
      StringBuilder v2;
      java.util.Iterator v3;
      String v4;
      com.google.android.gms.internal.hz$a v5;
      Object v6;
      v1 = this.a();
      v2 = new StringBuilder(100);
      v3 = v1.keySet().iterator();
      while ( v3.hasNext() )
      {
        v4 = (String)v3.next();
        v5 = (com.google.android.gms.internal.hz$a)v1.get(v4);
        if ( this.a(v5) )
        {
          v6 = a(v5, this.b(v5));
          if ( v2.length() != 0 )
            v2.append(",");
          else
            v2.append("{");
          v2.append("\"").append(v4).append("\":");
          if ( v6 != null )
          {
            switch ( v5.e() )
            {
              case 8:
                v2.append("\"").append(ii.d((byte[])v6)).append("\"");
                break;
              case 9:
                v2.append("\"").append(ii.e((byte[])v6)).append("\"");
                break;
              case 10:
                ip.a(v2, (java.util.HashMap)v6);
                break;
              default:
                if ( v5.d() )
                  this.a(v2, v5, (java.util.ArrayList)v6);
                else
                  a(v2, v5, v6);
                break;
            }
          }
          else
          {
            v2.append("null");
          }
        }
      }
      if ( v2.length() <= 0 )
        v2.append("{}");
      else
        v2.append("}");
      return v2.toString();
    }

}

// Decompiled from classes.dex (SourceFile: dh.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class dh {
    // Fields
    private static final java.lang.Object a;
    private static java.lang.Long b;
    private static java.lang.Double c;
    private static com.google.android.gms.tagmanager.dg d;
    private static java.lang.String e;
    private static java.lang.Boolean f;
    private static java.util.List g;
    private static java.util.Map h;
    private static com.google.android.gms.internal.d$a i;

    // Methods
    static
    {
      a = null;
      b = new Long(0);
      c = new Double(0.0);
      d = dg.z(0);
      e = new String("");
      f = new Boolean(false);
      g = new java.util.ArrayList(0);
      h = new java.util.HashMap();
      i = r(e);
    }

    public static com.google.android.gms.internal.d$a cp(String p0)
    {
      com.google.android.gms.internal.d$a v1;
      v1 = new com.google.android.gms.internal.d$a();
      v1.a = 5;
      v1.g = p0;
      return v1;
    }

    private static com.google.android.gms.tagmanager.dg cq(String p0)
    {
      try
      {
        return dg.co(p0);
      }
      catch ( NumberFormatException e )
      {
        bh.A("Failed to convert '" + p0 + "' to a number.");
        return d;
      }
    }

    private static Long cr(String p0)
    {
      com.google.android.gms.tagmanager.dg v1; // RETVAL
    
      v1 = cq(p0);
      if ( v1 == d )
        return b;
      else
        return Long.valueOf(v1.longValue());
    }

    private static Double cs(String p0)
    {
      com.google.android.gms.tagmanager.dg v1; // RETVAL
    
      v1 = cq(p0);
      if ( v1 == d )
        return c;
      else
        return Double.valueOf(v1.doubleValue());
    }

    private static Boolean ct(String p0)
    {
      if ( "true".equalsIgnoreCase(p0) )
        return Boolean.TRUE;
      if ( "false".equalsIgnoreCase(p0) )
        return Boolean.FALSE;
      return f;
    }

    private static double getDouble(Object p0)
    {
      if ( p0 instanceof Number )
        return ((Number)p0).doubleValue();
      bh.A("getDouble received non-Number");
      return 0.0;
    }

    public static String j(com.google.android.gms.internal.d$a p0)
    {
      return m(o(p0));
    }

    public static com.google.android.gms.tagmanager.dg k(com.google.android.gms.internal.d$a p0)
    {
      return n(o(p0));
    }

    public static Long l(com.google.android.gms.internal.d$a p0)
    {
      return o(o(p0));
    }

    public static Double m(com.google.android.gms.internal.d$a p0)
    {
      return p(o(p0));
    }

    public static String m(Object p0)
    {
      if ( p0 != null )
        return p0.toString();
      else
        return e;
    }

    public static Object mS()
    {
      return a;
    }

    public static Long mT()
    {
      return b;
    }

    public static Double mU()
    {
      return c;
    }

    public static Boolean mV()
    {
      return f;
    }

    public static com.google.android.gms.tagmanager.dg mW()
    {
      return d;
    }

    public static String mX()
    {
      return e;
    }

    public static com.google.android.gms.internal.d$a mY()
    {
      return i;
    }

    public static com.google.android.gms.tagmanager.dg n(Object p0)
    {
      if ( p0 instanceof com.google.android.gms.tagmanager.dg )
        return (com.google.android.gms.tagmanager.dg)p0;
      if ( t(p0) )
        return dg.z(u(p0));
      if ( s(p0) )
        return dg.a(Double.valueOf(getDouble(p0)));
      return cq(m(p0));
    }

    public static Boolean n(com.google.android.gms.internal.d$a p0)
    {
      return q(o(p0));
    }

    public static Long o(Object p0)
    {
      if ( t(p0) )
        return Long.valueOf(u(p0));
      else
        return cr(m(p0));
    }

    public static Object o(com.google.android.gms.internal.d$a p0)
    {
      int v1;
      Object b;
      java.util.ArrayList v4;
      com.google.android.gms.internal.d$a[] c;
      int v6;
      Object v7; // RETVAL
      java.util.Map v8;
      Object v9;
      Object v10; // RETVAL
      StringBuffer v11;
      com.google.android.gms.internal.d$a[] j;
      int v13;
      String v14; // RETVAL
    
      v1 = 0;
      if ( p0 == null )
        return a;
      switch ( p0.a )
      {
        case 1:
          b = p0.b;
          break;
        case 2:
          v4 = new java.util.ArrayList(p0.c.length);
          c = p0.c;
          v6 = c.length;
          while ( v1 < v6 )
          {
            v7 = dh.o(c[v1]);
            if ( v7 == a )
              return a;
            v4.add(v7);
            ++v1;
          }
          b = v4;
          break;
        case 3:
          if ( p0.d.length == p0.e.length )
          {
            v8 = new java.util.HashMap(p0.e.length);
            while ( v1 < p0.d.length )
            {
              v9 = dh.o(p0.d[v1]);
              v10 = dh.o(p0.e[v1]);
              if ( v9 == a || v10 == a )
                return a;
              v8.put(v9, v10);
              ++v1;
            }
            b = v8;
          }
          else
          {
            bh.A("Converting an invalid value to object: " + p0.toString());
            b = a;
          }
          break;
        case 4:
          bh.A("Trying to convert a macro reference to object");
          b = a;
          break;
        case 5:
          bh.A("Trying to convert a function id to object");
          b = a;
          break;
        case 6:
          b = Long.valueOf(p0.h);
          break;
        case 7:
          v11 = new StringBuffer();
          j = p0.j;
          v13 = j.length;
          while ( v1 < v13 )
          {
            v14 = dh.j(j[v1]);
            if ( v14 == e )
              return a;
            v11.append(v14);
            ++v1;
          }
          b = v11.toString();
          break;
        case 8:
          b = Boolean.valueOf(p0.i);
          break;
        default:
          bh.A("Failed to convert a value of type: " + p0.a);
          b = a;
          break;
      }
      return b;
    }

    public static Double p(Object p0)
    {
      if ( s(p0) )
        return Double.valueOf(getDouble(p0));
      else
        return cs(m(p0));
    }

    public static Boolean q(Object p0)
    {
      if ( p0 instanceof Boolean )
        return (Boolean)p0;
      else
        return ct(m(p0));
    }

    public static com.google.android.gms.internal.d$a r(Object p0)
    {
      boolean v1 = false;
      com.google.android.gms.internal.d$a v2 = null;
      java.util.List v5 = null;
      java.util.List v6 = null;
      java.util.Iterator v7 = null;
      boolean v8 = false;
      com.google.android.gms.internal.d$a v9 = null; // RETVAL
      boolean v10 = false;
      java.util.Set v11 = null;
      java.util.List v12 = null;
      java.util.List v13 = null;
      java.util.Iterator v14 = null;
      boolean v15 = false;
      java.util.Map.Entry v16 = null;
      com.google.android.gms.internal.d$a v17 = null;
      com.google.android.gms.internal.d$a v18 = null; // RETVAL
      Object v19 = null;
      boolean v20 = false;
      StringBuilder v21 = null;
      String v22 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v1 = false;
            v2 = new com.google.android.gms.internal.d$a();
            if ( p0 instanceof com.google.android.gms.internal.d$a )
            return (com.google.android.gms.internal.d$a)p0;
            if ( !(p0 instanceof String) ) { _pc = 2; continue _sm; }
            v2.a = 1;
            v2.b = (String)p0;
            _pc = 1;
            continue _sm;
          case 1:
            v2.l = v1;
            return v2;
          case 2:
            if ( p0 instanceof java.util.List )
            {
            v2.a = 2;
            v5 = (java.util.List)p0;
            v6 = new java.util.ArrayList(v5.size());
            v7 = v5.iterator();
            v8 = false;
            while ( v7.hasNext() )
            {
            v9 = dh.r(v7.next());
            if ( v9 == i )
            return i;
            v10 = v8 || v9.l;
            v6.add(v9);
            v8 = v10;
            }
            v2.c = (com.google.android.gms.internal.d$a[])v6.toArray(new com.google.android.gms.internal.d$a[0]);
            v1 = v8;
            { _pc = 1; continue _sm; }
            }
            if ( p0 instanceof java.util.Map )
            {
            v2.a = 3;
            v11 = ((java.util.Map)p0).entrySet();
            v12 = new java.util.ArrayList(v11.size());
            v13 = new java.util.ArrayList(v11.size());
            v14 = v11.iterator();
            v15 = false;
            while ( v14.hasNext() )
            {
            v16 = (java.util.Map.Entry)v14.next();
            v17 = dh.r(v16.getKey());
            v18 = dh.r(v16.getValue());
            v19 = v18;
            if ( v17 == i || v18 == i )
            return i;
            v20 = v15 || v17.l || v18.l;
            v12.add(v17);
            v13.add(v19);
            v15 = v20;
            }
            v2.d = (com.google.android.gms.internal.d$a[])v12.toArray(new com.google.android.gms.internal.d$a[0]);
            v2.e = (com.google.android.gms.internal.d$a[])v13.toArray(new com.google.android.gms.internal.d$a[0]);
            v1 = v15;
            { _pc = 1; continue _sm; }
            }
            if ( s(p0) )
            {
            v2.a = 1;
            v2.b = p0.toString();
            { _pc = 1; continue _sm; }
            }
            if ( t(p0) )
            {
            v2.a = 6;
            v2.h = u(p0);
            { _pc = 1; continue _sm; }
            }
            if ( p0 instanceof Boolean )
            {
            v2.a = 8;
            v2.i = ((Boolean)p0).booleanValue();
            { _pc = 1; continue _sm; }
            }
            v21 = new StringBuilder("Converting to Value from unknown object type: ");
            if ( p0 != null )
            v22 = p0.getClass().toString();
            else
            v22 = "null";
            bh.A(v21.append(v22).toString());
            return i;
        }
      }
}

    private static boolean s(Object p0)
    {
      return p0 instanceof Double
          || p0 instanceof Float
          || p0 instanceof com.google.android.gms.tagmanager.dg && ((com.google.android.gms.tagmanager.dg)p0).a();
    }

    private static boolean t(Object p0)
    {
      return p0 instanceof Byte
          || p0 instanceof Short
          || p0 instanceof Integer
          || p0 instanceof Long
          || p0 instanceof com.google.android.gms.tagmanager.dg && ((com.google.android.gms.tagmanager.dg)p0).b();
    }

    private static long u(Object p0)
    {
      if ( p0 instanceof Number )
        return ((Number)p0).longValue();
      bh.A("getInt64 received non-Number");
      return 0;
    }

}

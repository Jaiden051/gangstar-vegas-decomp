// Decompiled from classes.dex (SourceFile: di.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class di extends com.google.android.gms.tagmanager.df {
    // Fields
    private static final java.lang.String a;
    private static final java.lang.String b;
    private static final java.lang.String c;
    private static final java.lang.String d;
    private static final java.lang.String e;
    private static final java.lang.String f;
    private static final java.lang.String g;
    private static java.util.Map h;
    private static java.util.Map i;
    private final java.util.Set j;
    private final com.google.android.gms.tagmanager.de k;
    private final com.google.android.gms.tagmanager.DataLayer l;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.al.toString();
      b = com.google.android.gms.internal.b.a.toString();
      c = com.google.android.gms.internal.b.j.toString();
      d = com.google.android.gms.internal.b.i.toString();
      e = com.google.android.gms.internal.b.cl.toString();
      f = com.google.android.gms.internal.b.cn.toString();
      g = com.google.android.gms.internal.b.cp.toString();
    }

    public di(android.content.Context p0, com.google.android.gms.tagmanager.DataLayer p1)
    {
      this(p1, new com.google.android.gms.tagmanager.de(p0));
    }

    private di(com.google.android.gms.tagmanager.DataLayer p0, com.google.android.gms.tagmanager.de p1)
    {
      super(a, new String[0]);
      this.l = p0;
      this.k = p1;
      this.j = new java.util.HashSet();
      this.j.add("");
      this.j.add("0");
      this.j.add("false");
    }

    private String a(String p0)
    {
      Object v2; // RETVAL
    
      v2 = this.l.b(p0);
      if ( v2 != null )
        return v2.toString();
      else
        return null;
    }

    private java.util.Map<String, String> a(com.google.android.gms.internal.d$a p0)
    {
      java.util.Map v4; // RETVAL
      java.util.Map v5;
      String v6;
      if ( p0 == null )
        return new java.util.HashMap();
      v4 = c(p0);
      v5 = v4;
      if ( v4 == null )
        return new java.util.HashMap();
      v6 = (String)v4.get("&aip");
      if ( v6 != null && this.j.contains(v6.toLowerCase()) )
        v5.remove("&aip");
      return v5;
    }

    private void a(
            com.google.android.gms.analytics.Tracker p0,
            java.util.Map<String, com.google.android.gms.internal.d$a> p1)
    {
      String v3 = null;
      java.util.List v4 = null;
      java.util.Map v5 = null;
      com.google.android.gms.internal.d$a v6 = null;
      java.util.Map v7 = null;
      java.util.Iterator v8 = null;
      java.util.Map.Entry v9 = null;
      java.util.HashMap v11 = null;
      java.util.List v12 = null; // RETVAL
      java.util.Iterator v13 = null;
      java.util.Map v14 = null;
      java.util.Map v15 = null;
      com.google.android.gms.internal.d$a v16 = null;
      java.util.Map v17 = null;
      java.util.Iterator v18 = null;
      java.util.Map.Entry v19 = null;
      java.util.HashMap v20 = null;
      java.util.Iterator i = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v3 = this.a("transactionId");
            if ( !(v3 != null) ) { _pc = 2; continue _sm; }
            v4 = new java.util.LinkedList();
            try
            {
            v5 = this.a((com.google.android.gms.internal.d$a)p1.get(d));
            v5.put("&t", "transaction");
            v6 = (com.google.android.gms.internal.d$a)p1.get(f);
            if ( v6 != null )
            {
            v7 = c(v6);
            }
            else
            {
            if ( h == null )
            {
            v11 = new java.util.HashMap();
            v11.put("transactionId", "&ti");
            v11.put("transactionAffiliation", "&ta");
            v11.put("transactionTax", "&tt");
            v11.put("transactionShipping", "&ts");
            v11.put("transactionTotal", "&tr");
            v11.put("transactionCurrency", "&cu");
            h = v11;
            }
            v7 = h;
            }
            v8 = v7.entrySet().iterator();
            while ( v8.hasNext() )
            {
            v9 = (java.util.Map.Entry)v8.next();
            b(v5, (String)v9.getValue(), this.a((String)v9.getKey()));
            }
            v4.add(v5);
            v12 = this.d();
            if ( v12 != null )
            {
            v13 = v12.iterator();
            while ( v13.hasNext() )
            {
            v14 = (java.util.Map)v13.next();
            if ( v14.get("name") == null )
            {
            bh.A("Unable to send transaction item hit due to missing 'name' field.");
            { _pc = 1; continue _sm; }
            }
            v15 = this.a((com.google.android.gms.internal.d$a)p1.get(d));
            v15.put("&t", "item");
            v15.put("&ti", v3);
            v16 = (com.google.android.gms.internal.d$a)p1.get(g);
            if ( v16 != null )
            {
            v17 = c(v16);
            }
            else
            {
            if ( di.i == null )
            {
            v20 = new java.util.HashMap();
            v20.put("name", "&in");
            v20.put("sku", "&ic");
            v20.put("category", "&iv");
            v20.put("price", "&ip");
            v20.put("quantity", "&iq");
            v20.put("currency", "&cu");
            di.i = v20;
            }
            v17 = di.i;
            }
            v18 = v17.entrySet().iterator();
            while ( v18.hasNext() )
            {
            v19 = (java.util.Map.Entry)v18.next();
            b(v15, (String)v19.getValue(), (String)v14.get(v19.getKey()));
            }
            v4.add(v15);
            }
            }
            for ( i = v4.iterator(); i.hasNext(); p0.a((java.util.Map)i.next()) )
            ;
            }
            catch ( IllegalArgumentException v10 )
            {
            bh.b("Unable to send transaction", v10);
            }
            
            _pc = 1;
            continue _sm;
          case 1:
            _pc = 3;
            continue _sm;
          case 2:
            {
            bh.A("Cannot find transactionId in data layer.");
            }
            _pc = 3;
            continue _sm;
          case 3:
            return;
        }
      }
}

    private static void b(java.util.Map<String, String> p0, String p1, String p2)
    {
      if ( p2 != null )
        p0.put(p1, p2);
    }

    private static java.util.Map<String, String> c(com.google.android.gms.internal.d$a p0)
    {
      Object v1; // RETVAL
      java.util.Map v4;
      java.util.Iterator v5;
      java.util.Map.Entry v6;
      v1 = dh.o(p0);
      if ( !(v1 instanceof java.util.Map) )
        return null;
      v4 = new java.util.LinkedHashMap();
      v5 = ((java.util.Map)v1).entrySet().iterator();
      while ( v5.hasNext() )
      {
        v6 = (java.util.Map.Entry)v5.next();
        v4.put(v6.getKey().toString(), v6.getValue().toString());
      }
      return v4;
    }

    private java.util.Map<String, String> c(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      com.google.android.gms.internal.d$a v2;
      java.util.HashMap v5;
      v2 = (com.google.android.gms.internal.d$a)p0.get(f);
      if ( v2 != null )
        return c(v2);
      if ( h == null )
      {
        v5 = new java.util.HashMap();
        v5.put("transactionId", "&ti");
        v5.put("transactionAffiliation", "&ta");
        v5.put("transactionTax", "&tt");
        v5.put("transactionShipping", "&ts");
        v5.put("transactionTotal", "&tr");
        v5.put("transactionCurrency", "&cu");
        h = v5;
      }
      return h;
    }

    private java.util.List<java.util.Map<String, String>> d()
    {
      Object v1; // RETVAL
      Object v2;
      java.util.Iterator v5;
      v1 = this.l.b("transactionProducts");
      v2 = v1;
      if ( v1 == null )
        return null;
      if ( !(v1 instanceof java.util.List) )
        throw new IllegalArgumentException("transactionProducts should be of type List.");
      v5 = ((java.util.List)v1).iterator();
      while ( v5.hasNext() )
      {
        if ( !(v5.next() instanceof java.util.Map) )
          throw new IllegalArgumentException("Each element of transactionProducts should be of type Map.");
      }
      return (java.util.List)v2;
    }

    private java.util.Map<String, String> d(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      com.google.android.gms.internal.d$a v2;
      java.util.HashMap v5;
      v2 = (com.google.android.gms.internal.d$a)p0.get(g);
      if ( v2 != null )
        return c(v2);
      if ( i == null )
      {
        v5 = new java.util.HashMap();
        v5.put("name", "&in");
        v5.put("sku", "&ic");
        v5.put("category", "&iv");
        v5.put("price", "&ip");
        v5.put("quantity", "&iq");
        v5.put("currency", "&cu");
        i = v5;
      }
      return i;
    }

    private static boolean e(java.util.Map<String, com.google.android.gms.internal.d$a> p0, String p1)
    {
      com.google.android.gms.internal.d$a v2;
      v2 = (com.google.android.gms.internal.d$a)p0.get(p1);
      return v2 != null && dh.n(v2).booleanValue();
    }

    public final void b(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      com.google.android.gms.analytics.Tracker v2 = null;
      String v3 = null;
      java.util.List v4 = null;
      java.util.Map v5 = null;
      com.google.android.gms.internal.d$a v6 = null;
      java.util.Map v7 = null;
      java.util.Iterator v8 = null;
      java.util.Map.Entry v9 = null;
      java.util.HashMap v11 = null;
      java.util.List v12 = null; // RETVAL
      java.util.Iterator v13 = null;
      java.util.Map v14 = null;
      java.util.Map v15 = null;
      com.google.android.gms.internal.d$a v16 = null;
      java.util.Map v17 = null;
      java.util.Iterator v18 = null;
      java.util.Map.Entry v19 = null;
      java.util.HashMap v20 = null;
      java.util.Iterator i = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v2 = this.k.a("_GTM_DEFAULT_TRACKER_");
            if ( !(e(p0, c)) ) { _pc = 1; continue _sm; }
            {
            v2.a(this.a((com.google.android.gms.internal.d$a)p0.get(d)));
            }
            _pc = 6;
            continue _sm;
          case 1:
            if ( !(e(p0, e)) ) { _pc = 5; continue _sm; }
            v3 = this.a("transactionId");
            if ( !(v3 != null) ) { _pc = 3; continue _sm; }
            v4 = new java.util.LinkedList();
            try
            {
            v5 = this.a((com.google.android.gms.internal.d$a)p0.get(d));
            v5.put("&t", "transaction");
            v6 = (com.google.android.gms.internal.d$a)p0.get(f);
            if ( v6 != null )
            {
            v7 = c(v6);
            }
            else
            {
            if ( h == null )
            {
            v11 = new java.util.HashMap();
            v11.put("transactionId", "&ti");
            v11.put("transactionAffiliation", "&ta");
            v11.put("transactionTax", "&tt");
            v11.put("transactionShipping", "&ts");
            v11.put("transactionTotal", "&tr");
            v11.put("transactionCurrency", "&cu");
            h = v11;
            }
            v7 = h;
            }
            v8 = v7.entrySet().iterator();
            while ( v8.hasNext() )
            {
            v9 = (java.util.Map.Entry)v8.next();
            b(v5, (String)v9.getValue(), this.a((String)v9.getKey()));
            }
            v4.add(v5);
            v12 = this.d();
            if ( v12 != null )
            {
            v13 = v12.iterator();
            while ( v13.hasNext() )
            {
            v14 = (java.util.Map)v13.next();
            if ( v14.get("name") == null )
            {
            bh.A("Unable to send transaction item hit due to missing 'name' field.");
            { _pc = 2; continue _sm; }
            }
            v15 = this.a((com.google.android.gms.internal.d$a)p0.get(d));
            v15.put("&t", "item");
            v15.put("&ti", v3);
            v16 = (com.google.android.gms.internal.d$a)p0.get(g);
            if ( v16 != null )
            {
            v17 = c(v16);
            }
            else
            {
            if ( di.i == null )
            {
            v20 = new java.util.HashMap();
            v20.put("name", "&in");
            v20.put("sku", "&ic");
            v20.put("category", "&iv");
            v20.put("price", "&ip");
            v20.put("quantity", "&iq");
            v20.put("currency", "&cu");
            di.i = v20;
            }
            v17 = di.i;
            }
            v18 = v17.entrySet().iterator();
            while ( v18.hasNext() )
            {
            v19 = (java.util.Map.Entry)v18.next();
            b(v15, (String)v19.getValue(), (String)v14.get(v19.getKey()));
            }
            v4.add(v15);
            }
            }
            for ( i = v4.iterator(); i.hasNext(); v2.a((java.util.Map)i.next()) )
            ;
            }
            catch ( IllegalArgumentException v10 )
            {
            bh.b("Unable to send transaction", v10);
            }
            
            _pc = 2;
            continue _sm;
          case 2:
            _pc = 4;
            continue _sm;
          case 3:
            {
            bh.A("Cannot find transactionId in data layer.");
            }
            _pc = 4;
            continue _sm;
          case 4:
            _pc = 6;
            continue _sm;
          case 5:
            {
            bh.D("Ignoring unknown tag.");
            }
            _pc = 6;
            continue _sm;
          case 6:
            return;
        }
      }
}

}

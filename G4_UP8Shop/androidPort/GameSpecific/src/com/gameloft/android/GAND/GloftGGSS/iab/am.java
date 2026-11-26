// Decompiled from classes.dex (SourceFile: am.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

public final class am {
    // Fields
    private java.util.Hashtable a;
    private java.util.Hashtable b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;
    private java.lang.String j;
    private java.lang.String k;
    private java.lang.String l;
    private java.lang.String m;
    private java.lang.String n;
    private java.lang.String o;
    private java.lang.String p;
    private java.lang.String q;
    private java.lang.String r;
    private java.lang.String s;

    // Methods
    public am()
    {
      super();
      this.a = new java.util.Hashtable();
      this.b = new java.util.Hashtable();
      this.c = "";
      this.d = "";
      this.e = "";
      this.f = "";
      this.g = "";
      this.h = "";
      this.i = "";
      this.j = "";
      this.k = "";
      this.l = "";
      this.m = "";
      this.n = "";
      this.o = "";
      this.p = "";
      this.q = "";
      this.r = "";
      this.s = "";
    }

    private String n()
    {
      return this.d;
    }

    private String o()
    {
      return this.f;
    }

    private String p()
    {
      return this.g;
    }

    private String q()
    {
      return this.h;
    }

    private String r()
    {
      return this.r;
    }

    private String s()
    {
      return this.s;
    }

    public final java.util.ArrayList<com.gameloft.android.GAND.GloftGGSS.iab.ap> a()
    {
      java.util.ArrayList v1;
      java.util.Enumeration i;
      if ( this.b == null || this.b.size() <= 0 )
        return null;
      v1 = new java.util.ArrayList();
      for ( i = this.a.keys(); i.hasMoreElements(); v1.addAll((java.util.Collection)this.a.get((String)i.nextElement())) )
        ;
      return v1;
    }

    public final java.util.ArrayList<com.gameloft.android.GAND.GloftGGSS.iab.ap> a(String p0)
    {
      if ( p0.equals("") )
        return this.a();
      if ( this.a.containsKey(p0) )
        return (java.util.ArrayList)this.a.get(p0);
      return null;
    }

    public final void a(com.gameloft.android.GAND.GloftGGSS.iab.ap p0)
    {
      String v2;
      java.util.ArrayList v3;
      if ( p0 != null )
      {
        v2 = p0.d();
        if ( this.a.containsKey(v2) )
        {
          ((java.util.ArrayList)this.a.get(v2)).add(p0);
        }
        else
        {
          v3 = new java.util.ArrayList();
          v3.add(p0);
          this.a.put(v2, v3);
        }
        this.b.put(p0.b(), p0);
      }
    }

    public final void a(String p0, String p1, String p2)
    {
      ((com.gameloft.android.GAND.GloftGGSS.iab.ap)this.b.get(p0)).a(p1, p2);
    }

    public final int b()
    {
      if ( this.b != null )
        return this.b.size();
      else
        return 0;
    }

    public final String b(String p0)
    {
      java.util.Enumeration v2;
      com.gameloft.android.GAND.GloftGGSS.iab.ap v3;
      if ( p0 != null )
      {
        v2 = this.b.keys();
        while ( v2.hasMoreElements() )
        {
          v3 = (com.gameloft.android.GAND.GloftGGSS.iab.ap)this.b.get(v2.nextElement());
          if ( p0.equals(v3.b(InAppBilling.a(0, 109)).a(InAppBilling.a(0, 74))) )
            return v3.b();
        }
      }
      return null;
    }

    public final String c()
    {
      return this.c;
    }

    public final String c(String p0)
    {
      java.util.Enumeration v2;
      com.gameloft.android.GAND.GloftGGSS.iab.ap v3;
      if ( p0 != null )
      {
        v2 = this.b.keys();
        while ( v2.hasMoreElements() )
        {
          v3 = (com.gameloft.android.GAND.GloftGGSS.iab.ap)this.b.get(v2.nextElement());
          if ( p0.equals(v3.b(InAppBilling.a(0, 109)).a(InAppBilling.a(0, 80))) )
            return v3.b();
        }
      }
      return null;
    }

    public final com.gameloft.android.GAND.GloftGGSS.iab.ap d(String p0)
    {
      if ( this.b.containsKey(p0) )
        return (com.gameloft.android.GAND.GloftGGSS.iab.ap)this.b.get(p0);
      else
        return null;
    }

    public final String d()
    {
      return this.e;
    }

    public final String e()
    {
      return this.i;
    }

    public final void e(String p0)
    {
      this.c = p0;
    }

    public final String f()
    {
      return this.j;
    }

    public final void f(String p0)
    {
      this.d = p0;
    }

    public final String g()
    {
      return this.k;
    }

    public final void g(String p0)
    {
      this.e = p0;
    }

    public final String h()
    {
      return this.l;
    }

    public final void h(String p0)
    {
      this.f = p0;
    }

    public final String i()
    {
      return this.m;
    }

    public final void i(String p0)
    {
      this.g = p0;
    }

    public final String j()
    {
      return this.n;
    }

    public final void j(String p0)
    {
      this.i = p0;
    }

    public final String k()
    {
      return this.o;
    }

    public final void k(String p0)
    {
      this.h = p0;
    }

    public final String l()
    {
      return this.p;
    }

    public final void l(String p0)
    {
      this.j = p0;
    }

    public final String m()
    {
      return this.q;
    }

    public final void m(String p0)
    {
      this.k = p0;
    }

    public final void n(String p0)
    {
      this.l = p0;
    }

    public final void o(String p0)
    {
      this.m = p0;
    }

    public final void p(String p0)
    {
      this.n = p0;
    }

    public final void q(String p0)
    {
      this.o = p0;
    }

    public final void r(String p0)
    {
      this.p = p0;
    }

    public final void s(String p0)
    {
      this.q = p0;
    }

    public final void t(String p0)
    {
      this.r = p0;
    }

    public final String toString()
    {
      return null;
    }

    public final void u(String p0)
    {
      this.s = p0;
    }

}

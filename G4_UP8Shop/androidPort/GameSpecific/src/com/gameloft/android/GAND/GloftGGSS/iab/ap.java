// Decompiled from classes.dex (SourceFile: ap.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import android.text.Html;
final class ap {
    // Fields
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.util.Hashtable e;
    private java.util.Hashtable f;

    // Methods
    public ap()
    {
      super();
      this.a = "";
      this.b = "";
      this.c = "";
      this.d = "";
      this.e = new java.util.Hashtable();
      this.f = new java.util.Hashtable();
    }

    private int e()
    {
      if ( this.f != null )
        return this.f.size();
      else
        return 0;
    }

    private String f()
    {
      return this.d;
    }

    public final com.gameloft.android.GAND.GloftGGSS.iab.ao a()
    {
      return this.b(this.a);
    }

    public final String a(String p0)
    {
      if ( this.e.isEmpty() || !this.e.containsKey(p0) )
        return "";
      else
        return (String)this.e.get(p0);
    }

    public final void a(com.gameloft.android.GAND.GloftGGSS.iab.ao p0)
    {
      if ( p0 != null )
        this.f.put(p0.a(), p0);
    }

    public final void a(String p0, String p1)
    {
      if ( p0 != null && p1 != null )
      {
        if ( p1.equals(InAppBilling.a(0, 87)) || p1.equals(InAppBilling.a(0, 60)) || p1.equals(InAppBilling.a(0, 59)) )
          p1 = Html.fromHtml(p1).toString();
        this.e.put(p0, p1);
      }
    }

    public final com.gameloft.android.GAND.GloftGGSS.iab.ao b(String p0)
    {
      if ( this.f.isEmpty() )
        return null;
      else
        return (com.gameloft.android.GAND.GloftGGSS.iab.ao)this.f.get(p0);
    }

    public final String b()
    {
      return this.c;
    }

    public final String c()
    {
      return this.a;
    }

    public final void c(String p0)
    {
      this.c = p0;
    }

    public final String d()
    {
      return this.b;
    }

    public final void d(String p0)
    {
      this.d = p0;
    }

    public final void e(String p0)
    {
      this.a = p0;
    }

    public final void f(String p0)
    {
      this.b = p0;
    }

    public final String toString()
    {
      return null;
    }

}

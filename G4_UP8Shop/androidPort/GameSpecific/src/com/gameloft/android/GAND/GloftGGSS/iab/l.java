// Decompiled from classes.dex (SourceFile: l.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import java.util.Locale;
public final class l extends org.xml.sax.helpers.DefaultHandler {
    // Fields
    boolean a;
    boolean b;
    java.lang.String c;
    java.lang.String d;
    java.lang.String e;
    public com.gameloft.android.GAND.GloftGGSS.iab.ap f;
    public com.gameloft.android.GAND.GloftGGSS.iab.ao g;
    private com.gameloft.android.GAND.GloftGGSS.iab.am h;
    private boolean i;
    private boolean j;
    private boolean k;
    private boolean l;
    private boolean m;

    // Methods
    public l()
    {
      super();
      this.a = false;
      this.b = false;
      this.c = null;
      this.d = null;
      this.e = null;
      this.f = null;
      this.g = null;
      this.h = null;
      this.i = false;
      this.j = false;
      this.k = false;
      this.l = false;
      this.m = false;
    }

    public final com.gameloft.android.GAND.GloftGGSS.iab.am a()
    {
      return this.h;
    }

    public final void characters(char[] p0, int p1, int p2)
    {
      if ( this.a )
        this.c = this.c + new String(p0, p1, p2);
    }

    public final void endElement(String p0, String p1, String p2)
    {
      this.a = false;
      this.c = this.c.trim();
      if ( this.i )
      {
        if ( p1.equals("country") )
        {
          this.h.f(this.c.trim());
        }
        else if ( p1.equals("operator") )
        {
          this.h.h(this.c.trim());
        }
        else if ( p1.equals("product") )
        {
          this.h.k(this.c.trim());
        }
        else if ( p1.equals("language") )
        {
          this.h.m(this.c.trim());
        }
        else if ( p1.equals("shop_info") )
        {
          this.i = false;
        }
        else if ( p1.equals("promo_description") )
        {
          this.h.o(this.c.trim());
        }
        else if ( p1.equals("promo_endtime") )
        {
          this.h.p(this.c.trim());
        }
        else if ( p1.equals("server_time") )
        {
          this.h.q(this.c.trim());
        }
        else if ( p1.equals(InAppBilling.a(0, 159)) )
        {
          this.h.n(this.c.trim());
        }
        else if ( p1.equals("app_id") )
        {
          this.h.t(this.c.trim());
        }
        else if ( p1.equals("app_key") )
        {
          this.h.u(this.c.trim());
        }
        if ( this.m )
        {
          if ( p1.equals("texts") )
          {
            this.m = false;
          }
          else if ( p1.equals("text") )
          {
            if ( this.e.equals(InAppBilling.a(0, 64)) )
            {
              this.h.r(this.c);
            }
            else if ( this.e.equals(InAppBilling.a(0, 65)) )
            {
              this.h.s(this.c);
            }
            this.e = null;
          }
        }
      }
      else if ( this.j )
      {
        if ( this.k )
        {
          if ( p1.equals("billing") )
          {
            this.f.a(this.g);
          }
          else if ( p1.equals("billing_list") )
          {
            this.k = false;
          }
          if ( this.k && !p1.equals("billing") )
          {
            if ( this.l )
            {
              if ( p1.equals("texts") )
              {
                this.l = false;
              }
              else if ( p1.equals("text") )
              {
                if ( !this.d.contains("purchase_") )
                  this.d = "purchase_" + this.d;
                this.g.a(this.d, this.c.trim());
                this.d = null;
              }
            }
            else
            {
              this.g.a(p1, this.c.trim());
              if ( p1.equals("currency") )
                this.g.a("locale", Locale.getDefault().toString() + "@currency=" + this.c.trim());
            }
          }
        }
        else if ( p1.equals("content") )
        {
          this.h.a(this.f);
        }
        else if ( p1.equals("attribute") )
        {
          this.f.a(this.d, this.c.trim());
          this.d = null;
        }
        else if ( p1.equals("billing_type_pref") )
        {
          this.f.e(this.c.trim());
        }
        else if ( p1.equals("tracking_uid") )
        {
          this.f.d(this.c.trim());
        }
        else if ( p1.equals("content_list") )
        {
          this.j = false;
        }
      }
      this.c = "";
    }

    public final void startElement(String p0, String p1, String p2, org.xml.sax.Attributes p3)
    {
      if ( this.a )
        this.c = "";
      this.a = true;
      if ( p1.equals("shop_info") )
      {
        this.h = new com.gameloft.android.GAND.GloftGGSS.iab.am();
        this.i = true;
      }
      else if ( this.i )
      {
        if ( p1.equals("country") )
        {
          this.h.e(p3.getValue("id"));
        }
        else if ( p1.equals("operator") )
        {
          this.h.g(p3.getValue("id"));
        }
        else if ( p1.equals("product") )
        {
          this.h.i(p3.getValue("id"));
        }
        else if ( p1.equals("platform") )
        {
          this.h.j(p3.getValue("id"));
        }
        else if ( p1.equals("language") )
        {
          this.h.l(p3.getValue("id"));
        }
        else if ( p1.equals("texts") )
        {
          this.m = true;
        }
        else if ( this.m && p1.equals("text") )
        {
          this.e = p3.getValue("key");
        }
      }
      else if ( p1.equals("content_list") )
      {
        this.j = true;
      }
      else if ( this.j )
      {
        if ( this.k )
        {
          if ( p1.equals("billing") )
          {
            this.g = new com.gameloft.android.GAND.GloftGGSS.iab.ao();
            this.g.b(p3.getValue("type"));
          }
          else if ( p1.equals("texts") )
          {
            this.l = true;
          }
          else if ( this.l && p1.equals("text") )
          {
            this.d = p3.getValue("key");
          }
        }
        else if ( p1.equals("content") )
        {
          this.f = new com.gameloft.android.GAND.GloftGGSS.iab.ap();
          this.f.c(p3.getValue("id"));
          this.f.f(p3.getValue("type"));
        }
        else if ( p1.equals("attribute") )
        {
          this.d = p3.getValue("name");
        }
        else if ( p1.equals("billing_list") )
        {
          this.k = true;
        }
      }
    }

}

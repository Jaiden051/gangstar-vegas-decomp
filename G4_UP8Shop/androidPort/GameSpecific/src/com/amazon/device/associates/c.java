// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.os.Build;
class c {
    // Fields
    private static com.amazon.device.associates.c$a b;
    private static final java.lang.String c;
    private static java.lang.Boolean d;
    private final java.lang.String a;
    private java.lang.String e;
    private com.amazon.device.associates.br f;
    private com.amazon.device.associates.c$b g;
    private com.amazon.device.associates.i h;
    private boolean i;

    // Methods
    static
    {
      c = com.amazon.device.associates.c.class.getName();
      d = null;
    }

    public c(String p0)
    {
      super();
      this.e = "";
      this.i = false;
      this.a = p0;
      this.c();
    }

    /* synthetic */ static String a()
    {
      return c;
    }

    private String a(com.amazon.device.associates.i p0)
    {
      String v2;
      if ( !this.e() || d.booleanValue() && !this.i )
        return (String)p0.a().get(com.amazon.device.associates.i.f);
      switch ( c$1.a[this.g.ordinal()] )
      {
        case 1:
          v2 = (String)p0.a().get(com.amazon.device.associates.i.g);
          break;
        case 2:
          v2 = (String)p0.a().get(com.amazon.device.associates.i.h);
          break;
        default:
          return (String)p0.a().get(com.amazon.device.associates.i.f);
      }
      return v2;
    }

    private com.amazon.device.associates.c$b b(String p0)
    {
      if ( p0 != null && this.f != null )
        return c$b.a(this.f.h());
      else
        return c$b.c;
    }

    /* synthetic */ static Boolean b()
    {
      return d;
    }

    private void c()
    {
      this.d();
      this.f = n.a(this.a);
      this.h = (com.amazon.device.associates.i)((com.amazon.device.associates.bb)ah.a(com.amazon.device.associates.bb.class)).j();
      this.g = this.b(this.a);
      this.f();
    }

    private void d()
    {
      if ( d == null )
      {
        if ( Build.MANUFACTURER != null && Build.MANUFACTURER.equalsIgnoreCase("AMAZON") )
          d = Boolean.valueOf(true);
        else
          d = Boolean.valueOf(false);
      }
    }

    private boolean e()
    {
      return !this.i || Build.VERSION.SDK_INT >= 11;
    }

    private void f()
    {
      if ( c$b.a.equals(this.g) || c$b.b.equals(this.g) )
        this.i = true;
    }

    public String a(String p0)
    {
      String v2;
      String v3;
      v2 = bq.a(p0);
      v3 = null;
      if ( v2 != null )
      {
        if ( this.h != null )
          v3 = this.a(this.h);
      }
      else
      {
        p.a(c, "ASIN not received. Providing Amazon homepage Url");
        v3 = bq.a();
      }
      if ( v3 == null )
        v3 = this.a(((com.amazon.device.associates.bb)ah.a(com.amazon.device.associates.bb.class)).a());
      if ( !v3.startsWith("http://") )
        v3 = "http://" + v3;
      if ( v3.contains("$ASIN") )
        v3 = v3.replace("$ASIN", v2);
      if ( v3.contains("$DEVICE") )
      {
        if ( d.booleanValue() )
          v3 = v3.replace("$DEVICE", "device=android_browser&");
        else
          v3 = v3.replace("$DEVICE", "");
      }
      return v3.replace("$SUBTAG", bo.b());
    }

    public void a(android.view.View p0)
    {
      String v2;
      String[] v3;
      try
      {
        if ( b != null && b.isShown() )
          c$a.a(b).removeView(b);
        this.e = this.a(this.a);
        v2 = bq.e(this.e);
        if ( v2.charAt(v2.length() - 1) == 63 )
          v2 = v2.substring(0, v2.length() - 1);
        p.a(c, "Original URL : " + this.e + ". New UDP URL" + v2);
        b = new com.amazon.device.associates.c$a(bo.a(), this.e, this.i);
        if ( this.e() )
        {
          b.a(p0);
          c$a.b(b).loadUrl(v2);
          v3 = new String[3];
          v3[0] = bq.a(this.e, "tag");
          v3[1] = bq.a(this.e, "linkCode");
          v3[2] = this.a;
          new com.amazon.device.associates.o().execute(v3);
        }
        else
        {
          bq.d(c$a.a(b, v2));
        }
      }
      catch ( Exception e )
      {
        p.b(c, "Error displaying product detail popover");
      }
    }

}

// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.billing.common;

public final class c {
    // Fields
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;
    private java.lang.String j;

    // Methods
    public c()
    {
      super();
      this.a = null;
      this.b = null;
      this.c = null;
      this.d = null;
      this.e = null;
      this.f = null;
      this.g = null;
      this.h = null;
      this.i = null;
      this.j = null;
    }

    private String a()
    {
      return this.j;
    }

    private void a(String p0)
    {
      this.j = p0;
    }

    private void b(String p0)
    {
      this.a = p0;
    }

    private boolean b()
    {
      boolean v1;
      v1 = false;
      if ( this.j != null )
        return this.j.split("\\@").length == 2;
      return v1;
    }

    private String c()
    {
      return this.a;
    }

    private void c(String p0)
    {
      this.b = p0;
    }

    private void d(String p0)
    {
      this.c = p0;
    }

    private boolean d()
    {
      return this.a != null && this.a.length() > 3;
    }

    private String e()
    {
      return this.b;
    }

    private void e(String p0)
    {
      this.d = p0;
    }

    private void f(String p0)
    {
      this.e = p0;
    }

    private boolean f()
    {
      return this.b != null && this.b.length() > 3;
    }

    private String g()
    {
      if ( this.c != null && this.d != null && this.e != null && this.f != null )
        return this.c + this.d + this.e + this.f;
      else
        return null;
    }

    private void g(String p0)
    {
      this.f = p0;
    }

    private String h()
    {
      if ( this.f != null )
        return this.f;
      else
        return null;
    }

    private void h(String p0)
    {
      this.g = p0;
    }

    private String i()
    {
      return this.c;
    }

    private void i(String p0)
    {
      this.h = p0;
    }

    private String j()
    {
      return this.d;
    }

    private void j(String p0)
    {
      this.i = p0;
    }

    private String k()
    {
      return this.e;
    }

    private String l()
    {
      return this.f;
    }

    private boolean m()
    {
      return this.g() != null && this.g().length() >= 16;
    }

    private String n()
    {
      return this.g;
    }

    private String o()
    {
      if ( this.g != null && this.h != null && this.h.length() >= 4 )
        return this.g + this.h.substring(2, 4);
      else
        return null;
    }

    private String p()
    {
      return this.h;
    }

    private boolean q()
    {
      return this.o() != null && this.o().length() >= 4;
    }

    private String r()
    {
      return this.i;
    }

    private boolean s()
    {
      return this.i != null && this.i.length() >= 3;
    }

    private boolean t()
    {
      boolean v1;
      int v3;
      int v4;
      v1 = true;
      if ( this.g() == null || this.g().length() < 16 )
        return false;
      v3 = this.o() != null && this.o().length() >= 4 ? 1 : 0;
      if ( v3 == 0 )
        return false;
      v4 = this.i != null && this.i.length() >= 3 ? 1 : 0;
      if ( v4 == 0 )
        return false;
      return v1;
    }

    private boolean u()
    {
      boolean v1;
      int v2;
      v1 = true;
      if ( !this.t() || !this.b() || !this.f() )
        return false;
      v2 = this.a != null && this.a.length() > 3 ? 1 : 0;
      if ( v2 == 0 )
        return false;
      return v1;
    }

    private boolean v()
    {
      return this.t() && this.b() && this.f();
    }

}

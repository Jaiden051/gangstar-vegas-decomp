// Decompiled from classes.dex (SourceFile: aj.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

class aj implements com.google.android.gms.analytics.j {
    // Fields
    java.lang.String a;
    double b;
    int c;
    int d;
    int e;
    int f;
    java.util.Map g;

    // Methods
    aj()
    {
      super();
      this.b = -1.0;
      this.c = -1;
      this.d = -1;
      this.e = -1;
      this.f = -1;
      this.g = new java.util.HashMap();
    }

    private String a(String p0)
    {
      String v2;
      v2 = (String)this.g.get(p0);
      if ( v2 == null )
        return p0;
      return v2;
    }

    public final String a(android.app.Activity p0)
    {
      String CanonicalName;
      String v3;
      CanonicalName = p0.getClass().getCanonicalName();
      v3 = (String)this.g.get(CanonicalName);
      if ( v3 == null )
        return CanonicalName;
      return v3;
    }

    public final boolean a()
    {
      return this.a != null;
    }

    public final String b()
    {
      return this.a;
    }

    public final boolean c()
    {
      return this.b >= 0.0;
    }

    public final double d()
    {
      return this.b;
    }

    public final boolean e()
    {
      return this.c >= 0;
    }

    public final int f()
    {
      return this.c;
    }

    public final boolean g()
    {
      return this.d != -1;
    }

    public final boolean h()
    {
      return this.d == 1;
    }

    public final boolean i()
    {
      return this.e != -1;
    }

    public final boolean j()
    {
      return this.e == 1;
    }

    public final boolean k()
    {
      return this.f == 1;
    }

}

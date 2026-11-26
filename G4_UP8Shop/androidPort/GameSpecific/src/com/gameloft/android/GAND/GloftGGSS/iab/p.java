// Decompiled from classes.dex (SourceFile: p.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

class p {
    // Fields
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.Double c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;
    private java.lang.String j;
    private java.lang.String k;

    // Methods
    public p()
    {
      super();
    }

    public p(String p0)
    {
      super();
      org.json.JSONObject v2;
      try
      {
        v2 = new org.json.JSONObject(p0);
        this.a = v2.getString("mItemId");
        this.b = v2.getString("mItemName");
        this.c = Double.valueOf(Double.parseDouble(v2.getString("mItemPrice")));
        this.e = v2.getString("mCurrencyUnit");
        this.f = v2.getString("mItemDesc");
        this.g = v2.getString("mItemImageUrl");
        this.h = v2.getString("mItemDownloadUrl");
        this.i = v2.getString("mReserved1");
        this.j = v2.getString("mReserved2");
        this.d = v2.getString("mItemPriceString");
        this.k = v2.getString("mType");
      }
      catch ( org.json.JSONException e )
      {
      }
    
    }

    private String a()
    {
      return this.b;
    }

    private Double d()
    {
      return this.c;
    }

    private String e()
    {
      return this.d;
    }

    private String f()
    {
      return this.e;
    }

    private String g()
    {
      return this.f;
    }

    private String h()
    {
      return this.g;
    }

    private String i()
    {
      return this.h;
    }

    private String j()
    {
      return this.i;
    }

    private String k()
    {
      return this.j;
    }

    public final void a(Double p0)
    {
      this.c = p0;
    }

    public final void a(String p0)
    {
      this.a = p0;
    }

    public final String b()
    {
      return this.a;
    }

    public final void b(String p0)
    {
      this.b = p0;
    }

    public final String c()
    {
      return this.k;
    }

    public final void c(String p0)
    {
      this.d = p0;
    }

    public final void d(String p0)
    {
      this.e = p0;
    }

    public final void e(String p0)
    {
      this.f = p0;
    }

    public final void f(String p0)
    {
      this.g = p0;
    }

    public final void g(String p0)
    {
      this.h = p0;
    }

    public final void h(String p0)
    {
      this.i = p0;
    }

    public final void i(String p0)
    {
      this.j = p0;
    }

    public final void j(String p0)
    {
      this.k = p0;
    }

}

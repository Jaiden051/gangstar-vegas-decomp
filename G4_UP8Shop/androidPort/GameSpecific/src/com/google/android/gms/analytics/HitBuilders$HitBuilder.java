// Decompiled from classes.dex (SourceFile: HitBuilders$HitBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

import android.text.TextUtils;
public class HitBuilders$HitBuilder<T extends com.google.android.gms.analytics.HitBuilders$HitBuilder<?>> {
    // Fields
    com.google.android.gms.analytics.ecommerce.ProductAction a;
    java.util.Map b;
    java.util.List c;
    java.util.List d;
    private java.util.Map e;

    // Methods
    protected HitBuilders$HitBuilder()
    {
      super();
      this.e = new java.util.HashMap();
      this.b = new java.util.HashMap();
      this.c = new java.util.ArrayList();
      this.d = new java.util.ArrayList();
    }

    private T a(int p0, float p1)
    {
      this.a(o.t(p0), Float.toString(p1));
      return (T)this;
    }

    private T a(int p0, String p1)
    {
      this.a(o.s(p0), p1);
      return (T)this;
    }

    private T a(com.google.android.gms.analytics.ecommerce.Product p0)
    {
      if ( p0 != null )
        this.d.add(p0);
      else
        aa.D("product should be non-null");
      return (T)this;
    }

    private T a(com.google.android.gms.analytics.ecommerce.Product p0, String p1)
    {
      if ( p0 != null )
      {
        if ( p1 == null )
          p1 = "";
        if ( !this.b.containsKey(p1) )
          this.b.put(p1, new java.util.ArrayList());
        ((java.util.List)this.b.get(p1)).add(p0);
      }
      else
      {
        aa.D("product should be non-null");
      }
      return (T)this;
    }

    private T a(com.google.android.gms.analytics.ecommerce.ProductAction p0)
    {
      this.a = p0;
      return (T)this;
    }

    private T a(com.google.android.gms.analytics.ecommerce.Promotion p0)
    {
      if ( p0 != null )
        this.c.add(p0);
      else
        aa.D("promotion should be non-null");
      return (T)this;
    }

    private T a(String p0)
    {
      this.e.put("&promoa", p0);
      return (T)this;
    }

    private T a(java.util.Map<String, String> p0)
    {
      u.cP().a(u$a.b);
      if ( p0 != null )
        this.e.putAll(new java.util.HashMap(p0));
      return (T)this;
    }

    private T a(boolean p0)
    {
      this.a("&ni", ak.v(p0));
      return (T)this;
    }

    private T b()
    {
      this.a("&sc", "start");
      return (T)this;
    }

    private T b(String p0)
    {
      this.a("&t", p0);
      return (T)this;
    }

    private String c(String p0)
    {
      return (String)this.e.get(p0);
    }

    public final T a(String p0, String p1)
    {
      u.cP().a(u$a.a);
      if ( p0 != null )
        this.e.put(p0, p1);
      else
        aa.D(" HitBuilder.set() called with a null paramName.");
      return (T)this;
    }

    public java.util.Map<String, String> a()
    {
      java.util.Map v1;
      java.util.Iterator v2;
      int v3;
      java.util.Iterator v4;
      int v5;
      java.util.Iterator v6;
      int v7;
      java.util.Map.Entry v8;
      java.util.List v9;
      String v10;
      java.util.Iterator v11;
      int v12;
      v1 = new java.util.HashMap(this.e);
      if ( this.a != null )
        v1.putAll(this.a.a());
      v2 = this.c.iterator();
      v3 = 1;
      while ( v2.hasNext() )
        v1.putAll(((com.google.android.gms.analytics.ecommerce.Promotion)v2.next()).a(o.v(v3++)));
      v4 = this.d.iterator();
      v5 = 1;
      while ( v4.hasNext() )
        v1.putAll(((com.google.android.gms.analytics.ecommerce.Product)v4.next()).a(o.u(v5++)));
      v6 = this.b.entrySet().iterator();
      v7 = 1;
      while ( v6.hasNext() )
      {
        v8 = (java.util.Map.Entry)v6.next();
        v9 = (java.util.List)v8.getValue();
        v10 = o.x(v7);
        v11 = v9.iterator();
        v12 = 1;
        while ( v11.hasNext() )
          v1.putAll(((com.google.android.gms.analytics.ecommerce.Product)v11.next()).a(v10 + o.w(v12++)));
        if ( !TextUtils.isEmpty((CharSequence)v8.getKey()) )
          v1.put(v10 + "nm", v8.getKey());
        ++v7;
      }
      return v1;
    }

    public final T d(String p0)
    {
      String v2;
      java.util.Map v4;
      u.cP().a(u$a.d);
      v2 = ak.V(p0);
      if ( !TextUtils.isEmpty(v2) )
      {
        v4 = ak.U(v2);
        this.a("&cc", (String)v4.get("utm_content"));
        this.a("&cm", (String)v4.get("utm_medium"));
        this.a("&cn", (String)v4.get("utm_campaign"));
        this.a("&cs", (String)v4.get("utm_source"));
        this.a("&ck", (String)v4.get("utm_term"));
        this.a("&ci", (String)v4.get("utm_id"));
        this.a("&gclid", (String)v4.get("gclid"));
        this.a("&dclid", (String)v4.get("dclid"));
        this.a("&gmob_t", (String)v4.get("gmob_t"));
      }
      return (T)this;
    }

}

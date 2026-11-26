// Decompiled from classes.dex (SourceFile: ProductAction.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics.ecommerce;

import com.google.android.gms.internal.hn;
public class ProductAction {
    // Fields
    public static java.lang.String a;
    public static java.lang.String b;
    public static java.lang.String c;
    public static java.lang.String d;
    public static java.lang.String e;
    public static java.lang.String f;
    public static java.lang.String g;
    public static java.lang.String h;
    java.util.Map i;

    // Methods
    private ProductAction(String p0)
    {
      super();
      this.i = new java.util.HashMap();
      this.a("&pa", p0);
    }

    private com.google.android.gms.analytics.ecommerce.ProductAction a(double p0)
    {
      this.a("&tr", Double.toString(p0));
      return this;
    }

    private com.google.android.gms.analytics.ecommerce.ProductAction a(int p0)
    {
      this.a("&cos", Integer.toString(p0));
      return this;
    }

    private com.google.android.gms.analytics.ecommerce.ProductAction a(String p0)
    {
      this.a("&ti", p0);
      return this;
    }

    private void a(String p0, String p1)
    {
      hn.b(p0, "Name should be non-null");
      this.i.put(p0, p1);
    }

    private com.google.android.gms.analytics.ecommerce.ProductAction b(double p0)
    {
      this.a("&tt", Double.toString(p0));
      return this;
    }

    private com.google.android.gms.analytics.ecommerce.ProductAction b(String p0)
    {
      this.a("&ta", p0);
      return this;
    }

    private com.google.android.gms.analytics.ecommerce.ProductAction c(double p0)
    {
      this.a("&ts", Double.toString(p0));
      return this;
    }

    private com.google.android.gms.analytics.ecommerce.ProductAction c(String p0)
    {
      this.a("&tcc", p0);
      return this;
    }

    private com.google.android.gms.analytics.ecommerce.ProductAction d(String p0)
    {
      this.a("&col", p0);
      return this;
    }

    private com.google.android.gms.analytics.ecommerce.ProductAction e(String p0)
    {
      this.a("&pal", p0);
      return this;
    }

    private com.google.android.gms.analytics.ecommerce.ProductAction f(String p0)
    {
      this.a("&pls", p0);
      return this;
    }

    public final java.util.Map<String, String> a()
    {
      return new java.util.HashMap(this.i);
    }

}

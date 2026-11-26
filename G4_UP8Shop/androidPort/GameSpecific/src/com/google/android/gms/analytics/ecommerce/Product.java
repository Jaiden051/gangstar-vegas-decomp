// Decompiled from classes.dex (SourceFile: Product.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics.ecommerce;

import com.google.android.gms.analytics.o;
import com.google.android.gms.internal.hn;
public class Product {
    // Fields
    java.util.Map a;

    // Methods
    public Product()
    {
      super();
      this.a = new java.util.HashMap();
    }

    private com.google.android.gms.analytics.ecommerce.Product a(double p0)
    {
      this.a("pr", Double.toString(p0));
      return this;
    }

    private com.google.android.gms.analytics.ecommerce.Product a(int p0)
    {
      this.a("ps", Integer.toString(p0));
      return this;
    }

    private com.google.android.gms.analytics.ecommerce.Product a(int p0, int p1)
    {
      this.a(o.z(p0), Integer.toString(p1));
      return this;
    }

    private com.google.android.gms.analytics.ecommerce.Product a(int p0, String p1)
    {
      this.a(o.y(p0), p1);
      return this;
    }

    private void a(String p0, String p1)
    {
      hn.b(p0, "Name should be non-null");
      this.a.put(p0, p1);
    }

    private com.google.android.gms.analytics.ecommerce.Product b(int p0)
    {
      this.a("qt", Integer.toString(p0));
      return this;
    }

    private com.google.android.gms.analytics.ecommerce.Product b(String p0)
    {
      this.a("id", p0);
      return this;
    }

    private com.google.android.gms.analytics.ecommerce.Product c(String p0)
    {
      this.a("nm", p0);
      return this;
    }

    private com.google.android.gms.analytics.ecommerce.Product d(String p0)
    {
      this.a("br", p0);
      return this;
    }

    private com.google.android.gms.analytics.ecommerce.Product e(String p0)
    {
      this.a("ca", p0);
      return this;
    }

    private com.google.android.gms.analytics.ecommerce.Product f(String p0)
    {
      this.a("va", p0);
      return this;
    }

    private com.google.android.gms.analytics.ecommerce.Product g(String p0)
    {
      this.a("cc", p0);
      return this;
    }

    public final java.util.Map<String, String> a(String p0)
    {
      java.util.Map v2;
      java.util.Iterator v3;
      java.util.Map.Entry v4;
      v2 = new java.util.HashMap();
      v3 = this.a.entrySet().iterator();
      while ( v3.hasNext() )
      {
        v4 = (java.util.Map.Entry)v3.next();
        v2.put(p0 + (String)v4.getKey(), v4.getValue());
      }
      return v2;
    }

}

// Decompiled from classes.dex (SourceFile: Promotion.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics.ecommerce;

import com.google.android.gms.internal.hn;
public class Promotion {
    // Fields
    public static java.lang.String a;
    public static java.lang.String b;
    java.util.Map c;

    // Methods
    public Promotion()
    {
      super();
      this.c = new java.util.HashMap();
    }

    private void a(String p0, String p1)
    {
      hn.b(p0, "Name should be non-null");
      this.c.put(p0, p1);
    }

    private com.google.android.gms.analytics.ecommerce.Promotion b(String p0)
    {
      this.a("id", p0);
      return this;
    }

    private com.google.android.gms.analytics.ecommerce.Promotion c(String p0)
    {
      this.a("nm", p0);
      return this;
    }

    private com.google.android.gms.analytics.ecommerce.Promotion d(String p0)
    {
      this.a("cr", p0);
      return this;
    }

    private com.google.android.gms.analytics.ecommerce.Promotion e(String p0)
    {
      this.a("ps", p0);
      return this;
    }

    public final java.util.Map<String, String> a(String p0)
    {
      java.util.Map v2;
      java.util.Iterator v3;
      java.util.Map.Entry v4;
      v2 = new java.util.HashMap();
      v3 = this.c.entrySet().iterator();
      while ( v3.hasNext() )
      {
        v4 = (java.util.Map.Entry)v3.next();
        v2.put(p0 + (String)v4.getKey(), v4.getValue());
      }
      return v2;
    }

}

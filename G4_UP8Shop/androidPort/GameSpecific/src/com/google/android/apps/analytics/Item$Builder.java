// Decompiled from classes.dex (SourceFile: Item$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.apps.analytics;

public class Item$Builder {
    // Fields
    private final java.lang.String a;
    private final java.lang.String b;
    private final double c;
    private final long d;
    private java.lang.String e;
    private java.lang.String f;

    // Methods
    public Item$Builder(String p0, String p1, double p2, long p4)
    {
      super();
      this.e = null;
      this.f = null;
      if ( p0 == null || p0.trim().length() == 0 )
        throw new IllegalArgumentException("orderId must not be empty or null");
      if ( p1 == null || p1.trim().length() == 0 )
        throw new IllegalArgumentException("itemSKU must not be empty or null");
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p4;
    }

    /* synthetic */ static String access$000(com.google.android.apps.analytics.Item$Builder p0)
    {
      return p0.a;
    }

    /* synthetic */ static String access$100(com.google.android.apps.analytics.Item$Builder p0)
    {
      return p0.b;
    }

    /* synthetic */ static double access$200(com.google.android.apps.analytics.Item$Builder p0)
    {
      return p0.c;
    }

    /* synthetic */ static long access$300(com.google.android.apps.analytics.Item$Builder p0)
    {
      return p0.d;
    }

    /* synthetic */ static String access$400(com.google.android.apps.analytics.Item$Builder p0)
    {
      return p0.e;
    }

    /* synthetic */ static String access$500(com.google.android.apps.analytics.Item$Builder p0)
    {
      return p0.f;
    }

    public final com.google.android.apps.analytics.Item$Builder a(String p0)
    {
      this.e = p0;
      return this;
    }

    public final com.google.android.apps.analytics.Item a()
    {
      return new com.google.android.apps.analytics.Item(this, 0);
    }

    public final com.google.android.apps.analytics.Item$Builder b(String p0)
    {
      this.f = p0;
      return this;
    }

}

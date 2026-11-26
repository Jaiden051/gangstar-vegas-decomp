// Decompiled from classes.dex (SourceFile: Transaction$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.apps.analytics;

public class Transaction$Builder {
    // Fields
    private final java.lang.String a;
    private java.lang.String b;
    private final double c;
    private double d;
    private double e;

    // Methods
    public Transaction$Builder(String p0, double p1)
    {
      super();
      this.b = null;
      this.d = 0.0;
      this.e = 0.0;
      if ( p0 == null || p0.trim().length() == 0 )
        throw new IllegalArgumentException("orderId must not be empty or null");
      this.a = p0;
      this.c = p1;
    }

    /* synthetic */ static String access$000(com.google.android.apps.analytics.Transaction$Builder p0)
    {
      return p0.a;
    }

    /* synthetic */ static double access$100(com.google.android.apps.analytics.Transaction$Builder p0)
    {
      return p0.c;
    }

    /* synthetic */ static String access$200(com.google.android.apps.analytics.Transaction$Builder p0)
    {
      return p0.b;
    }

    /* synthetic */ static double access$300(com.google.android.apps.analytics.Transaction$Builder p0)
    {
      return p0.d;
    }

    /* synthetic */ static double access$400(com.google.android.apps.analytics.Transaction$Builder p0)
    {
      return p0.e;
    }

    public final com.google.android.apps.analytics.Transaction$Builder a(double p0)
    {
      this.d = p0;
      return this;
    }

    public final com.google.android.apps.analytics.Transaction$Builder a(String p0)
    {
      this.b = p0;
      return this;
    }

    public final com.google.android.apps.analytics.Transaction a()
    {
      return new com.google.android.apps.analytics.Transaction(this, 0);
    }

    public final com.google.android.apps.analytics.Transaction$Builder b(double p0)
    {
      this.e = p0;
      return this;
    }

}

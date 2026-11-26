// Decompiled from classes.dex (SourceFile: HitBuilders$TransactionBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

public class HitBuilders$TransactionBuilder extends com.google.android.gms.analytics.HitBuilders$HitBuilder {
    // Methods
    public HitBuilders$TransactionBuilder()
    {
      super();
      u.cP().a(u$a.G);
      this.a("&t", "transaction");
    }

    private com.google.android.gms.analytics.HitBuilders$TransactionBuilder a(double p0)
    {
      this.a("&tr", Double.toString(p0));
      return this;
    }

    private com.google.android.gms.analytics.HitBuilders$TransactionBuilder a(String p0)
    {
      this.a("&ti", p0);
      return this;
    }

    private com.google.android.gms.analytics.HitBuilders$TransactionBuilder b(double p0)
    {
      this.a("&tt", Double.toString(p0));
      return this;
    }

    private com.google.android.gms.analytics.HitBuilders$TransactionBuilder b(String p0)
    {
      this.a("&ta", p0);
      return this;
    }

    private com.google.android.gms.analytics.HitBuilders$TransactionBuilder c(double p0)
    {
      this.a("&ts", Double.toString(p0));
      return this;
    }

    private com.google.android.gms.analytics.HitBuilders$TransactionBuilder c(String p0)
    {
      this.a("&cu", p0);
      return this;
    }



}

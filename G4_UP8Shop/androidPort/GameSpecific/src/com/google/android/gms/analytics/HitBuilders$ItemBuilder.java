// Decompiled from classes.dex (SourceFile: HitBuilders$ItemBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

public class HitBuilders$ItemBuilder extends com.google.android.gms.analytics.HitBuilders$HitBuilder {
    // Methods
    public HitBuilders$ItemBuilder()
    {
      super();
      u.cP().a(u$a.Z);
      this.a("&t", "item");
    }

    private com.google.android.gms.analytics.HitBuilders$ItemBuilder a(double p0)
    {
      this.a("&ip", Double.toString(p0));
      return this;
    }

    private com.google.android.gms.analytics.HitBuilders$ItemBuilder a(long p0)
    {
      this.a("&iq", Long.toString(p0));
      return this;
    }

    private com.google.android.gms.analytics.HitBuilders$ItemBuilder a(String p0)
    {
      this.a("&ti", p0);
      return this;
    }

    private com.google.android.gms.analytics.HitBuilders$ItemBuilder b(String p0)
    {
      this.a("&in", p0);
      return this;
    }

    private com.google.android.gms.analytics.HitBuilders$ItemBuilder c(String p0)
    {
      this.a("&ic", p0);
      return this;
    }

    private com.google.android.gms.analytics.HitBuilders$ItemBuilder e(String p0)
    {
      this.a("&iv", p0);
      return this;
    }

    private com.google.android.gms.analytics.HitBuilders$ItemBuilder f(String p0)
    {
      this.a("&cu", p0);
      return this;
    }



}

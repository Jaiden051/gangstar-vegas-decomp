// Decompiled from classes.dex (SourceFile: HitBuilders$TimingBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

public class HitBuilders$TimingBuilder extends com.google.android.gms.analytics.HitBuilders$HitBuilder {
    // Methods
    public HitBuilders$TimingBuilder()
    {
      super();
      u.cP().a(u$a.J);
      this.a("&t", "timing");
    }

    private HitBuilders$TimingBuilder(String p0, String p1, long p2)
    {
      this();
      this.a(p1);
      this.a(p2);
      this.b(p0);
    }

    public final com.google.android.gms.analytics.HitBuilders$TimingBuilder a(long p0)
    {
      this.a("&utt", Long.toString(p0));
      return this;
    }

    public final com.google.android.gms.analytics.HitBuilders$TimingBuilder a(String p0)
    {
      this.a("&utv", p0);
      return this;
    }



    public final com.google.android.gms.analytics.HitBuilders$TimingBuilder b(String p0)
    {
      this.a("&utc", p0);
      return this;
    }

    public final com.google.android.gms.analytics.HitBuilders$TimingBuilder c(String p0)
    {
      this.a("&utl", p0);
      return this;
    }

}

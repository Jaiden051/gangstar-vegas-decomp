// Decompiled from classes.dex (SourceFile: HitBuilders$EventBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

public class HitBuilders$EventBuilder extends com.google.android.gms.analytics.HitBuilders$HitBuilder {
    // Methods
    public HitBuilders$EventBuilder()
    {
      super();
      u.cP().a(u$a.Y);
      this.a("&t", "event");
    }

    private HitBuilders$EventBuilder(String p0, String p1)
    {
      this();
      this.a(p0);
      this.b(p1);
    }

    public final com.google.android.gms.analytics.HitBuilders$EventBuilder a(long p0)
    {
      this.a("&ev", Long.toString(p0));
      return this;
    }

    public final com.google.android.gms.analytics.HitBuilders$EventBuilder a(String p0)
    {
      this.a("&ec", p0);
      return this;
    }



    public final com.google.android.gms.analytics.HitBuilders$EventBuilder b(String p0)
    {
      this.a("&ea", p0);
      return this;
    }

    public final com.google.android.gms.analytics.HitBuilders$EventBuilder c(String p0)
    {
      this.a("&el", p0);
      return this;
    }

}

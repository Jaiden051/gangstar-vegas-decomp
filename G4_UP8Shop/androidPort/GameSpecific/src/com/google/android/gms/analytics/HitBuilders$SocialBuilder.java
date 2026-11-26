// Decompiled from classes.dex (SourceFile: HitBuilders$SocialBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

public class HitBuilders$SocialBuilder extends com.google.android.gms.analytics.HitBuilders$HitBuilder {
    // Methods
    public HitBuilders$SocialBuilder()
    {
      super();
      u.cP().a(u$a.K);
      this.a("&t", "social");
    }

    private com.google.android.gms.analytics.HitBuilders$SocialBuilder a(String p0)
    {
      this.a("&sn", p0);
      return this;
    }

    private com.google.android.gms.analytics.HitBuilders$SocialBuilder b(String p0)
    {
      this.a("&sa", p0);
      return this;
    }

    private com.google.android.gms.analytics.HitBuilders$SocialBuilder c(String p0)
    {
      this.a("&st", p0);
      return this;
    }



}

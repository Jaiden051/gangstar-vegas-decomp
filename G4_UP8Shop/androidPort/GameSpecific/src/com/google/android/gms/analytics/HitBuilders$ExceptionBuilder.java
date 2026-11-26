// Decompiled from classes.dex (SourceFile: HitBuilders$ExceptionBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

public class HitBuilders$ExceptionBuilder extends com.google.android.gms.analytics.HitBuilders$HitBuilder {
    // Methods
    public HitBuilders$ExceptionBuilder()
    {
      super();
      u.cP().a(u$a.H);
      this.a("&t", "exception");
    }

    public final com.google.android.gms.analytics.HitBuilders$ExceptionBuilder a(String p0)
    {
      this.a("&exd", p0);
      return this;
    }

    public final com.google.android.gms.analytics.HitBuilders$ExceptionBuilder a(boolean p0)
    {
      this.a("&exf", ak.v(true));
      return this;
    }



}

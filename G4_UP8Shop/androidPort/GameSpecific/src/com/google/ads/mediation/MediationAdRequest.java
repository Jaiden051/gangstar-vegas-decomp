// Decompiled from classes.dex (SourceFile: MediationAdRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.ads.mediation;

public final class MediationAdRequest {
    // Fields
    private final java.util.Date a;
    private final com.google.ads.AdRequest$Gender b;
    private final java.util.Set c;
    private final boolean d;
    private final android.location.Location e;

    // Methods
    public MediationAdRequest(
            java.util.Date p0,
            com.google.ads.AdRequest$Gender p1,
            java.util.Set<String> p2,
            boolean p3,
            android.location.Location p4)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
    }

    private java.util.Date a()
    {
      return this.a;
    }

    private com.google.ads.AdRequest$Gender b()
    {
      return this.b;
    }

    private java.util.Set<String> c()
    {
      return this.c;
    }

    private android.location.Location d()
    {
      return this.e;
    }

    private boolean e()
    {
      return this.d;
    }

    private static Integer getAgeInYears()
    {
      return null;
    }

}

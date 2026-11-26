// Decompiled from classes.dex (SourceFile: AdRequest$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.ads;

import com.google.android.gms.internal.hn;
public final class AdRequest$Builder {
    // Fields
    private final com.google.android.gms.internal.au$a a;

    // Methods
    public AdRequest$Builder()
    {
      super();
      this.a = new com.google.android.gms.internal.au$a();
    }

    private com.google.android.gms.ads.AdRequest$Builder a(android.location.Location p0)
    {
      this.a.a(p0);
      return this;
    }

    private com.google.android.gms.ads.AdRequest$Builder a(
            com.google.android.gms.ads.mediation.NetworkExtras p0)
    {
      this.a.a(p0);
      return this;
    }

    /* synthetic */ static com.google.android.gms.internal.au$a a(
            com.google.android.gms.ads.AdRequest$Builder p0)
    {
      return p0.a;
    }

    private com.google.android.gms.ads.AdRequest$Builder b(
            Class<? extends com.google.android.gms.ads.mediation.customevent.CustomEvent> p0,
            android.os.Bundle p1)
    {
      this.a.b(p0, p1);
      return this;
    }

    private com.google.android.gms.ads.AdRequest$Builder c(String p0)
    {
      boolean v2;
      Object[] v3;
      hn.b(p0, "Content URL must be non-null.");
      hn.b(p0, "Content URL must be non-empty.");
      v2 = p0.length() <= 512;
      v3 = new Object[2];
      v3[0] = Integer.valueOf(512);
      v3[1] = Integer.valueOf(p0.length());
      hn.b(v2, "Content URL must not exceed %d in length.  Provided length was %d.", v3);
      this.a.c(p0);
      return this;
    }

    public final com.google.android.gms.ads.AdRequest$Builder a(int p0)
    {
      this.a.a(p0);
      return this;
    }

    public final com.google.android.gms.ads.AdRequest$Builder a(
            Class<? extends com.google.android.gms.ads.mediation.MediationAdapter> p0,
            android.os.Bundle p1)
    {
      this.a.a(p0, p1);
      return this;
    }

    public final com.google.android.gms.ads.AdRequest$Builder a(String p0)
    {
      this.a.a(p0);
      return this;
    }

    public final com.google.android.gms.ads.AdRequest$Builder a(java.util.Date p0)
    {
      this.a.a(p0);
      return this;
    }

    public final com.google.android.gms.ads.AdRequest$Builder a(boolean p0)
    {
      this.a.b(p0);
      return this;
    }

    public final com.google.android.gms.ads.AdRequest a()
    {
      return new com.google.android.gms.ads.AdRequest(this, 0);
    }

    public final com.google.android.gms.ads.AdRequest$Builder b(String p0)
    {
      this.a.b(p0);
      return this;
    }

}

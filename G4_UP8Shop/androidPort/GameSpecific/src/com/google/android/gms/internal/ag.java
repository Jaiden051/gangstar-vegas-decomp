// Decompiled from classes.dex (SourceFile: ag.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class ag implements com.google.android.gms.internal.af {
    // Fields
    private final com.google.android.gms.internal.ey a;

    // Methods
    public ag(android.content.Context p0, com.google.android.gms.internal.ew p1)
    {
      super();
      this.a = ey.a(p0, new com.google.android.gms.internal.am(), false, false, null, p1);
    }

    public final void a()
    {
      ep.a(this.a);
    }

    public final void a(com.google.android.gms.internal.af$a p0)
    {
      this.a.f().a((com.google.android.gms.internal.ez$a)new com.google.android.gms.internal.ag$1(this, p0));
    }

    public final void a(String p0)
    {
      this.a.loadUrl(p0);
    }

    public final void a(String p0, com.google.android.gms.internal.bd p1)
    {
      this.a.f().a(p0, p1);
    }

    public final void a(String p0, org.json.JSONObject p1)
    {
      this.a.a(p0, p1);
    }

    public final void b()
    {
      ep.b(this.a);
    }

    public final void b(String p0)
    {
      this.a.f().a(p0, null);
    }

}

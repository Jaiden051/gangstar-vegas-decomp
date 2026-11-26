// Decompiled from classes.dex (SourceFile: v$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

class v$a implements com.google.android.gms.analytics.k$a {
    // Fields
    private final com.google.android.gms.analytics.w a;

    // Methods
    public v$a()
    {
      super();
      this.a = new com.google.android.gms.analytics.w();
    }

    private com.google.android.gms.analytics.w b()
    {
      return this.a;
    }

    /* synthetic */ public final com.google.android.gms.analytics.j a()
    {
      return (com.google.android.gms.analytics.j)this.a;
    }

    public final void a(String p0, int p1)
    {
      if ( "ga_dispatchPeriod".equals(p0) )
        this.a.d = p1;
      else
        aa.D("int configuration name not recognized:  " + p0);
    }

    public final void a(String p0, String p1)
    {
      ;
    }

    public final void a(String p0, boolean p1)
    {
      if ( "ga_dryRun".equals(p0) )
        this.a.e = p1 ? 1 : 0;
      else
        aa.D("bool configuration name not recognized:  " + p0);
    }

    public final void b(String p0, String p1)
    {
      if ( "ga_appName".equals(p0) )
      {
        this.a.a = p1;
      }
      else if ( "ga_appVersion".equals(p0) )
      {
        this.a.b = p1;
      }
      else if ( "ga_logLevel".equals(p0) )
      {
        this.a.c = p1;
      }
      else
      {
        aa.D("string configuration name not recognized:  " + p0);
      }
    }

}

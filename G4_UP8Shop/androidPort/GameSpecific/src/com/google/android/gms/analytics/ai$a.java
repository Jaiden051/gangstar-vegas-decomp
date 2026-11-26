// Decompiled from classes.dex (SourceFile: ai$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

class ai$a implements com.google.android.gms.analytics.k$a {
    // Fields
    private final com.google.android.gms.analytics.aj a;

    // Methods
    public ai$a()
    {
      super();
      this.a = new com.google.android.gms.analytics.aj();
    }

    private com.google.android.gms.analytics.aj b()
    {
      return this.a;
    }

    /* synthetic */ public final com.google.android.gms.analytics.j a()
    {
      return (com.google.android.gms.analytics.j)this.a;
    }

    public final void a(String p0, int p1)
    {
      if ( "ga_sessionTimeout".equals(p0) )
        this.a.c = p1;
      else
        aa.D("int configuration name not recognized:  " + p0);
    }

    public final void a(String p0, String p1)
    {
      this.a.g.put(p0, p1);
    }

    public final void a(String p0, boolean p1)
    {
      if ( "ga_autoActivityTracking".equals(p0) )
      {
        this.a.d = p1 ? 1 : 0;
      }
      else if ( "ga_anonymizeIp".equals(p0) )
      {
        this.a.e = p1 ? 1 : 0;
      }
      else if ( "ga_reportUncaughtExceptions".equals(p0) )
      {
        this.a.f = p1 ? 1 : 0;
      }
      else
      {
        aa.D("bool configuration name not recognized:  " + p0);
      }
    }

    public final void b(String p0, String p1)
    {
      if ( "ga_trackingId".equals(p0) )
      {
        this.a.a = p1;
      }
      else if ( "ga_sampleFrequency".equals(p0) )
      {
        try
        {
          this.a.b = Double.parseDouble(p1);
        }
        catch ( NumberFormatException e )
        {
          aa.A("Error parsing ga_sampleFrequency value: " + p1);
        }
      }
      else
      {
        aa.D("string configuration name not recognized:  " + p0);
      }
    }

}

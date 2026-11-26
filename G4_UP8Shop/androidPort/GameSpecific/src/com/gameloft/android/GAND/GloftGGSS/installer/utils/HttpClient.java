// Decompiled from classes.dex (SourceFile: HttpClient.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer.utils;

public class HttpClient implements com.gameloft.android.GAND.GloftGGSS.installer.utils.c {
    // Fields
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    java.net.HttpURLConnection e;
    private boolean f;

    // Methods
    static
    {
      c = 60000;
      d = 180000;
    }

    public HttpClient()
    {
      super();
      this.f = false;
    }

    private String a(int p0)
    {
      String HeaderField;
      HeaderField = this.e.getHeaderField(p0);
      if ( HeaderField == null )
        return "";
      return HeaderField;
    }

    /* synthetic */ static boolean access$002(
            com.gameloft.android.GAND.GloftGGSS.installer.utils.HttpClient p0,
            boolean p1)
    {
      p0.f = p1;
      return p1;
    }

    private long b()
    {
      long v1;
      v1 = 0;
      if ( this.e != null )
      {
        try
        {
          return Long.parseLong(this.e.getHeaderField("Content-Length"));
        }
        catch ( Exception e )
        {
          return -1;
        }
      }
      return v1;
    }

    private long c(String p0)
 throws java.io.IOException, java.net.MalformedURLException {
      java.net.HttpURLConnection v2;
      v2 = (java.net.HttpURLConnection)new java.net.URL(p0).openConnection();
      this.e = v2;
      try
      {
        return Long.parseLong(this.e.getHeaderField("Content-Length"));
      }
      catch ( Exception e )
      {
        return -1;
      }
    }

    private java.net.URL c()
    {
      if ( this.e != null )
        return this.e.getURL();
      else
        return null;
    }

    private String d(String p0)
    {
      String HeaderField;
      HeaderField = this.e.getHeaderField(p0);
      if ( HeaderField == null )
        return "";
      return HeaderField;
    }

    private void d()
    {
      new com.gameloft.android.GAND.GloftGGSS.installer.utils.h(this).start();
    }

    public static void incrementConnectionTimeout()
    {
      if ( c < 120000 )
        c += 12000;
      if ( d < 360000 )
        d += 36000;
    }

    public final int a(String p0, int p1)
    {
      int v3;
      String v4;
      v3 = -1;
      try
      {
        v4 = this.d(p0);
        if ( v4.compareTo("") != 0 )
          return Integer.parseInt(v4.replace(".", ""));
        return v3;
      }
      catch ( Exception e )
      {
      }
      return v3;
    }

    public final java.io.InputStream a(String p0)
 throws java.io.IOException, java.net.MalformedURLException {
      this.e = (java.net.HttpURLConnection)new java.net.URL(p0.replace(" ", "%20")).openConnection();
      this.e.setConnectTimeout(c);
      this.e.setReadTimeout(d);
      this.e.connect();
      return this.e.getInputStream();
    }

    public final java.io.InputStream a(String p0, long p1, long p3)
 throws java.io.IOException {
      return this.a(p0, p1, 0, 0);
    }

    public final java.io.InputStream a(String p0, long p1, long p3, long p5)
 throws java.io.IOException, java.net.MalformedURLException {
      this.e = (java.net.HttpURLConnection)new java.net.URL(p0.replace(" ", "%20")).openConnection();
      this.e.setConnectTimeout(c);
      this.e.setReadTimeout(d);
      if ( p5 <= 0 )
        this.e.setRequestProperty("Range", "bytes=" + (p3 + p1) + "-");
      else
        this.e.setRequestProperty("Range", "bytes=" + (p3 + p1) + "-" + (p3 + p1 + p5));
      this.e.connect();
      return this.e.getInputStream();
    }

    public final void a()
    {
      this.f = false;
      new com.gameloft.android.GAND.GloftGGSS.installer.utils.h(this).start();
      while ( !this.f )
      {
        try
        {
          Thread.sleep(50);
        }
        catch ( Exception e )
        {
        }
      }
      this.e = null;
    }

    public final boolean a(String p0, boolean p1)
    {
      boolean v3;
      v3 = false;
      this.d(p0);
      if ( this.d(p0).compareToIgnoreCase("no") != 0 && this.d(p0).compareToIgnoreCase("0") != 0 )
      {
        if ( this.d(p0).compareToIgnoreCase("yes") != 0 )
          this.d(p0).compareToIgnoreCase("1");
        return true;
      }
      return v3;
    }

    public final String b(String p0)
    {
      try
      {
        this.e = (java.net.HttpURLConnection)new java.net.URL(p0.replace(" ", "%20")).openConnection();
        this.e.setConnectTimeout(c);
        this.e.setReadTimeout(d);
        this.e.connect();
        this.e.getInputStream();
        return this.e.getURL().toString();
      }
      catch ( Exception e )
      {
        return p0;
      }
    }

}

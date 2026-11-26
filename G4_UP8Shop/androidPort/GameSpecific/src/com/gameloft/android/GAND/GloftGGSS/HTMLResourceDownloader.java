// Decompiled from classes.dex (SourceFile: HTMLResourceDownloader.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

public final class HTMLResourceDownloader {
    // Fields
    public java.util.ArrayList a;
    boolean b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private boolean f;

    // Methods
    public HTMLResourceDownloader(String p0, String p1, String p2)
    {
      super();
      this.f = true;
      this.b = false;
      this.d = p0;
      this.e = p1;
      this.c = p2;
      this.a = new java.util.ArrayList();
    }

    private String a(String p0)
    {
      int v3; // RETVAL
      int v4;
      int i;
      String v6;
      if ( p0.contains("<img") && p0.contains("usemap") )
      {
        v3 = p0.indexOf("http");
        v4 = v3;
        if ( v3 != -1 )
        {
          for ( i = v3; p0.charAt(i) != 34; ++i )
            ;
          v6 = p0.substring(v4, i);
          this.a(v6, this.e + "/" + toLocal(v6));
          return p0.replace(v6, toLocal(v6));
        }
      }
      return p0;
    }

    private void a(String p0, String p1)
    {
      java.io.BufferedInputStream v3;
      java.io.BufferedOutputStream v4;
      int v5; // RETVAL
    
      try
      {
        v3 = new java.io.BufferedInputStream(new java.net.URL(p0).openConnection().getInputStream());
        v4 = new java.io.BufferedOutputStream(new java.io.FileOutputStream(p1));
        while ( true )
        {
          v5 = v3.read();
          if ( v5 == -1 )
            break;
          v4.write(v5);
          this.b = true;
        }
        v4.flush();
        v4.close();
        v3.close();
      }
      catch ( java.io.IOException v6 )
      {
        this.f = true;
        v6.printStackTrace();
      }
    }

    private static String toLocal(String p0)
    {
      return p0.substring(p0.lastIndexOf(47) + 1);
    }

    public final void a()
    {
      int v1;
      java.io.File v2;
      String[] i;
      java.io.PrintWriter v4;
      java.net.HttpURLConnection v5;
      java.io.BufferedReader v6;
      String Line; // RETVAL
      java.io.BufferedReader v9;
      v1 = 0;
      v2 = new java.io.File(this.e);
      v2.mkdirs();
      try
      {
        if ( v2.isDirectory() )
        {
          for ( i = v2.list(); v1 < i.length; new java.io.File(v2, i[v1++]).delete() )
            ;
        }
        v4 = new java.io.PrintWriter(new java.io.FileWriter(this.e + "/" + this.c));
        v5 = (java.net.HttpURLConnection)new java.net.URL(this.d).openConnection();
        if ( v5.getResponseCode() == 200 )
        {
          v6 = new java.io.BufferedReader(new java.io.InputStreamReader(v5.getInputStream()));
          while ( true )
          {
            Line = v6.readLine();
            if ( Line == null )
              break;
            v4.println(this.a(Line));
          }
          v9 = v6;
        }
        else
        {
          this.f = true;
          v9 = null;
        }
        if ( v9 != null )
          v9.close();
        v4.close();
        if ( this.b )
          this.f = false;
      }
      catch ( Exception v8 )
      {
        this.f = true;
        v8.printStackTrace();
      }
    }

    public final boolean b()
    {
      return this.f;
    }

}

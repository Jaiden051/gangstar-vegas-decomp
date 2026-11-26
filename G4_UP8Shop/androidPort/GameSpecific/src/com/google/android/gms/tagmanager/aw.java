// Decompiled from classes.dex (SourceFile: aw.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class aw implements com.google.android.gms.tagmanager.bl {
    // Fields
    private java.net.HttpURLConnection a;

    // Methods
    aw()
    {
      super();
    }

    private static java.io.InputStream a(java.net.HttpURLConnection p0)
 throws java.io.FileNotFoundException, java.io.IOException {
      int ResponseCode; // RETVAL
      int v2;
      String v4; // RETVAL
    
      ResponseCode = p0.getResponseCode();
      v2 = ResponseCode;
      if ( ResponseCode != 200 )
      {
        v4 = "Bad response: " + ResponseCode;
        if ( v2 == 404 )
          throw new java.io.FileNotFoundException(v4);
        throw new java.io.IOException(v4);
      }
      return p0.getInputStream();
    }

    private static void b(java.net.HttpURLConnection p0)
    {
      if ( p0 != null )
        p0.disconnect();
    }

    private static java.net.HttpURLConnection bW(String p0)
 throws java.io.IOException, java.net.MalformedURLException {
      java.net.HttpURLConnection v1;
      v1 = (java.net.HttpURLConnection)new java.net.URL(p0).openConnection();
      v1.setReadTimeout(20000);
      v1.setConnectTimeout(20000);
      return v1;
    }

    public final java.io.InputStream a(String p0)
 throws java.io.FileNotFoundException, java.io.IOException, java.net.MalformedURLException {
      java.net.HttpURLConnection v2;
      java.net.HttpURLConnection a;
      int ResponseCode; // RETVAL
      int v5;
      String v7; // RETVAL
    
      v2 = (java.net.HttpURLConnection)new java.net.URL(p0).openConnection();
      v2.setReadTimeout(20000);
      v2.setConnectTimeout(20000);
      this.a = v2;
      a = this.a;
      ResponseCode = a.getResponseCode();
      v5 = ResponseCode;
      if ( ResponseCode != 200 )
      {
        v7 = "Bad response: " + ResponseCode;
        if ( v5 == 404 )
          throw new java.io.FileNotFoundException(v7);
        throw new java.io.IOException(v7);
      }
      return a.getInputStream();
    }

    public final void a()
    {
      java.net.HttpURLConnection a;
      a = this.a;
      if ( a != null )
        a.disconnect();
    }

}

// Decompiled from classes.dex (SourceFile: av.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import org.apache.http.params.HttpConnectionParams;
class av implements com.google.android.gms.tagmanager.bl {
    // Fields
    private org.apache.http.client.HttpClient a;

    // Methods
    av()
    {
      super();
    }

    private static void a(org.apache.http.client.HttpClient p0)
    {
      if ( p0 != null && p0.getConnectionManager() != null )
        p0.getConnectionManager().shutdown();
    }

    private static java.io.InputStream a$5675ec5e(org.apache.http.HttpResponse p0)
 throws java.io.FileNotFoundException, java.io.IOException {
      int StatusCode; // RETVAL
      int v2;
      String v4; // RETVAL
    
      StatusCode = p0.getStatusLine().getStatusCode();
      v2 = StatusCode;
      if ( StatusCode != 200 )
      {
        v4 = "Bad response: " + StatusCode;
        if ( v2 == 404 )
          throw new java.io.FileNotFoundException(v4);
        throw new java.io.IOException(v4);
      }
      bh.C("Success response");
      return p0.getEntity().getContent();
    }

    private static org.apache.http.client.HttpClient lK()
    {
      org.apache.http.params.BasicHttpParams v0;
      v0 = new org.apache.http.params.BasicHttpParams();
      HttpConnectionParams.setConnectionTimeout(v0, 20000);
      HttpConnectionParams.setSoTimeout(v0, 20000);
      return new org.apache.http.impl.client.DefaultHttpClient(v0);
    }

    public final java.io.InputStream a(String p0)
 throws java.io.FileNotFoundException, java.io.IOException {
      org.apache.http.params.BasicHttpParams v2;
      org.apache.http.HttpResponse v3;
      int StatusCode; // RETVAL
      int v5;
      String v7; // RETVAL
    
      v2 = new org.apache.http.params.BasicHttpParams();
      HttpConnectionParams.setConnectionTimeout(v2, 20000);
      HttpConnectionParams.setSoTimeout(v2, 20000);
      this.a = new org.apache.http.impl.client.DefaultHttpClient(v2);
      v3 = this.a.execute(new org.apache.http.client.methods.HttpGet(p0));
      StatusCode = v3.getStatusLine().getStatusCode();
      v5 = StatusCode;
      if ( StatusCode != 200 )
      {
        v7 = "Bad response: " + StatusCode;
        if ( v5 == 404 )
          throw new java.io.FileNotFoundException(v7);
        throw new java.io.IOException(v7);
      }
      bh.C("Success response");
      return v3.getEntity().getContent();
    }

    public final void a()
    {
      org.apache.http.client.HttpClient a;
      a = this.a;
      if ( a != null && a.getConnectionManager() != null )
        a.getConnectionManager().shutdown();
    }

}

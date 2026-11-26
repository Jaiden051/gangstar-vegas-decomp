// Decompiled from classes.dex (SourceFile: o.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.apps.analytics;

import android.util.Log;
import com.facebook.Response;
import org.apache.http.HttpVersion;
final class o {
    // Fields
    private static int g;
    org.apache.http.impl.DefaultHttpClientConnection a;
    com.google.android.apps.analytics.p b;
    int c;
    boolean d;
    org.apache.http.HttpHost e;
    org.apache.http.conn.scheme.SocketFactory f;

    // Methods
    public o(org.apache.http.HttpHost p0)
    {
      this(p0, new org.apache.http.conn.scheme.PlainSocketFactory());
    }

    private o(org.apache.http.HttpHost p0, org.apache.http.conn.scheme.SocketFactory p1)
    {
      super();
      this.a = new org.apache.http.impl.DefaultHttpClientConnection();
      this.d = true;
      this.e = p0;
      this.f = p1;
    }

    private void c()
 throws java.io.IOException, java.net.SocketException, org.apache.http.conn.ConnectTimeoutException {
      org.apache.http.params.BasicHttpParams v1;
      java.net.Socket v2; // RETVAL
    
      if ( this.a == null || !this.a.isOpen() )
      {
        v1 = new org.apache.http.params.BasicHttpParams();
        v2 = this.f.connectSocket(this.f.createSocket(), this.e.getHostName(), this.e.getPort(), null, 0, v1);
        v2.setReceiveBufferSize(0x2000);
        this.a.bind(v2, v1);
      }
    }

    private void d()
    {
      if ( this.a != null && this.a.isOpen() )
      {
        try
        {
          this.a.close();
        }
        catch ( java.io.IOException e )
        {
        }
      }
    }

    public final void a()
 throws java.io.IOException, org.apache.http.HttpException {
      org.apache.http.HttpConnectionMetrics Metrics;
      org.apache.http.HttpResponse v2;
      org.apache.http.Header[] Headers; // RETVAL
      org.apache.http.Header[] v4;
      int v5;
      int i;
      this.a.flush();
      Metrics = this.a.getMetrics();
      while ( Metrics.getResponseCount() < Metrics.getRequestCount() )
      {
        v2 = this.a.receiveResponseHeader();
        if ( !v2.getStatusLine().getProtocolVersion().greaterEquals(HttpVersion.HTTP_1_1) )
        {
          this.b.a(false);
          this.d = false;
        }
        Headers = v2.getHeaders("Connection");
        v4 = Headers;
        if ( Headers != null )
        {
          v5 = Headers.length;
          for ( i = 0; i < v5; ++i )
          {
            if ( "close".equalsIgnoreCase(v4[i].getValue()) )
            {
              this.b.a(false);
              this.d = false;
            }
          }
        }
        this.c = v2.getStatusLine().getStatusCode();
        if ( this.c != 200 )
        {
          this.b.a(this.c);
          this.d();
          return;
        }
        this.a.receiveResponseEntity(v2);
        v2.getEntity().consumeContent();
        this.b.a();
        if ( GoogleAnalyticsTracker.getInstance().e() )
          Log.v("GoogleAnalyticsTracker", "HTTP Response Code: " + v2.getStatusLine().getStatusCode());
        if ( !this.d )
        {
          this.d();
          return;
        }
      }
    }

    public final void a(com.google.android.apps.analytics.p p0)
    {
      this.b = p0;
    }

    public final void a(org.apache.http.HttpEntityEnclosingRequest p0)
 throws java.io.IOException, java.net.SocketException, org.apache.http.HttpException, org.apache.http.conn.ConnectTimeoutException {
      org.apache.http.params.BasicHttpParams v2;
      java.net.Socket v3; // RETVAL
    
      if ( this.a == null || !this.a.isOpen() )
      {
        v2 = new org.apache.http.params.BasicHttpParams();
        v3 = this.f.connectSocket(this.f.createSocket(), this.e.getHostName(), this.e.getPort(), null, 0, v2);
        v3.setReceiveBufferSize(0x2000);
        this.a.bind(v3, v2);
      }
      this.a.sendRequestHeader(p0);
      this.a.sendRequestEntity(p0);
    }

    public final void b()
    {
      this.d();
    }

}

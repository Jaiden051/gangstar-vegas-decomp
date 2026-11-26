// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.loopj.android.http;

import com.gameloft.android.GAND.GloftGGSS.installer.utils.HttpClient;
final class d implements java.lang.Runnable {
    // Fields
    private final org.apache.http.impl.client.AbstractHttpClient a;
    private final org.apache.http.protocol.HttpContext b;
    private final org.apache.http.client.methods.HttpUriRequest c;
    private final com.loopj.android.http.AsyncHttpResponseHandler d;
    private boolean e;
    private int f;

    // Methods
    public d(
            org.apache.http.impl.client.AbstractHttpClient p0,
            org.apache.http.protocol.HttpContext p1,
            org.apache.http.client.methods.HttpUriRequest p2,
            com.loopj.android.http.AsyncHttpResponseHandler p3)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      if ( p3 instanceof com.loopj.android.http.BinaryHttpResponseHandler )
        this.e = true;
    }

    private void a()
 throws java.io.IOException {
      org.apache.http.HttpResponse v1;
      if ( !Thread.currentThread().isInterrupted() )
      {
        v1 = this.a.execute(this.c, this.b);
        if ( !Thread.currentThread().isInterrupted() && this.d != null )
          this.d.a(v1);
      }
    }

    private void b()
 throws java.net.ConnectException {
      boolean v1;
      Throwable v2;
      org.apache.http.client.HttpRequestRetryHandler HttpRequestRetryHandler;
      org.apache.http.HttpResponse v4;
      int v8;
      java.io.IOException v10;
      int v11;
      java.io.IOException v12;
      java.net.ConnectException v13;
      v1 = true;
      v2 = null;
      HttpRequestRetryHandler = this.a.getHttpRequestRetryHandler();
      while ( true )
      {
        if ( !v1 )
        {
          v13 = new java.net.ConnectException();
          v13.initCause(v2);
          throw v13;
        }
        try
        {
          if ( !Thread.currentThread().isInterrupted() )
          {
            v4 = this.a.execute(this.c, this.b);
            if ( !Thread.currentThread().isInterrupted() && this.d != null )
              this.d.a(v4);
          }
          break;
        }
        catch ( java.net.UnknownHostException v5 )
        {
          if ( this.d != null )
            this.d.b(v5, "can't resolve host");
          break;
        }
        catch ( java.net.SocketException v6 )
        {
          if ( this.d != null )
            this.d.b(v6, "can't resolve host");
          break;
        }
        catch ( java.net.SocketTimeoutException v7 )
        {
          if ( this.d != null )
            this.d.b(v7, "socket time out");
          break;
        }
        catch ( java.io.IOException v14 )
        {
          v2 = v14;
          v8 = this.f + 1;
          this.f = v8;
          v1 = HttpRequestRetryHandler.retryRequest((java.io.IOException)v2, v8, this.b);
          continue;
        }
        catch ( NullPointerException v9 )
        {
          v10 = new java.io.IOException("NPE in HttpClient" + v9.getMessage());
          v11 = this.f + 1;
          this.f = v11;
          v12 = v10;
          v1 = HttpRequestRetryHandler.retryRequest(v10, v11, this.b);
          v2 = v12;
          continue;
        }
      }
    }

    public final void run()
    {
      org.apache.http.client.HttpRequestRetryHandler HttpRequestRetryHandler;
      boolean v2;
      Throwable v3;
      org.apache.http.HttpResponse v4;
      int v9;
      java.io.IOException v11;
      int v12;
      java.io.IOException v13;
      java.net.ConnectException v14;
      try
      {
        if ( this.d != null )
          this.d.a();
        HttpRequestRetryHandler = this.a.getHttpRequestRetryHandler();
        v2 = true;
        v3 = null;
        while ( true )
        {
          if ( !v2 )
          {
            v14 = new java.net.ConnectException();
            v14.initCause(v3);
            throw v14;
          }
          try
          {
            if ( !Thread.currentThread().isInterrupted() )
            {
              v4 = this.a.execute(this.c, this.b);
              if ( !Thread.currentThread().isInterrupted() && this.d != null )
                this.d.a(v4);
            }
            break;
          }
          catch ( java.net.UnknownHostException v5 )
          {
            if ( this.d != null )
              this.d.b(v5, "can't resolve host");
            break;
          }
          catch ( java.net.SocketException v7 )
          {
            if ( this.d != null )
              this.d.b(v7, "can't resolve host");
            break;
          }
          catch ( java.net.SocketTimeoutException v8 )
          {
            if ( this.d != null )
              this.d.b(v8, "socket time out");
            break;
          }
          catch ( java.io.IOException v15 )
          {
            v3 = v15;
            v9 = this.f + 1;
            this.f = v9;
            v2 = HttpRequestRetryHandler.retryRequest((java.io.IOException)v3, v9, this.b);
            continue;
          }
          catch ( NullPointerException v10 )
          {
            v11 = new java.io.IOException("NPE in HttpClient" + v10.getMessage());
            v12 = this.f + 1;
            this.f = v12;
            v13 = v11;
            v2 = HttpRequestRetryHandler.retryRequest(v11, v12, this.b);
            v3 = v13;
            continue;
          }
        }
        if ( this.d != null )
          this.d.b();
      }
      catch ( java.io.IOException v6 )
      {
        if ( this.d != null )
        {
          this.d.b();
          if ( this.e )
            this.d.a(v6, (String)null);
          else
            this.d.b(v6, null);
        }
      }
      return;
    }

}

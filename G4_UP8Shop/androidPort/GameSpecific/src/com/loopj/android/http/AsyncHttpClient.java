// Decompiled from classes.dex (SourceFile: AsyncHttpClient.java) via IDA Pro 9.5 Dalvik Decompiler
package com.loopj.android.http;

import java.util.concurrent.Executors;
import org.apache.http.HttpVersion;
import org.apache.http.auth.AuthScope;
import org.apache.http.conn.params.ConnManagerParams;
import org.apache.http.conn.scheme.PlainSocketFactory;
import org.apache.http.conn.ssl.SSLSocketFactory;
import org.apache.http.params.HttpConnectionParams;
import org.apache.http.params.HttpProtocolParams;
public class AsyncHttpClient {
    // Fields
    private static java.lang.String a;
    private static int b;
    private static int c;
    private static int d;
    private static int e;
    private static java.lang.String f;
    private static java.lang.String g;
    private static int h;
    private static int i;
    private final org.apache.http.impl.client.DefaultHttpClient j;
    private final org.apache.http.protocol.HttpContext k;
    private java.util.concurrent.ThreadPoolExecutor l;
    private final java.util.Map m;
    private final java.util.Map n;

    // Methods
    static
    {
      h = 10;
      i = 10000;
    }

    public AsyncHttpClient()
    {
      super();
      org.apache.http.params.BasicHttpParams v1;
      Object[] v2;
      org.apache.http.conn.scheme.SchemeRegistry v3;
      org.apache.http.impl.conn.tsccm.ThreadSafeClientConnManager v4;
      v1 = new org.apache.http.params.BasicHttpParams();
      ConnManagerParams.setTimeout(v1, i);
      ConnManagerParams.setMaxConnectionsPerRoute(v1, new org.apache.http.conn.params.ConnPerRouteBean(h));
      ConnManagerParams.setMaxTotalConnections(v1, 10);
      HttpConnectionParams.setSoTimeout(v1, i);
      HttpConnectionParams.setConnectionTimeout(v1, i);
      HttpConnectionParams.setTcpNoDelay(v1, true);
      HttpConnectionParams.setSocketBufferSize(v1, 0x2000);
      HttpProtocolParams.setVersion(v1, HttpVersion.HTTP_1_1);
      v2 = new Object[1];
      v2[0] = "1.4.1";
      HttpProtocolParams.setUserAgent(v1, String.format("android-async-http/%s (http://loopj.com/android-async-http)", v2));
      v3 = new org.apache.http.conn.scheme.SchemeRegistry();
      v3.register(new org.apache.http.conn.scheme.Scheme("http", PlainSocketFactory.getSocketFactory(), 80));
      v3.register(new org.apache.http.conn.scheme.Scheme("https", SSLSocketFactory.getSocketFactory(), 443));
      v4 = new org.apache.http.impl.conn.tsccm.ThreadSafeClientConnManager(v1, v3);
      this.k = new org.apache.http.protocol.SyncBasicHttpContext(new org.apache.http.protocol.BasicHttpContext());
      this.j = new org.apache.http.impl.client.DefaultHttpClient(v4, v1);
      this.j.addRequestInterceptor((org.apache.http.HttpRequestInterceptor)new com.loopj.android.http.a(this));
      this.j.addResponseInterceptor((org.apache.http.HttpResponseInterceptor)new com.loopj.android.http.b(this));
      this.j.setHttpRequestRetryHandler((org.apache.http.client.HttpRequestRetryHandler)new com.loopj.android.http.RetryHandler(5));
      this.l = (java.util.concurrent.ThreadPoolExecutor)Executors.newCachedThreadPool();
      this.m = new java.util.WeakHashMap();
      this.n = new java.util.HashMap();
    
    }

    private org.apache.http.client.HttpClient a()
    {
      return this.j;
    }

    private void a(int p0)
    {
      org.apache.http.params.HttpParams Params; // RETVAL
    
      Params = this.j.getParams();
      ConnManagerParams.setTimeout(Params, p0);
      HttpConnectionParams.setSoTimeout(Params, p0);
      HttpConnectionParams.setConnectionTimeout(Params, p0);
    }

    private void a(
            android.content.Context p0,
            String p1,
            com.loopj.android.http.AsyncHttpResponseHandler p2)
    {
      this.a(p0, p1, (com.loopj.android.http.RequestParams)null, p2);
    }

    private void a(
            android.content.Context p0,
            String p1,
            com.loopj.android.http.RequestParams p2,
            com.loopj.android.http.AsyncHttpResponseHandler p3)
    {
      this.a(this.j, this.k, new org.apache.http.client.methods.HttpGet(getUrlWithQueryString(p1, p2)), null, p3, p0);
    }

    private void a(
            android.content.Context p0,
            String p1,
            org.apache.http.HttpEntity p2,
            String p3,
            com.loopj.android.http.AsyncHttpResponseHandler p4)
    {
      this.a(this.j, this.k, addEntityToRequestBase(new org.apache.http.client.methods.HttpPost(p1), p2), null, p4, p0);
    }

    private void a(
            android.content.Context p0,
            String p1,
            org.apache.http.Header[] p2,
            com.loopj.android.http.AsyncHttpResponseHandler p3)
    {
      org.apache.http.client.methods.HttpDelete v5;
      v5 = new org.apache.http.client.methods.HttpDelete(p1);
      if ( p2 != null )
        v5.setHeaders(p2);
      this.a(this.j, this.k, v5, null, p3, p0);
    }

    private void a(
            android.content.Context p0,
            String p1,
            org.apache.http.Header[] p2,
            com.loopj.android.http.RequestParams p3,
            com.loopj.android.http.AsyncHttpResponseHandler p4)
    {
      org.apache.http.client.methods.HttpUriRequest v6;
      v6 = new org.apache.http.client.methods.HttpGet(getUrlWithQueryString(p1, p3));
      if ( p2 != null )
        v6.setHeaders(p2);
      this.a(this.j, this.k, v6, null, p4, p0);
    }

    private void a(
            android.content.Context p0,
            String p1,
            org.apache.http.Header[] p2,
            com.loopj.android.http.RequestParams p3,
            String p4,
            com.loopj.android.http.AsyncHttpResponseHandler p5)
    {
      org.apache.http.client.methods.HttpEntityEnclosingRequestBase v7;
      v7 = new org.apache.http.client.methods.HttpPost(p1);
      if ( p3 != null )
        v7.setEntity(paramsToEntity(p3));
      if ( p2 != null )
        v7.setHeaders(p2);
      this.a(this.j, this.k, v7, p4, p5, p0);
    }

    private void a(
            android.content.Context p0,
            String p1,
            org.apache.http.Header[] p2,
            org.apache.http.HttpEntity p3,
            String p4,
            com.loopj.android.http.AsyncHttpResponseHandler p5)
    {
      org.apache.http.client.methods.HttpEntityEnclosingRequestBase v7; // RETVAL
    
      v7 = addEntityToRequestBase(new org.apache.http.client.methods.HttpPost(p1), p3);
      if ( p2 != null )
        v7.setHeaders(p2);
      this.a(this.j, this.k, v7, p4, p5, p0);
    }

    private void a(android.content.Context p0, boolean p1)
    {
      java.util.List v3;
      java.util.Iterator v4;
      java.util.concurrent.Future v5;
      v3 = (java.util.List)this.m.get(p0);
      if ( v3 != null )
      {
        v4 = v3.iterator();
        while ( v4.hasNext() )
        {
          v5 = (java.util.concurrent.Future)((java.lang.ref.WeakReference)v4.next()).get();
          if ( v5 != null )
            v5.cancel(p1);
        }
      }
      this.m.remove(p0);
    }

    private void a(String p0)
    {
      HttpProtocolParams.setUserAgent(this.j.getParams(), p0);
    }

    private void a(String p0, String p1)
    {
      this.n.put(p0, p1);
    }

    private void a(String p0, String p1, org.apache.http.auth.AuthScope p2)
    {
      this.j.getCredentialsProvider().setCredentials(p2, new org.apache.http.auth.UsernamePasswordCredentials(p0, p1));
    }

    private void a(java.util.concurrent.ThreadPoolExecutor p0)
    {
      this.l = p0;
    }

    private void a(org.apache.http.client.CookieStore p0)
    {
      this.k.setAttribute("http.cookie-store", p0);
    }

    private void a(org.apache.http.conn.ssl.SSLSocketFactory p0)
    {
      this.j.getConnectionManager().getSchemeRegistry().register(new org.apache.http.conn.scheme.Scheme("https", p0, 443));
    }

    /* synthetic */ static java.util.Map access$000(com.loopj.android.http.AsyncHttpClient p0)
    {
      return p0.n;
    }

    private static org.apache.http.client.methods.HttpEntityEnclosingRequestBase addEntityToRequestBase(
            org.apache.http.client.methods.HttpEntityEnclosingRequestBase p0,
            org.apache.http.HttpEntity p1)
    {
      if ( p1 != null )
        p0.setEntity(p1);
      return p0;
    }

    private org.apache.http.protocol.HttpContext b()
    {
      return this.k;
    }

    private void b(
            android.content.Context p0,
            String p1,
            com.loopj.android.http.AsyncHttpResponseHandler p2)
    {
      this.a(this.j, this.k, new org.apache.http.client.methods.HttpDelete(p1), null, p2, null);
    }

    private void b(
            android.content.Context p0,
            String p1,
            com.loopj.android.http.RequestParams p2,
            com.loopj.android.http.AsyncHttpResponseHandler p3)
    {
      this.a(this.j, this.k, addEntityToRequestBase(new org.apache.http.client.methods.HttpPost(p1), paramsToEntity(p2)), null, p3, null);
    }

    private void b(
            android.content.Context p0,
            String p1,
            org.apache.http.HttpEntity p2,
            String p3,
            com.loopj.android.http.AsyncHttpResponseHandler p4)
    {
      this.a(this.j, this.k, addEntityToRequestBase(new org.apache.http.client.methods.HttpPut(p1), p2), null, p4, p0);
    }

    private void b(
            android.content.Context p0,
            String p1,
            org.apache.http.Header[] p2,
            org.apache.http.HttpEntity p3,
            String p4,
            com.loopj.android.http.AsyncHttpResponseHandler p5)
    {
      org.apache.http.client.methods.HttpEntityEnclosingRequestBase v7; // RETVAL
    
      v7 = addEntityToRequestBase(new org.apache.http.client.methods.HttpPut(p1), p3);
      if ( p2 != null )
        v7.setHeaders(p2);
      this.a(this.j, this.k, v7, p4, p5, p0);
    }

    private void b(String p0, String p1)
    {
      this.j.getCredentialsProvider().setCredentials(AuthScope.ANY, new org.apache.http.auth.UsernamePasswordCredentials(p0, p1));
    }

    private void c(
            android.content.Context p0,
            String p1,
            com.loopj.android.http.RequestParams p2,
            com.loopj.android.http.AsyncHttpResponseHandler p3)
    {
      this.a(this.j, this.k, addEntityToRequestBase(new org.apache.http.client.methods.HttpPut(p1), paramsToEntity(p2)), null, p3, null);
    }

    private void c(String p0, com.loopj.android.http.AsyncHttpResponseHandler p1)
    {
      this.b(null, p0, null, p1);
    }

    private void d(String p0, com.loopj.android.http.AsyncHttpResponseHandler p1)
    {
      this.c(null, p0, null, p1);
    }

    public static String getUrlWithQueryString(String p0, com.loopj.android.http.RequestParams p1)
    {
      String v2;
      if ( p1 != null )
      {
        v2 = p1.b();
        if ( p0.indexOf("?") == -1 )
          return p0 + "?" + v2;
        else
          return p0 + "&" + v2;
      }
      return p0;
    }

    private static org.apache.http.HttpEntity paramsToEntity(com.loopj.android.http.RequestParams p0)
    {
      org.apache.http.HttpEntity v1;
      v1 = null;
      if ( p0 != null )
        return p0.a();
      return v1;
    }

    public final void a(String p0, com.loopj.android.http.AsyncHttpResponseHandler p1)
    {
      this.a((android.content.Context)null, p0, (com.loopj.android.http.RequestParams)null, p1);
    }

    public final void a(
            String p0,
            com.loopj.android.http.RequestParams p1,
            com.loopj.android.http.AsyncHttpResponseHandler p2)
    {
      this.a(null, p0, p1, p2);
    }

    protected void a(
            org.apache.http.impl.client.DefaultHttpClient p0,
            org.apache.http.protocol.HttpContext p1,
            org.apache.http.client.methods.HttpUriRequest p2,
            String p3,
            com.loopj.android.http.AsyncHttpResponseHandler p4,
            android.content.Context p5)
    {
      java.util.concurrent.Future v7;
      java.util.List v8;
      if ( p3 != null )
        p2.addHeader("Content-Type", p3);
      v7 = this.l.submit((Runnable)new com.loopj.android.http.d(p0, p1, p2, p4));
      if ( p5 != null )
      {
        v8 = (java.util.List)this.m.get(p5);
        if ( v8 == null )
        {
          v8 = new java.util.LinkedList();
          this.m.put(p5, v8);
        }
        v8.add(new java.lang.ref.WeakReference(v7));
      }
    }

    public final void b(String p0, com.loopj.android.http.AsyncHttpResponseHandler p1)
    {
      this.a(this.j, this.k, new org.apache.http.client.methods.HttpDelete(p0), null, p1, null);
    }

    public final void b(
            String p0,
            com.loopj.android.http.RequestParams p1,
            com.loopj.android.http.AsyncHttpResponseHandler p2)
    {
      this.b(null, p0, p1, p2);
    }

    public final void c(
            String p0,
            com.loopj.android.http.RequestParams p1,
            com.loopj.android.http.AsyncHttpResponseHandler p2)
    {
      this.c(null, p0, p1, p2);
    }

}

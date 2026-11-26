// Decompiled from classes.dex (SourceFile: RetryHandler.java) via IDA Pro 9.5 Dalvik Decompiler
package com.loopj.android.http;

import android.os.SystemClock;
class RetryHandler implements org.apache.http.client.HttpRequestRetryHandler {
    // Fields
    private static int a;
    private static java.util.HashSet b;
    private static java.util.HashSet c;
    private final int d;

    // Methods
    static
    {
      b = new java.util.HashSet();
      c = new java.util.HashSet();
      b.add(org.apache.http.NoHttpResponseException.class);
      b.add(java.net.UnknownHostException.class);
      b.add(java.net.SocketException.class);
      c.add(java.io.InterruptedIOException.class);
      c.add(javax.net.ssl.SSLHandshakeException.class);
    }

    public RetryHandler(int p0)
    {
      super();
      this.d = 5;
    }

    private static boolean isInList(java.util.HashSet<Class<?>> p0, Throwable p1)
    {
      java.util.Iterator v2;
      v2 = p0.iterator();
      while ( v2.hasNext() )
      {
        if ( ((Class)v2.next()).isInstance(p1) )
          return true;
      }
      return false;
    }

    public boolean retryRequest(java.io.IOException p0, int p1, org.apache.http.protocol.HttpContext p2)
    {
      boolean v4;
      Boolean v5;
      int v6;
      v4 = true;
      v5 = (Boolean)p2.getAttribute("http.request_sent");
      if ( v5 != null )
        v5.booleanValue();
      if ( p1 <= this.d )
      {
        if ( isInList(c, p0) )
        {
          v6 = 0;
        }
        else if ( isInList(b, p0) )
        {
          v6 = 1;
        }
        else
        {
          v6 = 1;
        }
      }
      else
      {
        v6 = 0;
      }
      if ( v6 != 0 )
      {
        if ( ((org.apache.http.client.methods.HttpUriRequest)p2.getAttribute("http.request")).getMethod().equals("POST") )
          v4 = false;
      }
      else
      {
        v4 = false;
      }
      if ( v4 )
        SystemClock.sleep(1500);
      else
        p0.printStackTrace();
      return v4;
    }

}

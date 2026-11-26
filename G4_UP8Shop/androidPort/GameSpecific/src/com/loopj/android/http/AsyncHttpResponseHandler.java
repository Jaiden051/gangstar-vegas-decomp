// Decompiled from classes.dex (SourceFile: AsyncHttpResponseHandler.java) via IDA Pro 9.5 Dalvik Decompiler
package com.loopj.android.http;

import android.os.Looper;
import org.apache.http.util.EntityUtils;
public class AsyncHttpResponseHandler {
    // Fields
    protected static int a;
    protected static int b;
    protected static int c;
    protected static int d;
    private android.os.Handler e;

    // Methods
    public AsyncHttpResponseHandler()
    {
      super();
      if ( Looper.myLooper() != null )
        this.e = new com.loopj.android.http.e(this);
    }

    private void b(int p0, String p1)
    {
      this.a(p1);
    }

    private void b(String p0)
    {
      this.a(p0);
    }

    public static void onFailure$786b7c60()
    {
      ;
    }

    private static void onFinish()
    {
      ;
    }

    private static void onStart()
    {
      ;
    }

    protected final android.os.Message a(int p0, Object p1)
    {
      android.os.Message v3;
      if ( this.e != null )
        return this.e.obtainMessage(p0, p1);
      v3 = new android.os.Message();
      v3.what = p0;
      v3.obj = p1;
      return v3;
    }

    protected final void a()
    {
      this.b(this.a(2, (Object)null));
    }

    protected void a(int p0, String p1)
    {
      Object[] v3;
      v3 = new Object[2];
      v3[0] = new Integer(p0);
      v3[1] = p1;
      this.b(this.a(0, v3));
    }

    protected void a(android.os.Message p0)
    {
      Object[] v2;
      Object[] v3;
      switch ( p0.what )
      {
        case 0:
          v2 = (Object[])p0.obj;
          ((Integer)v2[0]).intValue();
          this.a((String)v2[1]);
          break;
        case 1:
          v3 = (Object[])p0.obj;
          this.c((Throwable)v3[0], (String)v3[1]);
          break;
        default:
          return;
      }
    }

    public void a(String p0)
    {
      ;
    }

    public void a(Throwable p0, String p1)
    {
      ;
    }

    protected void a(Throwable p0, byte[] p1)
    {
      Object[] v3;
      v3 = new Object[2];
      v3[0] = p0;
      ((byte[][])v3)[1] = p1;
      this.b(this.a(1, v3));
    }

    void a(org.apache.http.HttpResponse p0)
    {
      String v2;
      org.apache.http.StatusLine StatusLine;
      org.apache.http.HttpEntity Entity; // RETVAL
    
      v2 = null;
      StatusLine = p0.getStatusLine();
      try
      {
        Entity = p0.getEntity();
        if ( Entity != null )
          v2 = EntityUtils.toString(new org.apache.http.entity.BufferedHttpEntity(Entity), "UTF-8");
      }
      catch ( java.io.IOException v5 )
      {
        this.b(v5, null);
      }
      if ( StatusLine.getStatusCode() < 300 )
        this.a(StatusLine.getStatusCode(), v2);
      else
        this.b(new org.apache.http.client.HttpResponseException(StatusLine.getStatusCode(), StatusLine.getReasonPhrase()), v2);
    }

    protected final void b()
    {
      this.b(this.a(3, (Object)null));
    }

    protected void b(android.os.Message p0)
    {
      if ( this.e != null )
        this.e.sendMessage(p0);
      else
        this.a(p0);
    }

    protected final void b(Throwable p0, String p1)
    {
      Object[] v3;
      v3 = new Object[2];
      v3[0] = p0;
      v3[1] = p1;
      this.b(this.a(1, v3));
    }

    protected void c(Throwable p0, String p1)
    {
      this.a(p0, p1);
    }

}

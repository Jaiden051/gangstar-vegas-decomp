// Decompiled from classes.dex (SourceFile: BinaryHttpResponseHandler.java) via IDA Pro 9.5 Dalvik Decompiler
package com.loopj.android.http;

import org.apache.http.Header;
import org.apache.http.util.EntityUtils;
public class BinaryHttpResponseHandler extends com.loopj.android.http.AsyncHttpResponseHandler {
    // Fields
    private static java.lang.String[] e;

    // Methods
    static
    {
      String[] v0;
      v0 = new String[2];
      v0[0] = "image/jpeg";
      v0[1] = "image/png";
      e = v0;
    }

    public BinaryHttpResponseHandler()
    {
      super();
    }

    private BinaryHttpResponseHandler(String[] p0)
    {
      this();
      e = p0;
    }

    private void a(int p0, byte[] p1)
    {
      Object[] v3;
      v3 = new Object[2];
      v3[0] = Integer.valueOf(p0);
      ((byte[][])v3)[1] = p1;
      this.b(this.a(0, v3));
    }

    private void a(Throwable p0)
    {
      ;
    }

    private void a(byte[] p0)
    {
      ;
    }

    private void b(int p0, byte[] p1)
    {
      ;
    }

    private void b(Throwable p0, byte[] p1)
    {
      ;
    }

    private static void onSuccess$25e06fc()
    {
      ;
    }

    protected final void a(android.os.Message p0)
    {
      switch ( p0.what )
      {
        case 0:
          ((Integer)((Object[])p0.obj)[0]).intValue();
          break;
        case 1:
          return;
        default:
          super.a(p0);
          break;
      }
    }

    protected final void a(Throwable p0, byte[] p1)
    {
      Object[] v3;
      v3 = new Object[2];
      v3[0] = p0;
      ((byte[][])v3)[1] = p1;
      this.b(this.a(1, v3));
    }

    final void a(org.apache.http.HttpResponse p0)
    {
      org.apache.http.StatusLine StatusLine;
      org.apache.http.Header[] Headers; // RETVAL
      org.apache.http.Header v4;
      String[] v5;
      int v6;
      int v7;
      int v8;
      org.apache.http.HttpEntity Entity; // RETVAL
      org.apache.http.HttpEntity v10;
      byte[] v11;
      Object[] v13;
      StatusLine = p0.getStatusLine();
      Headers = p0.getHeaders("Content-Type");
      if ( Headers.length != 1 )
      {
        this.a(new org.apache.http.client.HttpResponseException(StatusLine.getStatusCode(), "None, or more than one, Content-" +
                                                                                            "Type Header found!"), (String)null);
        return;
      }
      v4 = Headers[0];
      v5 = e;
      v6 = v5.length;
      v7 = 0;
      v8 = 0;
      while ( v7 < v6 )
      {
        if ( v5[v7].equals(v4.getValue()) )
          v8 = 1;
        ++v7;
      }
      if ( v8 == 0 )
      {
        this.a(new org.apache.http.client.HttpResponseException(StatusLine.getStatusCode(), "Content-Type not allowed!"), (String)null);
        return;
      }
      try
      {
        Entity = p0.getEntity();
        if ( Entity != null )
          v10 = new org.apache.http.entity.BufferedHttpEntity(Entity);
        else
          v10 = null;
        v11 = EntityUtils.toByteArray(v10);
      }
      catch ( java.io.IOException v12 )
      {
        this.a(v12, (String)null);
        v11 = null;
      }
      if ( StatusLine.getStatusCode() < 300 )
      {
        v13 = new Object[2];
        v13[0] = Integer.valueOf(StatusLine.getStatusCode());
        ((byte[][])v13)[1] = v11;
        this.b(this.a(0, v13));
      }
      else
      {
        this.a(new org.apache.http.client.HttpResponseException(StatusLine.getStatusCode(), StatusLine.getReasonPhrase()), v11);
      }
    }

}

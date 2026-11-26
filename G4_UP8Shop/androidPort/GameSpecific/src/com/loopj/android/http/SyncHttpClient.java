// Decompiled from classes.dex (SourceFile: SyncHttpClient.java) via IDA Pro 9.5 Dalvik Decompiler
package com.loopj.android.http;

public abstract class SyncHttpClient extends com.loopj.android.http.AsyncHttpClient {
    // Fields
    com.loopj.android.http.AsyncHttpResponseHandler a;
    private int b;
    private java.lang.String c;

    // Methods
    public SyncHttpClient()
    {
      super();
      this.a = new com.loopj.android.http.h(this);
    }

    private String a(String p0)
    {
      this.a(p0, null, this.a);
      return this.c;
    }

    private String a(String p0, com.loopj.android.http.RequestParams p1)
    {
      this.a(p0, p1, this.a);
      return this.c;
    }

    /* synthetic */ static int access$002(com.loopj.android.http.SyncHttpClient p0, int p1)
    {
      p0.b = p1;
      return p1;
    }

    /* synthetic */ static String access$102(com.loopj.android.http.SyncHttpClient p0, String p1)
    {
      p0.c = p1;
      return p1;
    }

    private int b()
    {
      return this.b;
    }

    private String b(String p0)
    {
      this.c(p0, null, this.a);
      return this.c;
    }

    private String b(String p0, com.loopj.android.http.RequestParams p1)
    {
      this.c(p0, p1, this.a);
      return this.c;
    }

    private String c(String p0)
    {
      this.b(p0, null, this.a);
      return this.c;
    }

    private String c(String p0, com.loopj.android.http.RequestParams p1)
    {
      this.b(p0, p1, this.a);
      return this.c;
    }

    private void c(String p0, com.loopj.android.http.AsyncHttpResponseHandler p1)
    {
      this.b(p0, p1);
    }

    private String d(String p0)
    {
      this.b(p0, this.a);
      return this.c;
    }

    private String d(String p0, com.loopj.android.http.RequestParams p1)
    {
      this.b(p0, this.a);
      return this.c;
    }

    public abstract java.lang.String a();

    protected final void a(
            org.apache.http.impl.client.DefaultHttpClient p0,
            org.apache.http.protocol.HttpContext p1,
            org.apache.http.client.methods.HttpUriRequest p2,
            String p3,
            com.loopj.android.http.AsyncHttpResponseHandler p4,
            android.content.Context p5)
    {
      if ( p3 != null )
        p2.addHeader("Content-Type", p3);
      new com.loopj.android.http.d(p0, p1, p2, p4).run();
    }

}

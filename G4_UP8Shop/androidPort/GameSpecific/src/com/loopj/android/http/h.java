// Decompiled from classes.dex (SourceFile: h.java) via IDA Pro 9.5 Dalvik Decompiler
package com.loopj.android.http;

final class h extends com.loopj.android.http.AsyncHttpResponseHandler {
    // Fields
    final com.loopj.android.http.SyncHttpClient e;

    // Methods
    h(com.loopj.android.http.SyncHttpClient p0)
    {
      super();
      this.e = p0;
    
    }

    public final void a(String p0)
    {
      SyncHttpClient.access$102(this.e, p0);
    }

    public final void a(Throwable p0, String p1)
    {
      SyncHttpClient.access$102(this.e, this.e.a());
    }

    final void a(org.apache.http.HttpResponse p0)
    {
      SyncHttpClient.access$002(this.e, p0.getStatusLine().getStatusCode());
      super.a(p0);
    }

    protected final void b(android.os.Message p0)
    {
      this.a(p0);
    }

}

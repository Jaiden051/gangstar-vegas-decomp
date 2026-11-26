// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.loopj.android.http;

final class a implements org.apache.http.HttpRequestInterceptor {
    // Fields
    final com.loopj.android.http.AsyncHttpClient a;

    // Methods
    a(com.loopj.android.http.AsyncHttpClient p0)
    {
      super();
      this.a = p0;
    
    }

    public final void process(org.apache.http.HttpRequest p0, org.apache.http.protocol.HttpContext p1)
    {
      java.util.Iterator v3;
      String v4;
      if ( !p0.containsHeader("Accept-Encoding") )
        p0.addHeader("Accept-Encoding", "gzip");
      v3 = AsyncHttpClient.access$000(this.a).keySet().iterator();
      while ( v3.hasNext() )
      {
        v4 = (String)v3.next();
        p0.addHeader(v4, (String)AsyncHttpClient.access$000(this.a).get(v4));
      }
    }

}

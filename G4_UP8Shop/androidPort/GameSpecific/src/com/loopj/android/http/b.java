// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.loopj.android.http;

final class b implements org.apache.http.HttpResponseInterceptor {
    // Fields
    final com.loopj.android.http.AsyncHttpClient a;

    // Methods
    b(com.loopj.android.http.AsyncHttpClient p0)
    {
      super();
      this.a = p0;
    
    }

    public final void process(org.apache.http.HttpResponse p0, org.apache.http.protocol.HttpContext p1)
    {
      org.apache.http.HttpEntity Entity; // RETVAL
      org.apache.http.Header ContentEncoding; // RETVAL
      org.apache.http.HeaderElement[] Elements;
      int v6;
      int i;
      Entity = p0.getEntity();
      if ( Entity != null )
      {
        ContentEncoding = Entity.getContentEncoding();
        if ( ContentEncoding != null )
        {
          Elements = ContentEncoding.getElements();
          v6 = Elements.length;
          for ( i = 0; i < v6; ++i )
          {
            if ( Elements[i].getName().equalsIgnoreCase("gzip") )
            {
              p0.setEntity(new com.loopj.android.http.c(p0.getEntity()));
              return;
            }
          }
        }
      }
    }

}

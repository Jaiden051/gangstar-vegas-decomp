// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.loopj.android.http;

final class e extends android.os.Handler {
    // Fields
    final com.loopj.android.http.AsyncHttpResponseHandler a;

    // Methods
    e(com.loopj.android.http.AsyncHttpResponseHandler p0)
    {
      super();
      this.a = p0;
    
    }

    public final void handleMessage(android.os.Message p0)
    {
      this.a.a(p0);
    }

}

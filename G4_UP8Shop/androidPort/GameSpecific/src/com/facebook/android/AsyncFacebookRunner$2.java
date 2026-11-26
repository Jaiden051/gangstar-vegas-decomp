// Decompiled from classes.dex (SourceFile: AsyncFacebookRunner$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.android;

class AsyncFacebookRunner$2 extends java.lang.Thread {
    // Fields
    final com.facebook.android.AsyncFacebookRunner this$0;
    final java.lang.String val$graphPath;
    final java.lang.String val$httpMethod;
    final com.facebook.android.AsyncFacebookRunner$RequestListener val$listener;
    final android.os.Bundle val$parameters;
    final java.lang.Object val$state;

    // Methods
    AsyncFacebookRunner$2(
            com.facebook.android.AsyncFacebookRunner p0,
            String p1,
            android.os.Bundle p2,
            String p3,
            com.facebook.android.AsyncFacebookRunner$RequestListener p4,
            Object p5)
    {
      super();
      this.this$0 = p0;
      this.val$graphPath = p1;
      this.val$parameters = p2;
      this.val$httpMethod = p3;
      this.val$listener = p4;
      this.val$state = p5;
    
    }

    public void run()
    {
      try
      {
        this.val$listener.onComplete(this.this$0.fb.requestImpl(this.val$graphPath, this.val$parameters, this.val$httpMethod), this.val$state);
      }
      catch ( java.io.FileNotFoundException v1 )
      {
        this.val$listener.onFileNotFoundException(v1, this.val$state);
      }
      catch ( java.net.MalformedURLException v2 )
      {
        this.val$listener.onMalformedURLException(v2, this.val$state);
      }
      catch ( java.io.IOException v3 )
      {
        this.val$listener.onIOException(v3, this.val$state);
      }
    }

}

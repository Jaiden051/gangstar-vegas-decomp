// Decompiled from classes.dex (SourceFile: AsyncFacebookRunner$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.android;

class AsyncFacebookRunner$1 extends java.lang.Thread {
    // Fields
    final com.facebook.android.AsyncFacebookRunner this$0;
    final android.content.Context val$context;
    final com.facebook.android.AsyncFacebookRunner$RequestListener val$listener;
    final java.lang.Object val$state;

    // Methods
    AsyncFacebookRunner$1(
            com.facebook.android.AsyncFacebookRunner p0,
            android.content.Context p1,
            com.facebook.android.AsyncFacebookRunner$RequestListener p2,
            Object p3)
    {
      super();
      this.this$0 = p0;
      this.val$context = p1;
      this.val$listener = p2;
      this.val$state = p3;
    
    }

    public void run()
    {
      String v1;
      try
      {
        v1 = this.this$0.fb.logoutImpl(this.val$context);
        if ( v1.length() != 0 && !v1.equals("false") )
          this.val$listener.onComplete(v1, this.val$state);
        else
          this.val$listener.onFacebookError(new com.facebook.android.FacebookError("auth.expireSession failed"), this.val$state);
      }
      catch ( java.io.FileNotFoundException v2 )
      {
        this.val$listener.onFileNotFoundException(v2, this.val$state);
      }
      catch ( java.net.MalformedURLException v3 )
      {
        this.val$listener.onMalformedURLException(v3, this.val$state);
      }
      catch ( java.io.IOException v4 )
      {
        this.val$listener.onIOException(v4, this.val$state);
      }
    }

}

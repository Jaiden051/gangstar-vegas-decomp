// Decompiled from classes.dex (SourceFile: ak.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class ak implements java.lang.Runnable {
    // Fields
    final java.lang.String a;
    final com.gameloft.glads.GLWebViewClient b;

    // Methods
    ak(com.gameloft.glads.GLWebViewClient p0, String p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void run()
    {
      String a;
      a = GLWebViewClient.access$000(this.b, this.a);
      if ( a == null )
        a = this.a;
      GLWebViewClient.access$100(this.b, a.replace("link:", ""));
      if ( this.b.d == GLWebViewClient.b )
        GLAdBanner.sendClickEvent();
      if ( this.b.d == GLWebViewClient.c )
      {
        GLAdFullScreen.sendClickEvent();
        GLAdFullScreen.handleBackKey();
      }
    }

}

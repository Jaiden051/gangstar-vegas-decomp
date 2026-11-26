// Decompiled from classes.dex (SourceFile: c$a$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class c$a$3 extends android.webkit.WebChromeClient {
    // Fields
    final com.amazon.device.associates.c$a a;

    // Methods
    c$a$3(com.amazon.device.associates.c$a p0)
    {
      super();
      this.a = p0;
    
    }

    public void onProgressChanged(android.webkit.WebView p0, int p1)
    {
      c$a.c(this.a).setProgress(p1);
      if ( p1 == 100 )
      {
        c$a.c(this.a).setVisibility(8);
        c$a.d(this.a).setVisibility(8);
      }
    }

}

// Decompiled from classes.dex (SourceFile: WebDialog$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class WebDialog$3 extends android.webkit.WebView {
    // Fields
    final com.facebook.widget.WebDialog this$0;

    // Methods
    WebDialog$3(com.facebook.widget.WebDialog p0, android.content.Context p1)
    {
      super(p1);
      this.this$0 = p0;
    
    }

    public void onWindowFocusChanged(boolean p0)
    {
      try
      {
        super.onWindowFocusChanged(p0);
      }
      catch ( NullPointerException e )
      {
      }
    }

}

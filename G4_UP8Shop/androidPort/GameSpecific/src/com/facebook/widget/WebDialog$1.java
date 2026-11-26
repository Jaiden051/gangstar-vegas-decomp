// Decompiled from classes.dex (SourceFile: WebDialog$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class WebDialog$1 implements android.content.DialogInterface.OnCancelListener {
    // Fields
    final com.facebook.widget.WebDialog this$0;

    // Methods
    WebDialog$1(com.facebook.widget.WebDialog p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void onCancel(android.content.DialogInterface p0)
    {
      this.this$0.dismiss();
    }

}

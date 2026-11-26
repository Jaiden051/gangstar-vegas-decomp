// Decompiled from classes.dex (SourceFile: ToolTipPopup$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class ToolTipPopup$2 implements java.lang.Runnable {
    // Fields
    final com.facebook.widget.ToolTipPopup this$0;

    // Methods
    ToolTipPopup$2(com.facebook.widget.ToolTipPopup p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void run()
    {
      this.this$0.dismiss();
    }

}

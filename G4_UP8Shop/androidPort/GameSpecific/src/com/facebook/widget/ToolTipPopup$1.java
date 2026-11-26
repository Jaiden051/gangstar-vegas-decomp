// Decompiled from classes.dex (SourceFile: ToolTipPopup$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class ToolTipPopup$1 implements android.view.ViewTreeObserver.OnScrollChangedListener {
    // Fields
    final com.facebook.widget.ToolTipPopup this$0;

    // Methods
    ToolTipPopup$1(com.facebook.widget.ToolTipPopup p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void onScrollChanged()
    {
      if ( ToolTipPopup.access$000(this.this$0).get() != null
        && ToolTipPopup.access$100(this.this$0) != null
        && ToolTipPopup.access$100(this.this$0).isShowing() )
      {
        if ( ToolTipPopup.access$100(this.this$0).isAboveAnchor() )
          ToolTipPopup.access$200(this.this$0).showBottomArrow();
        else
          ToolTipPopup.access$200(this.this$0).showTopArrow();
      }
    }

}

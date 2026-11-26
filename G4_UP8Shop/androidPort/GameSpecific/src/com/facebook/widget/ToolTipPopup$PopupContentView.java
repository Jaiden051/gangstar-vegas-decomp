// Decompiled from classes.dex (SourceFile: ToolTipPopup$PopupContentView.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import android.view.LayoutInflater;
class ToolTipPopup$PopupContentView extends android.widget.FrameLayout {
    // Fields
    private android.view.View bodyFrame;
    private android.widget.ImageView bottomArrow;
    final com.facebook.widget.ToolTipPopup this$0;
    private android.widget.ImageView topArrow;
    private android.widget.ImageView xOut;

    // Methods
    public ToolTipPopup$PopupContentView(com.facebook.widget.ToolTipPopup p0, android.content.Context p1)
    {
      super(p1);
      this.this$0 = p0;
      this.init();
    
    }

    /* synthetic */ static android.view.View access$300(
            com.facebook.widget.ToolTipPopup$PopupContentView p0)
    {
      return p0.bodyFrame;
    }

    /* synthetic */ static android.widget.ImageView access$400(
            com.facebook.widget.ToolTipPopup$PopupContentView p0)
    {
      return p0.bottomArrow;
    }

    /* synthetic */ static android.widget.ImageView access$500(
            com.facebook.widget.ToolTipPopup$PopupContentView p0)
    {
      return p0.topArrow;
    }

    /* synthetic */ static android.widget.ImageView access$600(
            com.facebook.widget.ToolTipPopup$PopupContentView p0)
    {
      return p0.xOut;
    }

    private void init()
    {
      LayoutInflater.from(this.getContext()).inflate(2130903054, this);
      this.topArrow = (android.widget.ImageView)this.findViewById(2131427386);
      this.bottomArrow = (android.widget.ImageView)this.findViewById(2131427389);
      this.bodyFrame = this.findViewById(2131427385);
      this.xOut = (android.widget.ImageView)this.findViewById(2131427387);
    }

    public void onMeasure(int p0, int p1)
    {
      super.onMeasure(p0, p1);
    }

    public void showBottomArrow()
    {
      this.topArrow.setVisibility(4);
      this.bottomArrow.setVisibility(0);
    }

    public void showTopArrow()
    {
      this.topArrow.setVisibility(0);
      this.bottomArrow.setVisibility(4);
    }

}

// Decompiled from classes.dex (SourceFile: SlidingPaneLayout$DragHelperCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

class SlidingPaneLayout$DragHelperCallback extends android.support.v4.widget.ViewDragHelper$Callback {
    // Fields
    final android.support.v4.widget.SlidingPaneLayout this$0;

    // Methods
    private SlidingPaneLayout$DragHelperCallback(android.support.v4.widget.SlidingPaneLayout p0)
    {
      super();
      this.this$0 = p0;
    
    }

    /* synthetic */ SlidingPaneLayout$DragHelperCallback(
            android.support.v4.widget.SlidingPaneLayout p0,
            android.support.v4.widget.SlidingPaneLayout$1 p1)
    {
      this(p0);
    }

    public int clampViewPositionHorizontal(android.view.View p0, int p1, int p2)
    {
      int v4;
      v4 = ((android.support.v4.widget.SlidingPaneLayout$LayoutParams)SlidingPaneLayout.access$400(this.this$0).getLayoutParams()).leftMargin
         + this.this$0.getPaddingLeft();
      return Math.min(Math.max(p1, v4), SlidingPaneLayout.access$700(this.this$0) + v4);
    }

    public int getViewHorizontalDragRange(android.view.View p0)
    {
      return SlidingPaneLayout.access$700(this.this$0);
    }

    public void onEdgeDragStarted(int p0, int p1)
    {
      SlidingPaneLayout.access$200(this.this$0).captureChildView(SlidingPaneLayout.access$400(this.this$0), p1);
    }

    public void onViewCaptured(android.view.View p0, int p1)
    {
      this.this$0.setAllChildrenVisible();
    }

    public void onViewDragStateChanged(int p0)
    {
      if ( SlidingPaneLayout.access$200(this.this$0).getViewDragState() == 0 )
      {
        if ( SlidingPaneLayout.access$300(this.this$0) == 0.0f )
        {
          this.this$0.updateObscuredViewsVisibility(SlidingPaneLayout.access$400(this.this$0));
          this.this$0.dispatchOnPanelClosed(SlidingPaneLayout.access$400(this.this$0));
          SlidingPaneLayout.access$502(this.this$0, false);
        }
        else
        {
          this.this$0.dispatchOnPanelOpened(SlidingPaneLayout.access$400(this.this$0));
          SlidingPaneLayout.access$502(this.this$0, true);
        }
      }
    }

    public void onViewPositionChanged(
            android.view.View p0,
            int p1,
            int p2,
            int p3,
            int p4)
    {
      SlidingPaneLayout.access$600(this.this$0, p1);
      this.this$0.invalidate();
    }

    public void onViewReleased(android.view.View p0, float p1, float p2)
    {
      int v4;
      v4 = ((android.support.v4.widget.SlidingPaneLayout$LayoutParams)p0.getLayoutParams()).leftMargin
         + this.this$0.getPaddingLeft();
      if ( p1 > 0.0f || p1 == 0.0f && SlidingPaneLayout.access$300(this.this$0) > 0.5f )
        v4 += SlidingPaneLayout.access$700(this.this$0);
      SlidingPaneLayout.access$200(this.this$0).settleCapturedViewAt(v4, p0.getTop());
      this.this$0.invalidate();
    }

    public boolean tryCaptureView(android.view.View p0, int p1)
    {
      return !SlidingPaneLayout.access$100(this.this$0)
          && ((android.support.v4.widget.SlidingPaneLayout$LayoutParams)p0.getLayoutParams()).slideable;
    }

}

// Decompiled from classes.dex (SourceFile: DrawerLayout$ViewDragCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

class DrawerLayout$ViewDragCallback extends android.support.v4.widget.ViewDragHelper$Callback {
    // Fields
    private final int mAbsGravity;
    private android.support.v4.widget.ViewDragHelper mDragger;
    private final java.lang.Runnable mPeekRunnable;
    final android.support.v4.widget.DrawerLayout this$0;

    // Methods
    public DrawerLayout$ViewDragCallback(android.support.v4.widget.DrawerLayout p0, int p1)
    {
      super();
      this.this$0 = p0;
      this.mPeekRunnable = (Runnable)new android.support.v4.widget.DrawerLayout$ViewDragCallback$1(this);
      this.mAbsGravity = p1;
    
    }

    /* synthetic */ static void access$000(
            android.support.v4.widget.DrawerLayout$ViewDragCallback p0)
    {
      p0.peekDrawer();
    }

    private void closeOtherDrawer()
    {
      int v1;
      android.view.View DrawerWithGravity; // RETVAL
    
      v1 = 3;
      if ( this.mAbsGravity == 3 )
        v1 = 5;
      DrawerWithGravity = this.this$0.findDrawerWithGravity(v1);
      if ( DrawerWithGravity != null )
        this.this$0.closeDrawer(DrawerWithGravity);
    }

    private void peekDrawer()
    {
      int v1;
      int EdgeSize;
      boolean v3;
      android.view.View DrawerWithGravity; // RETVAL
      android.view.View v5;
      int v6;
      android.view.View v7;
      int v8;
      android.support.v4.widget.DrawerLayout$LayoutParams v9;
      android.view.View v10;
      int v11;
      v1 = 0;
      EdgeSize = this.mDragger.getEdgeSize();
      v3 = this.mAbsGravity == 3;
      if ( v3 )
      {
        DrawerWithGravity = this.this$0.findDrawerWithGravity(3);
        v5 = DrawerWithGravity;
        if ( DrawerWithGravity != null )
          v1 = -DrawerWithGravity.getWidth();
        v6 = v1 + EdgeSize;
        v7 = v5;
        v8 = v6;
      }
      else
      {
        v10 = this.this$0.findDrawerWithGravity(5);
        v11 = this.this$0.getWidth() - EdgeSize;
        v7 = v10;
        v8 = v11;
      }
      if ( v7 != null && (v3 && v7.getLeft() < v8 || !v3 && v7.getLeft() > v8) && this.this$0.getDrawerLockMode(v7) == 0 )
      {
        v9 = (android.support.v4.widget.DrawerLayout$LayoutParams)v7.getLayoutParams();
        this.mDragger.smoothSlideViewTo(v7, v8, v7.getTop());
        v9.isPeeking = true;
        this.this$0.invalidate();
        this.closeOtherDrawer();
        this.this$0.cancelChildViewTouch();
      }
    }

    public int clampViewPositionHorizontal(android.view.View p0, int p1, int p2)
    {
      int Width;
      if ( this.this$0.checkDrawerViewAbsoluteGravity(p0, 3) )
        return Math.max(-p0.getWidth(), Math.min(p1, 0));
      Width = this.this$0.getWidth();
      return Math.max(Width - p0.getWidth(), Math.min(p1, Width));
    }

    public int clampViewPositionVertical(android.view.View p0, int p1, int p2)
    {
      return p0.getTop();
    }

    public int getViewHorizontalDragRange(android.view.View p0)
    {
      return p0.getWidth();
    }

    public void onEdgeDragStarted(int p0, int p1)
    {
      android.view.View DrawerWithGravity;
      if ( (p0 & 1) == 1 )
        DrawerWithGravity = this.this$0.findDrawerWithGravity(3);
      else
        DrawerWithGravity = this.this$0.findDrawerWithGravity(5);
      if ( DrawerWithGravity != null && this.this$0.getDrawerLockMode(DrawerWithGravity) == 0 )
        this.mDragger.captureChildView(DrawerWithGravity, p1);
    }

    public boolean onEdgeLock(int p0)
    {
      return false;
    }

    public void onEdgeTouched(int p0, int p1)
    {
      this.this$0.postDelayed(this.mPeekRunnable, 160);
    }

    public void onViewCaptured(android.view.View p0, int p1)
    {
      ((android.support.v4.widget.DrawerLayout$LayoutParams)p0.getLayoutParams()).isPeeking = false;
      this.closeOtherDrawer();
    }

    public void onViewDragStateChanged(int p0)
    {
      this.this$0.updateDrawerState(this.mAbsGravity, p0, this.mDragger.getCapturedView());
    }

    public void onViewPositionChanged(android.view.View p0, int p1, int p2, int p3, int p4)
    {
      int Width;
      float v7;
      int v8;
      Width = p0.getWidth();
      if ( this.this$0.checkDrawerViewAbsoluteGravity(p0, 3) )
        v7 = (float)(Width + p1) / (float)Width;
      else
        v7 = (float)(this.this$0.getWidth() - p1) / (float)Width;
      this.this$0.setDrawerViewOffset(p0, v7);
      if ( v7 == 0.0f )
        v8 = 4;
      else
        v8 = 0;
      p0.setVisibility((int)v8);
      this.this$0.invalidate();
    }

    public void onViewReleased(android.view.View p0, float p1, float p2)
    {
      float DrawerViewOffset;
      int Width;
      int v6;
      int v7; // RETVAL
    
      DrawerViewOffset = this.this$0.getDrawerViewOffset(p0);
      Width = p0.getWidth();
      if ( this.this$0.checkDrawerViewAbsoluteGravity(p0, 3) )
      {
        if ( p1 > 0.0f || p1 == 0.0f && DrawerViewOffset > 0.5f )
          v6 = 0;
        else
          v6 = -Width;
      }
      else
      {
        v7 = this.this$0.getWidth();
        v6 = v7;
        if ( p1 < 0.0f || p1 == 0.0f && DrawerViewOffset > 0.5f )
          v6 = v7 - Width;
      }
      this.mDragger.settleCapturedViewAt(v6, p0.getTop());
      this.this$0.invalidate();
    }

    public void removeCallbacks()
    {
      this.this$0.removeCallbacks(this.mPeekRunnable);
    }

    public void setDragger(android.support.v4.widget.ViewDragHelper p0)
    {
      this.mDragger = p0;
    }

    public boolean tryCaptureView(android.view.View p0, int p1)
    {
      return this.this$0.isDrawerView(p0)
          && this.this$0.checkDrawerViewAbsoluteGravity(p0, this.mAbsGravity)
          && this.this$0.getDrawerLockMode(p0) == 0;
    }

}

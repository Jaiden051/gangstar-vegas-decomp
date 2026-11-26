// Decompiled from classes.dex (SourceFile: ViewCompat$BaseViewCompatImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.view.View;
class ViewCompat$BaseViewCompatImpl implements android.support.v4.view.ViewCompat$ViewCompatImpl {
    // Methods
    ViewCompat$BaseViewCompatImpl()
    {
      super();
    }

    public boolean canScrollHorizontally(android.view.View p0, int p1)
    {
      return false;
    }

    public boolean canScrollVertically(android.view.View p0, int p1)
    {
      return false;
    }

    public int getAccessibilityLiveRegion(android.view.View p0)
    {
      return 0;
    }

    public android.support.v4.view.accessibility.AccessibilityNodeProviderCompat getAccessibilityNodeProvider(
            android.view.View p0)
    {
      return null;
    }

    public float getAlpha(android.view.View p0)
    {
      return 1.0f;
    }

    long getFrameTime()
    {
      return 10;
    }

    public int getImportantForAccessibility(android.view.View p0)
    {
      return 0;
    }

    public int getLabelFor(android.view.View p0)
    {
      return 0;
    }

    public int getLayerType(android.view.View p0)
    {
      return 0;
    }

    public int getLayoutDirection(android.view.View p0)
    {
      return 0;
    }

    public int getMeasuredHeightAndState(android.view.View p0)
    {
      return p0.getMeasuredHeight();
    }

    public int getMeasuredState(android.view.View p0)
    {
      return 0;
    }

    public int getMeasuredWidthAndState(android.view.View p0)
    {
      return p0.getMeasuredWidth();
    }

    public int getOverScrollMode(android.view.View p0)
    {
      return 2;
    }

    public android.view.ViewParent getParentForAccessibility(android.view.View p0)
    {
      return p0.getParent();
    }

    public boolean hasTransientState(android.view.View p0)
    {
      return false;
    }

    public boolean isOpaque(android.view.View p0)
    {
      boolean v2;
      android.graphics.drawable.Drawable Background; // RETVAL
    
      v2 = false;
      Background = p0.getBackground();
      if ( Background != null )
        return Background.getOpacity() == -1;
      return v2;
    }

    public void onInitializeAccessibilityEvent(
            android.view.View p0,
            android.view.accessibility.AccessibilityEvent p1)
    {
      ;
    }

    public void onInitializeAccessibilityNodeInfo(
            android.view.View p0,
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat p1)
    {
      ;
    }

    public void onPopulateAccessibilityEvent(
            android.view.View p0,
            android.view.accessibility.AccessibilityEvent p1)
    {
      ;
    }

    public boolean performAccessibilityAction(
            android.view.View p0,
            int p1,
            android.os.Bundle p2)
    {
      return false;
    }

    public void postInvalidateOnAnimation(android.view.View p0)
    {
      p0.postInvalidateDelayed(this.getFrameTime());
    }

    public void postInvalidateOnAnimation(
            android.view.View p0,
            int p1,
            int p2,
            int p3,
            int p4)
    {
      p0.postInvalidateDelayed(this.getFrameTime(), p1, p2, p3, p4);
    }

    public void postOnAnimation(android.view.View p0, Runnable p1)
    {
      p0.postDelayed(p1, this.getFrameTime());
    }

    public void postOnAnimationDelayed(android.view.View p0, Runnable p1, long p2)
    {
      p0.postDelayed(p1, this.getFrameTime() + p2);
    }

    public int resolveSizeAndState(int p0, int p1, int p2)
    {
      return View.resolveSize(p0, p1);
    }

    public void setAccessibilityDelegate(
            android.view.View p0,
            android.support.v4.view.AccessibilityDelegateCompat p1)
    {
      ;
    }

    public void setAccessibilityLiveRegion(android.view.View p0, int p1)
    {
      ;
    }

    public void setHasTransientState(android.view.View p0, boolean p1)
    {
      ;
    }

    public void setImportantForAccessibility(android.view.View p0, int p1)
    {
      ;
    }

    public void setLabelFor(android.view.View p0, int p1)
    {
      ;
    }

    public void setLayerPaint(android.view.View p0, android.graphics.Paint p1)
    {
      ;
    }

    public void setLayerType(android.view.View p0, int p1, android.graphics.Paint p2)
    {
      ;
    }

    public void setLayoutDirection(android.view.View p0, int p1)
    {
      ;
    }

    public void setOverScrollMode(android.view.View p0, int p1)
    {
      ;
    }

}

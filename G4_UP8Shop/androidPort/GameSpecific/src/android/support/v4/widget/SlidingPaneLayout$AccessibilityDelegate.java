// Decompiled from classes.dex (SourceFile: SlidingPaneLayout$AccessibilityDelegate.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

import android.support.v4.view.ViewCompat;
import android.support.v4.view.accessibility.AccessibilityNodeInfoCompat;
class SlidingPaneLayout$AccessibilityDelegate extends android.support.v4.view.AccessibilityDelegateCompat {
    // Fields
    private final android.graphics.Rect mTmpRect;
    final android.support.v4.widget.SlidingPaneLayout this$0;

    // Methods
    SlidingPaneLayout$AccessibilityDelegate(android.support.v4.widget.SlidingPaneLayout p0)
    {
      super();
      this.this$0 = p0;
      this.mTmpRect = new android.graphics.Rect();
    
    }

    private void copyNodeInfoNoChildren(
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat p0,
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat p1)
    {
      android.graphics.Rect mTmpRect;
      mTmpRect = this.mTmpRect;
      p1.getBoundsInParent(mTmpRect);
      p0.setBoundsInParent(mTmpRect);
      p1.getBoundsInScreen(mTmpRect);
      p0.setBoundsInScreen(mTmpRect);
      p0.setVisibleToUser(p1.isVisibleToUser());
      p0.setPackageName(p1.getPackageName());
      p0.setClassName(p1.getClassName());
      p0.setContentDescription(p1.getContentDescription());
      p0.setEnabled(p1.isEnabled());
      p0.setClickable(p1.isClickable());
      p0.setFocusable(p1.isFocusable());
      p0.setFocused(p1.isFocused());
      p0.setAccessibilityFocused(p1.isAccessibilityFocused());
      p0.setSelected(p1.isSelected());
      p0.setLongClickable(p1.isLongClickable());
      p0.addAction(p1.getActions());
      p0.setMovementGranularities(p1.getMovementGranularities());
    }

    public boolean filter(android.view.View p0)
    {
      return this.this$0.isDimmed(p0);
    }

    public void onInitializeAccessibilityEvent(
            android.view.View p0,
            android.view.accessibility.AccessibilityEvent p1)
    {
      super.onInitializeAccessibilityEvent(p0, p1);
      p1.setClassName(android.support.v4.widget.SlidingPaneLayout.class.getName());
    }

    public void onInitializeAccessibilityNodeInfo(
            android.view.View p0,
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat p1)
    {
      android.support.v4.view.accessibility.AccessibilityNodeInfoCompat v3; // RETVAL
      android.view.ViewParent ParentForAccessibility; // RETVAL
      int ChildCount;
      int i;
      android.view.View ChildAt;
      v3 = AccessibilityNodeInfoCompat.obtain(p1);
      super.onInitializeAccessibilityNodeInfo(p0, v3);
      this.copyNodeInfoNoChildren(p1, v3);
      v3.recycle();
      p1.setClassName(android.support.v4.widget.SlidingPaneLayout.class.getName());
      p1.setSource(p0);
      ParentForAccessibility = ViewCompat.getParentForAccessibility(p0);
      if ( ParentForAccessibility instanceof android.view.View )
        p1.setParent((android.view.View)ParentForAccessibility);
      ChildCount = this.this$0.getChildCount();
      for ( i = 0; i < ChildCount; ++i )
      {
        ChildAt = this.this$0.getChildAt(i);
        if ( !this.filter(ChildAt) && ChildAt.getVisibility() == 0 )
        {
          ViewCompat.setImportantForAccessibility(ChildAt, 1);
          p1.addChild(ChildAt);
        }
      }
    }

    public boolean onRequestSendAccessibilityEvent(
            android.view.ViewGroup p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      return !this.filter(p1) && super.onRequestSendAccessibilityEvent(p0, p1, p2);
    }

}

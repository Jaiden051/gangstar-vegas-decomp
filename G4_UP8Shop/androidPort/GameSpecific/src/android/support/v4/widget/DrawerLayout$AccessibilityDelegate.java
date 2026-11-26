// Decompiled from classes.dex (SourceFile: DrawerLayout$AccessibilityDelegate.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

import android.support.v4.view.ViewCompat;
import android.support.v4.view.accessibility.AccessibilityNodeInfoCompat;
class DrawerLayout$AccessibilityDelegate extends android.support.v4.view.AccessibilityDelegateCompat {
    // Fields
    private final android.graphics.Rect mTmpRect;
    final android.support.v4.widget.DrawerLayout this$0;

    // Methods
    DrawerLayout$AccessibilityDelegate(android.support.v4.widget.DrawerLayout p0)
    {
      super();
      this.this$0 = p0;
      this.mTmpRect = new android.graphics.Rect();
    
    }

    private void addChildrenForAccessibility(
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat p0,
            android.view.ViewGroup p1)
    {
      int ChildCount;
      int i;
      android.view.View ChildAt;
      ChildCount = p1.getChildCount();
      for ( i = 0; i < ChildCount; ++i )
      {
        ChildAt = p1.getChildAt(i);
        if ( !this.filter(ChildAt) )
        {
          switch ( ViewCompat.getImportantForAccessibility(ChildAt) )
          {
            case 0:
              ViewCompat.setImportantForAccessibility(ChildAt, 1);
            case 1:
              p0.addChild(ChildAt);
              break;
            case 2:
              if ( ChildAt instanceof android.view.ViewGroup )
                this.addChildrenForAccessibility(p0, (android.view.ViewGroup)ChildAt);
              break;
            default:
              continue;
          }
        }
      }
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
    }

    public boolean filter(android.view.View p0)
    {
      android.view.View OpenDrawer; // RETVAL
    
      OpenDrawer = this.this$0.findOpenDrawer();
      return OpenDrawer != null && OpenDrawer != p0;
    }

    public void onInitializeAccessibilityNodeInfo(
            android.view.View p0,
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat p1)
    {
      android.support.v4.view.accessibility.AccessibilityNodeInfoCompat v3;
      android.view.ViewParent ParentForAccessibility; // RETVAL
    
      v3 = AccessibilityNodeInfoCompat.obtain(p1);
      super.onInitializeAccessibilityNodeInfo(p0, v3);
      p1.setSource(p0);
      ParentForAccessibility = ViewCompat.getParentForAccessibility(p0);
      if ( ParentForAccessibility instanceof android.view.View )
        p1.setParent((android.view.View)ParentForAccessibility);
      this.copyNodeInfoNoChildren(p1, v3);
      v3.recycle();
      this.addChildrenForAccessibility(p1, (android.view.ViewGroup)p0);
    }

    public boolean onRequestSendAccessibilityEvent(
            android.view.ViewGroup p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      return !this.filter(p1) && super.onRequestSendAccessibilityEvent(p0, p1, p2);
    }

}

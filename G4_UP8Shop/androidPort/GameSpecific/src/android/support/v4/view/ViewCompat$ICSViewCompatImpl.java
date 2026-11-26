// Decompiled from classes.dex (SourceFile: ViewCompat$ICSViewCompatImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class ViewCompat$ICSViewCompatImpl extends android.support.v4.view.ViewCompat$HCViewCompatImpl {
    // Methods
    ViewCompat$ICSViewCompatImpl()
    {
      super();
    }

    public boolean canScrollHorizontally(android.view.View p0, int p1)
    {
      return ViewCompatICS.canScrollHorizontally(p0, p1);
    }

    public boolean canScrollVertically(android.view.View p0, int p1)
    {
      return ViewCompatICS.canScrollVertically(p0, p1);
    }

    public void onInitializeAccessibilityEvent(
            android.view.View p0,
            android.view.accessibility.AccessibilityEvent p1)
    {
      ViewCompatICS.onInitializeAccessibilityEvent(p0, p1);
    }

    public void onInitializeAccessibilityNodeInfo(
            android.view.View p0,
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat p1)
    {
      ViewCompatICS.onInitializeAccessibilityNodeInfo(p0, p1.getInfo());
    }

    public void onPopulateAccessibilityEvent(
            android.view.View p0,
            android.view.accessibility.AccessibilityEvent p1)
    {
      ViewCompatICS.onPopulateAccessibilityEvent(p0, p1);
    }

    public void setAccessibilityDelegate(
            android.view.View p0,
            android.support.v4.view.AccessibilityDelegateCompat p1)
    {
      ViewCompatICS.setAccessibilityDelegate(p0, p1.getBridge());
    }

}

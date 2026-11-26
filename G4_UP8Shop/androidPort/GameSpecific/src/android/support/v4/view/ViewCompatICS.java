// Decompiled from classes.dex (SourceFile: ViewCompatICS.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class ViewCompatICS {
    // Methods
    ViewCompatICS()
    {
      super();
    }

    public static boolean canScrollHorizontally(android.view.View p0, int p1)
    {
      return p0.canScrollHorizontally(p1);
    }

    public static boolean canScrollVertically(android.view.View p0, int p1)
    {
      return p0.canScrollVertically(p1);
    }

    public static void onInitializeAccessibilityEvent(
            android.view.View p0,
            android.view.accessibility.AccessibilityEvent p1)
    {
      p0.onInitializeAccessibilityEvent(p1);
    }

    public static void onInitializeAccessibilityNodeInfo(android.view.View p0, Object p1)
    {
      p0.onInitializeAccessibilityNodeInfo((android.view.accessibility.AccessibilityNodeInfo)p1);
    }

    public static void onPopulateAccessibilityEvent(
            android.view.View p0,
            android.view.accessibility.AccessibilityEvent p1)
    {
      p0.onPopulateAccessibilityEvent(p1);
    }

    public static void setAccessibilityDelegate(android.view.View p0, Object p1)
    {
      p0.setAccessibilityDelegate((android.view.View.AccessibilityDelegate)p1);
    }

}

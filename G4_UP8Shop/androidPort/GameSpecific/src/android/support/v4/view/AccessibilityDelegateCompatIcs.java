// Decompiled from classes.dex (SourceFile: AccessibilityDelegateCompatIcs.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class AccessibilityDelegateCompatIcs {
    // Methods
    AccessibilityDelegateCompatIcs()
    {
      super();
    }

    public static boolean dispatchPopulateAccessibilityEvent(
            Object p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      return ((android.view.View.AccessibilityDelegate)p0).dispatchPopulateAccessibilityEvent(p1, p2);
    }

    public static Object newAccessibilityDelegateBridge(
            android.support.v4.view.AccessibilityDelegateCompatIcs$AccessibilityDelegateBridge p0)
    {
      return new android.support.v4.view.AccessibilityDelegateCompatIcs$1(p0);
    }

    public static Object newAccessibilityDelegateDefaultImpl()
    {
      return new android.view.View.AccessibilityDelegate();
    }

    public static void onInitializeAccessibilityEvent(
            Object p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      ((android.view.View.AccessibilityDelegate)p0).onInitializeAccessibilityEvent(p1, p2);
    }

    public static void onInitializeAccessibilityNodeInfo(
            Object p0,
            android.view.View p1,
            Object p2)
    {
      ((android.view.View.AccessibilityDelegate)p0).onInitializeAccessibilityNodeInfo(p1, (android.view.accessibility.AccessibilityNodeInfo)p2);
    }

    public static void onPopulateAccessibilityEvent(
            Object p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      ((android.view.View.AccessibilityDelegate)p0).onPopulateAccessibilityEvent(p1, p2);
    }

    public static boolean onRequestSendAccessibilityEvent(
            Object p0,
            android.view.ViewGroup p1,
            android.view.View p2,
            android.view.accessibility.AccessibilityEvent p3)
    {
      return ((android.view.View.AccessibilityDelegate)p0).onRequestSendAccessibilityEvent(p1, p2, p3);
    }

    public static void sendAccessibilityEvent(Object p0, android.view.View p1, int p2)
    {
      ((android.view.View.AccessibilityDelegate)p0).sendAccessibilityEvent(p1, p2);
    }

    public static void sendAccessibilityEventUnchecked(
            Object p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      ((android.view.View.AccessibilityDelegate)p0).sendAccessibilityEventUnchecked(p1, p2);
    }

}

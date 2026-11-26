// Decompiled from classes.dex (SourceFile: AccessibilityDelegateCompatJellyBean.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class AccessibilityDelegateCompatJellyBean {
    // Methods
    AccessibilityDelegateCompatJellyBean()
    {
      super();
    }

    public static Object getAccessibilityNodeProvider(Object p0, android.view.View p1)
    {
      return ((android.view.View.AccessibilityDelegate)p0).getAccessibilityNodeProvider(p1);
    }

    public static Object newAccessibilityDelegateBridge(
            android.support.v4.view.AccessibilityDelegateCompatJellyBean$AccessibilityDelegateBridgeJellyBean p0)
    {
      return new android.support.v4.view.AccessibilityDelegateCompatJellyBean$1(p0);
    }

    public static boolean performAccessibilityAction(
            Object p0,
            android.view.View p1,
            int p2,
            android.os.Bundle p3)
    {
      return ((android.view.View.AccessibilityDelegate)p0).performAccessibilityAction(p1, p2, p3);
    }

}

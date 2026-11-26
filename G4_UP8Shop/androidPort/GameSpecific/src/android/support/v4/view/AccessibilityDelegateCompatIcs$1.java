// Decompiled from classes.dex (SourceFile: AccessibilityDelegateCompatIcs$1.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

final class AccessibilityDelegateCompatIcs$1 extends android.view.View.AccessibilityDelegate {
    // Fields
    final android.support.v4.view.AccessibilityDelegateCompatIcs$AccessibilityDelegateBridge val$bridge;

    // Methods
    AccessibilityDelegateCompatIcs$1(android.support.v4.view.AccessibilityDelegateCompatIcs$AccessibilityDelegateBridge p0)
    {
      super();
      this.val$bridge = p0;
    
    }

    public final boolean dispatchPopulateAccessibilityEvent(
            android.view.View p0,
            android.view.accessibility.AccessibilityEvent p1)
    {
      return this.val$bridge.dispatchPopulateAccessibilityEvent(p0, p1);
    }

    public final void onInitializeAccessibilityEvent(
            android.view.View p0,
            android.view.accessibility.AccessibilityEvent p1)
    {
      this.val$bridge.onInitializeAccessibilityEvent(p0, p1);
    }

    public final void onInitializeAccessibilityNodeInfo(
            android.view.View p0,
            android.view.accessibility.AccessibilityNodeInfo p1)
    {
      this.val$bridge.onInitializeAccessibilityNodeInfo(p0, p1);
    }

    public final void onPopulateAccessibilityEvent(
            android.view.View p0,
            android.view.accessibility.AccessibilityEvent p1)
    {
      this.val$bridge.onPopulateAccessibilityEvent(p0, p1);
    }

    public final boolean onRequestSendAccessibilityEvent(
            android.view.ViewGroup p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      return this.val$bridge.onRequestSendAccessibilityEvent(p0, p1, p2);
    }

    public final void sendAccessibilityEvent(android.view.View p0, int p1)
    {
      this.val$bridge.sendAccessibilityEvent(p0, p1);
    }

    public final void sendAccessibilityEventUnchecked(
            android.view.View p0,
            android.view.accessibility.AccessibilityEvent p1)
    {
      this.val$bridge.sendAccessibilityEventUnchecked(p0, p1);
    }

}

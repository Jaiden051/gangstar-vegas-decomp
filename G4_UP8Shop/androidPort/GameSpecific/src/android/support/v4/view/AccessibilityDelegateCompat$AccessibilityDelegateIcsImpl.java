// Decompiled from classes.dex (SourceFile: AccessibilityDelegateCompat$AccessibilityDelegateIcsImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class AccessibilityDelegateCompat$AccessibilityDelegateIcsImpl extends android.support.v4.view.AccessibilityDelegateCompat$AccessibilityDelegateStubImpl {
    // Methods
    AccessibilityDelegateCompat$AccessibilityDelegateIcsImpl()
    {
      super();
    }

    public boolean dispatchPopulateAccessibilityEvent(
            Object p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      return AccessibilityDelegateCompatIcs.dispatchPopulateAccessibilityEvent(p0, p1, p2);
    }

    public Object newAccessiblityDelegateBridge(
            android.support.v4.view.AccessibilityDelegateCompat p0)
    {
      return AccessibilityDelegateCompatIcs.newAccessibilityDelegateBridge((android.support.v4.view.AccessibilityDelegateCompatIcs$AccessibilityDelegateBridge)new android.support.v4.view.AccessibilityDelegateCompat$AccessibilityDelegateIcsImpl$1(this, p0));
    }

    public Object newAccessiblityDelegateDefaultImpl()
    {
      return AccessibilityDelegateCompatIcs.newAccessibilityDelegateDefaultImpl();
    }

    public void onInitializeAccessibilityEvent(
            Object p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      AccessibilityDelegateCompatIcs.onInitializeAccessibilityEvent(p0, p1, p2);
    }

    public void onInitializeAccessibilityNodeInfo(
            Object p0,
            android.view.View p1,
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat p2)
    {
      AccessibilityDelegateCompatIcs.onInitializeAccessibilityNodeInfo(p0, p1, p2.getInfo());
    }

    public void onPopulateAccessibilityEvent(
            Object p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      AccessibilityDelegateCompatIcs.onPopulateAccessibilityEvent(p0, p1, p2);
    }

    public boolean onRequestSendAccessibilityEvent(
            Object p0,
            android.view.ViewGroup p1,
            android.view.View p2,
            android.view.accessibility.AccessibilityEvent p3)
    {
      return AccessibilityDelegateCompatIcs.onRequestSendAccessibilityEvent(p0, p1, p2, p3);
    }

    public void sendAccessibilityEvent(
            Object p0,
            android.view.View p1,
            int p2)
    {
      AccessibilityDelegateCompatIcs.sendAccessibilityEvent(p0, p1, p2);
    }

    public void sendAccessibilityEventUnchecked(
            Object p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      AccessibilityDelegateCompatIcs.sendAccessibilityEventUnchecked(p0, p1, p2);
    }

}

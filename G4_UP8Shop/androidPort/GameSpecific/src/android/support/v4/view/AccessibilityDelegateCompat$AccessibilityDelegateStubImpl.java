// Decompiled from classes.dex (SourceFile: AccessibilityDelegateCompat$AccessibilityDelegateStubImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class AccessibilityDelegateCompat$AccessibilityDelegateStubImpl implements android.support.v4.view.AccessibilityDelegateCompat$AccessibilityDelegateImpl {
    // Methods
    AccessibilityDelegateCompat$AccessibilityDelegateStubImpl()
    {
      super();
    }

    public boolean dispatchPopulateAccessibilityEvent(
            Object p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      return false;
    }

    public android.support.v4.view.accessibility.AccessibilityNodeProviderCompat getAccessibilityNodeProvider(
            Object p0,
            android.view.View p1)
    {
      return null;
    }

    public Object newAccessiblityDelegateBridge(
            android.support.v4.view.AccessibilityDelegateCompat p0)
    {
      return null;
    }

    public Object newAccessiblityDelegateDefaultImpl()
    {
      return null;
    }

    public void onInitializeAccessibilityEvent(
            Object p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      ;
    }

    public void onInitializeAccessibilityNodeInfo(
            Object p0,
            android.view.View p1,
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat p2)
    {
      ;
    }

    public void onPopulateAccessibilityEvent(
            Object p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      ;
    }

    public boolean onRequestSendAccessibilityEvent(
            Object p0,
            android.view.ViewGroup p1,
            android.view.View p2,
            android.view.accessibility.AccessibilityEvent p3)
    {
      return true;
    }

    public boolean performAccessibilityAction(
            Object p0,
            android.view.View p1,
            int p2,
            android.os.Bundle p3)
    {
      return false;
    }

    public void sendAccessibilityEvent(
            Object p0,
            android.view.View p1,
            int p2)
    {
      ;
    }

    public void sendAccessibilityEventUnchecked(
            Object p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      ;
    }

}

// Decompiled from classes.dex (SourceFile: AccessibilityDelegateCompat$AccessibilityDelegateImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

interface AccessibilityDelegateCompat$AccessibilityDelegateImpl {
    // Methods
    public abstract boolean dispatchPopulateAccessibilityEvent(java.lang.Object p0, android.view.View p1, android.view.accessibility.AccessibilityEvent p2);

    public abstract android.support.v4.view.accessibility.AccessibilityNodeProviderCompat getAccessibilityNodeProvider(java.lang.Object p0, android.view.View p1);

    public abstract java.lang.Object newAccessiblityDelegateBridge(android.support.v4.view.AccessibilityDelegateCompat p0);

    public abstract java.lang.Object newAccessiblityDelegateDefaultImpl();

    public abstract void onInitializeAccessibilityEvent(java.lang.Object p0, android.view.View p1, android.view.accessibility.AccessibilityEvent p2);

    public abstract void onInitializeAccessibilityNodeInfo(java.lang.Object p0, android.view.View p1, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat p2);

    public abstract void onPopulateAccessibilityEvent(java.lang.Object p0, android.view.View p1, android.view.accessibility.AccessibilityEvent p2);

    public abstract boolean onRequestSendAccessibilityEvent(java.lang.Object p0, android.view.ViewGroup p1, android.view.View p2, android.view.accessibility.AccessibilityEvent p3);

    public abstract boolean performAccessibilityAction(java.lang.Object p0, android.view.View p1, int p2, android.os.Bundle p3);

    public abstract void sendAccessibilityEvent(java.lang.Object p0, android.view.View p1, int p2);

    public abstract void sendAccessibilityEventUnchecked(java.lang.Object p0, android.view.View p1, android.view.accessibility.AccessibilityEvent p2);

}

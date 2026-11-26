// Decompiled from classes.dex (SourceFile: AccessibilityDelegateCompatIcs$AccessibilityDelegateBridge.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

public interface AccessibilityDelegateCompatIcs$AccessibilityDelegateBridge {
    // Methods
    public abstract boolean dispatchPopulateAccessibilityEvent(android.view.View p0, android.view.accessibility.AccessibilityEvent p1);

    public abstract void onInitializeAccessibilityEvent(android.view.View p0, android.view.accessibility.AccessibilityEvent p1);

    public abstract void onInitializeAccessibilityNodeInfo(android.view.View p0, java.lang.Object p1);

    public abstract void onPopulateAccessibilityEvent(android.view.View p0, android.view.accessibility.AccessibilityEvent p1);

    public abstract boolean onRequestSendAccessibilityEvent(android.view.ViewGroup p0, android.view.View p1, android.view.accessibility.AccessibilityEvent p2);

    public abstract void sendAccessibilityEvent(android.view.View p0, int p1);

    public abstract void sendAccessibilityEventUnchecked(android.view.View p0, android.view.accessibility.AccessibilityEvent p1);

}

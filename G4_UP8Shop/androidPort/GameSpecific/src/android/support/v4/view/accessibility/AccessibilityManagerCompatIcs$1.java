// Decompiled from classes.dex (SourceFile: AccessibilityManagerCompatIcs$1.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

final class AccessibilityManagerCompatIcs$1 implements android.view.accessibility.AccessibilityManager.AccessibilityStateChangeListener {
    // Fields
    final android.support.v4.view.accessibility.AccessibilityManagerCompatIcs$AccessibilityStateChangeListenerBridge val$bridge;

    // Methods
    AccessibilityManagerCompatIcs$1(android.support.v4.view.accessibility.AccessibilityManagerCompatIcs$AccessibilityStateChangeListenerBridge p0)
    {
      super();
      this.val$bridge = p0;
    
    }

    public final void onAccessibilityStateChanged(boolean p0)
    {
      this.val$bridge.onAccessibilityStateChanged(p0);
    }

}

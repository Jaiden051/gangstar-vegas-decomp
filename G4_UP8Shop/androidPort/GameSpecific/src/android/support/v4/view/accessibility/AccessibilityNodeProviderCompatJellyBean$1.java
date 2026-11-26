// Decompiled from classes.dex (SourceFile: AccessibilityNodeProviderCompatJellyBean$1.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

final class AccessibilityNodeProviderCompatJellyBean$1 extends android.view.accessibility.AccessibilityNodeProvider {
    // Fields
    final android.support.v4.view.accessibility.AccessibilityNodeProviderCompatJellyBean$AccessibilityNodeInfoBridge val$bridge;

    // Methods
    AccessibilityNodeProviderCompatJellyBean$1(android.support.v4.view.accessibility.AccessibilityNodeProviderCompatJellyBean$AccessibilityNodeInfoBridge p0)
    {
      super();
      this.val$bridge = p0;
    
    }

    public final android.view.accessibility.AccessibilityNodeInfo createAccessibilityNodeInfo(
            int p0)
    {
      return (android.view.accessibility.AccessibilityNodeInfo)this.val$bridge.createAccessibilityNodeInfo(p0);
    }

    public final java.util.List<android.view.accessibility.AccessibilityNodeInfo> findAccessibilityNodeInfosByText(
            String p0,
            int p1)
    {
      return this.val$bridge.findAccessibilityNodeInfosByText(p0, p1);
    }

    public final boolean performAction(int p0, int p1, android.os.Bundle p2)
    {
      return this.val$bridge.performAction(p0, p1, p2);
    }

}

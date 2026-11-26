// Decompiled from classes.dex (SourceFile: AccessibilityManagerCompatIcs.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

class AccessibilityManagerCompatIcs {
    // Methods
    AccessibilityManagerCompatIcs()
    {
      super();
    }

    public static boolean addAccessibilityStateChangeListener(
            android.view.accessibility.AccessibilityManager p0,
            Object p1)
    {
      return p0.addAccessibilityStateChangeListener((android.view.accessibility.AccessibilityManager.AccessibilityStateChangeListener)p1);
    }

    public static java.util.List<android.accessibilityservice.AccessibilityServiceInfo> getEnabledAccessibilityServiceList(
            android.view.accessibility.AccessibilityManager p0,
            int p1)
    {
      return p0.getEnabledAccessibilityServiceList(p1);
    }

    public static java.util.List<android.accessibilityservice.AccessibilityServiceInfo> getInstalledAccessibilityServiceList(
            android.view.accessibility.AccessibilityManager p0)
    {
      return p0.getInstalledAccessibilityServiceList();
    }

    public static boolean isTouchExplorationEnabled(
            android.view.accessibility.AccessibilityManager p0)
    {
      return p0.isTouchExplorationEnabled();
    }

    public static Object newAccessibilityStateChangeListener(
            android.support.v4.view.accessibility.AccessibilityManagerCompatIcs$AccessibilityStateChangeListenerBridge p0)
    {
      return new android.support.v4.view.accessibility.AccessibilityManagerCompatIcs$1(p0);
    }

    public static boolean removeAccessibilityStateChangeListener(
            android.view.accessibility.AccessibilityManager p0,
            Object p1)
    {
      return p0.removeAccessibilityStateChangeListener((android.view.accessibility.AccessibilityManager.AccessibilityStateChangeListener)p1);
    }

}

// Decompiled from classes.dex (SourceFile: AccessibilityManagerCompat$AccessibilityManagerIcsImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

class AccessibilityManagerCompat$AccessibilityManagerIcsImpl extends android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityManagerStubImpl {
    // Methods
    AccessibilityManagerCompat$AccessibilityManagerIcsImpl()
    {
      super();
    }

    public boolean addAccessibilityStateChangeListener(
            android.view.accessibility.AccessibilityManager p0,
            android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat p1)
    {
      return AccessibilityManagerCompatIcs.addAccessibilityStateChangeListener(p0, p1.mListener);
    }

    public java.util.List<android.accessibilityservice.AccessibilityServiceInfo> getEnabledAccessibilityServiceList(
            android.view.accessibility.AccessibilityManager p0,
            int p1)
    {
      return AccessibilityManagerCompatIcs.getEnabledAccessibilityServiceList(p0, p1);
    }

    public java.util.List<android.accessibilityservice.AccessibilityServiceInfo> getInstalledAccessibilityServiceList(
            android.view.accessibility.AccessibilityManager p0)
    {
      return AccessibilityManagerCompatIcs.getInstalledAccessibilityServiceList(p0);
    }

    public boolean isTouchExplorationEnabled(
            android.view.accessibility.AccessibilityManager p0)
    {
      return AccessibilityManagerCompatIcs.isTouchExplorationEnabled(p0);
    }

    public Object newAccessiblityStateChangeListener(
            android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat p0)
    {
      return AccessibilityManagerCompatIcs.newAccessibilityStateChangeListener((android.support.v4.view.accessibility.AccessibilityManagerCompatIcs$AccessibilityStateChangeListenerBridge)new android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityManagerIcsImpl$1(this, p0));
    }

    public boolean removeAccessibilityStateChangeListener(
            android.view.accessibility.AccessibilityManager p0,
            android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat p1)
    {
      return AccessibilityManagerCompatIcs.removeAccessibilityStateChangeListener(p0, p1.mListener);
    }

}

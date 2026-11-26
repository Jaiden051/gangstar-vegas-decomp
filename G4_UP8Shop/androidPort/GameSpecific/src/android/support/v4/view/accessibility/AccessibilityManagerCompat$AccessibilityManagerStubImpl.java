// Decompiled from classes.dex (SourceFile: AccessibilityManagerCompat$AccessibilityManagerStubImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

import java.util.Collections;
class AccessibilityManagerCompat$AccessibilityManagerStubImpl implements android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityManagerVersionImpl {
    // Methods
    AccessibilityManagerCompat$AccessibilityManagerStubImpl()
    {
      super();
    }

    public boolean addAccessibilityStateChangeListener(
            android.view.accessibility.AccessibilityManager p0,
            android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat p1)
    {
      return false;
    }

    public java.util.List<android.accessibilityservice.AccessibilityServiceInfo> getEnabledAccessibilityServiceList(
            android.view.accessibility.AccessibilityManager p0,
            int p1)
    {
      return Collections.emptyList();
    }

    public java.util.List<android.accessibilityservice.AccessibilityServiceInfo> getInstalledAccessibilityServiceList(
            android.view.accessibility.AccessibilityManager p0)
    {
      return Collections.emptyList();
    }

    public boolean isTouchExplorationEnabled(
            android.view.accessibility.AccessibilityManager p0)
    {
      return false;
    }

    public Object newAccessiblityStateChangeListener(
            android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat p0)
    {
      return null;
    }

    public boolean removeAccessibilityStateChangeListener(
            android.view.accessibility.AccessibilityManager p0,
            android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat p1)
    {
      return false;
    }

}

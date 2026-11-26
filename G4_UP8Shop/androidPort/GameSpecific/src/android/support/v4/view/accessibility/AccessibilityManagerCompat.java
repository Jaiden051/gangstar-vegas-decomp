// Decompiled from classes.dex (SourceFile: AccessibilityManagerCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

import android.os.Build;
public class AccessibilityManagerCompat {
    // Fields
    private static final android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityManagerVersionImpl IMPL;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 14 )
        IMPL = (android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityManagerVersionImpl)new android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityManagerStubImpl();
      else
        IMPL = (android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityManagerVersionImpl)new android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityManagerIcsImpl();
    }

    public AccessibilityManagerCompat()
    {
      super();
    }

    /* synthetic */ static android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityManagerVersionImpl access$000()
    {
      return IMPL;
    }

    public static boolean addAccessibilityStateChangeListener(
            android.view.accessibility.AccessibilityManager p0,
            android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat p1)
    {
      return IMPL.addAccessibilityStateChangeListener(p0, p1);
    }

    public static java.util.List<android.accessibilityservice.AccessibilityServiceInfo> getEnabledAccessibilityServiceList(
            android.view.accessibility.AccessibilityManager p0,
            int p1)
    {
      return IMPL.getEnabledAccessibilityServiceList(p0, p1);
    }

    public static java.util.List<android.accessibilityservice.AccessibilityServiceInfo> getInstalledAccessibilityServiceList(
            android.view.accessibility.AccessibilityManager p0)
    {
      return IMPL.getInstalledAccessibilityServiceList(p0);
    }

    public static boolean isTouchExplorationEnabled(
            android.view.accessibility.AccessibilityManager p0)
    {
      return IMPL.isTouchExplorationEnabled(p0);
    }

    public static boolean removeAccessibilityStateChangeListener(
            android.view.accessibility.AccessibilityManager p0,
            android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat p1)
    {
      return IMPL.removeAccessibilityStateChangeListener(p0, p1);
    }

}

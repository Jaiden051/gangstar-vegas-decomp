// Decompiled from classes.dex (SourceFile: AccessibilityManagerCompat$AccessibilityManagerVersionImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

interface AccessibilityManagerCompat$AccessibilityManagerVersionImpl {
    // Methods
    public abstract boolean addAccessibilityStateChangeListener(android.view.accessibility.AccessibilityManager p0, android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat p1);

    public abstract java.util.List getEnabledAccessibilityServiceList(android.view.accessibility.AccessibilityManager p0, int p1);

    public abstract java.util.List getInstalledAccessibilityServiceList(android.view.accessibility.AccessibilityManager p0);

    public abstract boolean isTouchExplorationEnabled(android.view.accessibility.AccessibilityManager p0);

    public abstract java.lang.Object newAccessiblityStateChangeListener(android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat p0);

    public abstract boolean removeAccessibilityStateChangeListener(android.view.accessibility.AccessibilityManager p0, android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat p1);

}

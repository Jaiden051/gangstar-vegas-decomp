// Decompiled from classes.dex (SourceFile: AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

public abstract class AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat {
    // Fields
    final java.lang.Object mListener;

    // Methods
    public AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat()
    {
      super();
      this.mListener = AccessibilityManagerCompat.access$000().newAccessiblityStateChangeListener(this);
    }

    public abstract void onAccessibilityStateChanged(boolean p0);

}

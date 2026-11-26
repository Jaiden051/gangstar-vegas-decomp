// Decompiled from classes.dex (SourceFile: AccessibilityManagerCompat$AccessibilityManagerIcsImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

class AccessibilityManagerCompat$AccessibilityManagerIcsImpl$1 implements android.support.v4.view.accessibility.AccessibilityManagerCompatIcs$AccessibilityStateChangeListenerBridge {
    // Fields
    final android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityManagerIcsImpl this$0;
    final android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat val$listener;

    // Methods
    AccessibilityManagerCompat$AccessibilityManagerIcsImpl$1(
            android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityManagerIcsImpl p0,
            android.support.v4.view.accessibility.AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat p1)
    {
      super();
      this.this$0 = p0;
      this.val$listener = p1;
    
    }

    public void onAccessibilityStateChanged(boolean p0)
    {
      this.val$listener.onAccessibilityStateChanged(p0);
    }

}

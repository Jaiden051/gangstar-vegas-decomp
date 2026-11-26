// Decompiled from classes.dex (SourceFile: AccessibilityDelegateCompat$AccessibilityDelegateIcsImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class AccessibilityDelegateCompat$AccessibilityDelegateIcsImpl$1 implements android.support.v4.view.AccessibilityDelegateCompatIcs$AccessibilityDelegateBridge {
    // Fields
    final android.support.v4.view.AccessibilityDelegateCompat$AccessibilityDelegateIcsImpl this$0;
    final android.support.v4.view.AccessibilityDelegateCompat val$compat;

    // Methods
    AccessibilityDelegateCompat$AccessibilityDelegateIcsImpl$1(
            android.support.v4.view.AccessibilityDelegateCompat$AccessibilityDelegateIcsImpl p0,
            android.support.v4.view.AccessibilityDelegateCompat p1)
    {
      super();
      this.this$0 = p0;
      this.val$compat = p1;
    
    }

    public boolean dispatchPopulateAccessibilityEvent(
            android.view.View p0,
            android.view.accessibility.AccessibilityEvent p1)
    {
      return this.val$compat.dispatchPopulateAccessibilityEvent(p0, p1);
    }

    public void onInitializeAccessibilityEvent(
            android.view.View p0,
            android.view.accessibility.AccessibilityEvent p1)
    {
      this.val$compat.onInitializeAccessibilityEvent(p0, p1);
    }

    public void onInitializeAccessibilityNodeInfo(
            android.view.View p0,
            Object p1)
    {
      this.val$compat.onInitializeAccessibilityNodeInfo(p0, new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat(p1));
    }

    public void onPopulateAccessibilityEvent(
            android.view.View p0,
            android.view.accessibility.AccessibilityEvent p1)
    {
      this.val$compat.onPopulateAccessibilityEvent(p0, p1);
    }

    public boolean onRequestSendAccessibilityEvent(
            android.view.ViewGroup p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      return this.val$compat.onRequestSendAccessibilityEvent(p0, p1, p2);
    }

    public void sendAccessibilityEvent(
            android.view.View p0,
            int p1)
    {
      this.val$compat.sendAccessibilityEvent(p0, p1);
    }

    public void sendAccessibilityEventUnchecked(
            android.view.View p0,
            android.view.accessibility.AccessibilityEvent p1)
    {
      this.val$compat.sendAccessibilityEventUnchecked(p0, p1);
    }

}

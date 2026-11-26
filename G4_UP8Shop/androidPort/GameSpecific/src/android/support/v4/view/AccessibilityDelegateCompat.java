// Decompiled from classes.dex (SourceFile: AccessibilityDelegateCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.os.Build;
public class AccessibilityDelegateCompat {
    // Fields
    private static final java.lang.Object DEFAULT_DELEGATE;
    private static final android.support.v4.view.AccessibilityDelegateCompat$AccessibilityDelegateImpl IMPL;
    final java.lang.Object mBridge;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 16 )
      {
        if ( Build.VERSION.SDK_INT < 14 )
          IMPL = (android.support.v4.view.AccessibilityDelegateCompat$AccessibilityDelegateImpl)new android.support.v4.view.AccessibilityDelegateCompat$AccessibilityDelegateStubImpl();
        else
          IMPL = (android.support.v4.view.AccessibilityDelegateCompat$AccessibilityDelegateImpl)new android.support.v4.view.AccessibilityDelegateCompat$AccessibilityDelegateIcsImpl();
      }
      else
      {
        IMPL = (android.support.v4.view.AccessibilityDelegateCompat$AccessibilityDelegateImpl)new android.support.v4.view.AccessibilityDelegateCompat$AccessibilityDelegateJellyBeanImpl();
      }
      DEFAULT_DELEGATE = IMPL.newAccessiblityDelegateDefaultImpl();
    }

    public AccessibilityDelegateCompat()
    {
      super();
      this.mBridge = IMPL.newAccessiblityDelegateBridge(this);
    }

    public boolean dispatchPopulateAccessibilityEvent(
            android.view.View p0,
            android.view.accessibility.AccessibilityEvent p1)
    {
      return IMPL.dispatchPopulateAccessibilityEvent(DEFAULT_DELEGATE, p0, p1);
    }

    public android.support.v4.view.accessibility.AccessibilityNodeProviderCompat getAccessibilityNodeProvider(
            android.view.View p0)
    {
      return IMPL.getAccessibilityNodeProvider(DEFAULT_DELEGATE, p0);
    }

    Object getBridge()
    {
      return this.mBridge;
    }

    public void onInitializeAccessibilityEvent(
            android.view.View p0,
            android.view.accessibility.AccessibilityEvent p1)
    {
      IMPL.onInitializeAccessibilityEvent(DEFAULT_DELEGATE, p0, p1);
    }

    public void onInitializeAccessibilityNodeInfo(
            android.view.View p0,
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat p1)
    {
      IMPL.onInitializeAccessibilityNodeInfo(DEFAULT_DELEGATE, p0, p1);
    }

    public void onPopulateAccessibilityEvent(
            android.view.View p0,
            android.view.accessibility.AccessibilityEvent p1)
    {
      IMPL.onPopulateAccessibilityEvent(DEFAULT_DELEGATE, p0, p1);
    }

    public boolean onRequestSendAccessibilityEvent(
            android.view.ViewGroup p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      return IMPL.onRequestSendAccessibilityEvent(DEFAULT_DELEGATE, p0, p1, p2);
    }

    public boolean performAccessibilityAction(
            android.view.View p0,
            int p1,
            android.os.Bundle p2)
    {
      return IMPL.performAccessibilityAction(DEFAULT_DELEGATE, p0, p1, p2);
    }

    public void sendAccessibilityEvent(android.view.View p0, int p1)
    {
      IMPL.sendAccessibilityEvent(DEFAULT_DELEGATE, p0, p1);
    }

    public void sendAccessibilityEventUnchecked(
            android.view.View p0,
            android.view.accessibility.AccessibilityEvent p1)
    {
      IMPL.sendAccessibilityEventUnchecked(DEFAULT_DELEGATE, p0, p1);
    }

}

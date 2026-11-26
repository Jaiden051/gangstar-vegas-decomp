// Decompiled from classes.dex (SourceFile: AccessibilityDelegateCompat$AccessibilityDelegateJellyBeanImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class AccessibilityDelegateCompat$AccessibilityDelegateJellyBeanImpl extends android.support.v4.view.AccessibilityDelegateCompat$AccessibilityDelegateIcsImpl {
    // Methods
    AccessibilityDelegateCompat$AccessibilityDelegateJellyBeanImpl()
    {
      super();
    }

    public android.support.v4.view.accessibility.AccessibilityNodeProviderCompat getAccessibilityNodeProvider(
            Object p0,
            android.view.View p1)
    {
      Object AccessibilityNodeProvider; // RETVAL
    
      AccessibilityNodeProvider = AccessibilityDelegateCompatJellyBean.getAccessibilityNodeProvider(p0, p1);
      if ( AccessibilityNodeProvider != null )
        return new android.support.v4.view.accessibility.AccessibilityNodeProviderCompat(AccessibilityNodeProvider);
      else
        return null;
    }

    public Object newAccessiblityDelegateBridge(
            android.support.v4.view.AccessibilityDelegateCompat p0)
    {
      return AccessibilityDelegateCompatJellyBean.newAccessibilityDelegateBridge((android.support.v4.view.AccessibilityDelegateCompatJellyBean$AccessibilityDelegateBridgeJellyBean)new android.support.v4.view.AccessibilityDelegateCompat$AccessibilityDelegateJellyBeanImpl$1(this, p0));
    }

    public boolean performAccessibilityAction(
            Object p0,
            android.view.View p1,
            int p2,
            android.os.Bundle p3)
    {
      return AccessibilityDelegateCompatJellyBean.performAccessibilityAction(p0, p1, p2, p3);
    }

}

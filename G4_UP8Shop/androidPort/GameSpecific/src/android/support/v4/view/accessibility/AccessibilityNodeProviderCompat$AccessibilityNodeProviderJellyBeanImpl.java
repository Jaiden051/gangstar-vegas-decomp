// Decompiled from classes.dex (SourceFile: AccessibilityNodeProviderCompat$AccessibilityNodeProviderJellyBeanImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

class AccessibilityNodeProviderCompat$AccessibilityNodeProviderJellyBeanImpl extends android.support.v4.view.accessibility.AccessibilityNodeProviderCompat$AccessibilityNodeProviderStubImpl {
    // Methods
    AccessibilityNodeProviderCompat$AccessibilityNodeProviderJellyBeanImpl()
    {
      super();
    }

    public Object newAccessibilityNodeProviderBridge(
            android.support.v4.view.accessibility.AccessibilityNodeProviderCompat p0)
    {
      return AccessibilityNodeProviderCompatJellyBean.newAccessibilityNodeProviderBridge((android.support.v4.view.accessibility.AccessibilityNodeProviderCompatJellyBean$AccessibilityNodeInfoBridge)new android.support.v4.view.accessibility.AccessibilityNodeProviderCompat$AccessibilityNodeProviderJellyBeanImpl$1(this, p0));
    }

}

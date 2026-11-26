// Decompiled from classes.dex (SourceFile: AccessibilityNodeProviderCompat$AccessibilityNodeProviderKitKatImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

class AccessibilityNodeProviderCompat$AccessibilityNodeProviderKitKatImpl extends android.support.v4.view.accessibility.AccessibilityNodeProviderCompat$AccessibilityNodeProviderStubImpl {
    // Methods
    AccessibilityNodeProviderCompat$AccessibilityNodeProviderKitKatImpl()
    {
      super();
    }

    public Object newAccessibilityNodeProviderBridge(
            android.support.v4.view.accessibility.AccessibilityNodeProviderCompat p0)
    {
      return AccessibilityNodeProviderCompatKitKat.newAccessibilityNodeProviderBridge((android.support.v4.view.accessibility.AccessibilityNodeProviderCompatKitKat$AccessibilityNodeInfoBridge)new android.support.v4.view.accessibility.AccessibilityNodeProviderCompat$AccessibilityNodeProviderKitKatImpl$1(this, p0));
    }

}

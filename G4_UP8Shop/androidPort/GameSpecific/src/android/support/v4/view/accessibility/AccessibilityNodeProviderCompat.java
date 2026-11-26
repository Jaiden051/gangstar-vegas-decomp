// Decompiled from classes.dex (SourceFile: AccessibilityNodeProviderCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

import android.os.Build;
public class AccessibilityNodeProviderCompat {
    // Fields
    private static final android.support.v4.view.accessibility.AccessibilityNodeProviderCompat$AccessibilityNodeProviderImpl IMPL;
    private final java.lang.Object mProvider;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 19 )
      {
        if ( Build.VERSION.SDK_INT < 16 )
          IMPL = (android.support.v4.view.accessibility.AccessibilityNodeProviderCompat$AccessibilityNodeProviderImpl)new android.support.v4.view.accessibility.AccessibilityNodeProviderCompat$AccessibilityNodeProviderStubImpl();
        else
          IMPL = (android.support.v4.view.accessibility.AccessibilityNodeProviderCompat$AccessibilityNodeProviderImpl)new android.support.v4.view.accessibility.AccessibilityNodeProviderCompat$AccessibilityNodeProviderJellyBeanImpl();
      }
      else
      {
        IMPL = (android.support.v4.view.accessibility.AccessibilityNodeProviderCompat$AccessibilityNodeProviderImpl)new android.support.v4.view.accessibility.AccessibilityNodeProviderCompat$AccessibilityNodeProviderKitKatImpl();
      }
    }

    public AccessibilityNodeProviderCompat()
    {
      super();
      this.mProvider = IMPL.newAccessibilityNodeProviderBridge(this);
    }

    public AccessibilityNodeProviderCompat(Object p0)
    {
      super();
      this.mProvider = p0;
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat createAccessibilityNodeInfo(
            int p0)
    {
      return null;
    }

    public java.util.List<android.support.v4.view.accessibility.AccessibilityNodeInfoCompat> findAccessibilityNodeInfosByText(
            String p0,
            int p1)
    {
      return null;
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat findFocus(
            int p0)
    {
      return null;
    }

    public Object getProvider()
    {
      return this.mProvider;
    }

    public boolean performAction(int p0, int p1, android.os.Bundle p2)
    {
      return false;
    }

}

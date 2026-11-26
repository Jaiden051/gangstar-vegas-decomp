// Decompiled from classes.dex (SourceFile: AccessibilityNodeProviderCompat$AccessibilityNodeProviderJellyBeanImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

import android.view.accessibility.AccessibilityNodeInfo;
class AccessibilityNodeProviderCompat$AccessibilityNodeProviderJellyBeanImpl$1 implements android.support.v4.view.accessibility.AccessibilityNodeProviderCompatJellyBean$AccessibilityNodeInfoBridge {
    // Fields
    final android.support.v4.view.accessibility.AccessibilityNodeProviderCompat$AccessibilityNodeProviderJellyBeanImpl this$0;
    final android.support.v4.view.accessibility.AccessibilityNodeProviderCompat val$compat;

    // Methods
    AccessibilityNodeProviderCompat$AccessibilityNodeProviderJellyBeanImpl$1(
            android.support.v4.view.accessibility.AccessibilityNodeProviderCompat$AccessibilityNodeProviderJellyBeanImpl p0,
            android.support.v4.view.accessibility.AccessibilityNodeProviderCompat p1)
    {
      super();
      this.this$0 = p0;
      this.val$compat = p1;
    
    }

    public Object createAccessibilityNodeInfo(
            int p0)
    {
      android.support.v4.view.accessibility.AccessibilityNodeInfoCompat AccessibilityNodeInfo; // RETVAL
    
      AccessibilityNodeInfo = this.val$compat.createAccessibilityNodeInfo(p0);
      if ( AccessibilityNodeInfo != null )
        return AccessibilityNodeInfo.getInfo();
      else
        return null;
    }

    public java.util.List<Object> findAccessibilityNodeInfosByText(
            String p0,
            int p1)
    {
      java.util.List AccessibilityNodeInfosByText;
      java.util.List v4;
      int v5;
      int i;
      AccessibilityNodeInfosByText = this.val$compat.findAccessibilityNodeInfosByText(p0, p1);
      v4 = new java.util.ArrayList();
      v5 = AccessibilityNodeInfosByText.size();
      for ( i = 0; i < v5; ++i )
        v4.add(((android.support.v4.view.accessibility.AccessibilityNodeInfoCompat)AccessibilityNodeInfosByText.get(i)).getInfo());
      return v4;
    }

    public boolean performAction(
            int p0,
            int p1,
            android.os.Bundle p2)
    {
      return this.val$compat.performAction(p0, p1, p2);
    }

}

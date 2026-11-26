// Decompiled from classes.dex (SourceFile: AccessibilityNodeInfoCompatKitKat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

class AccessibilityNodeInfoCompatKitKat {
    // Methods
    AccessibilityNodeInfoCompatKitKat()
    {
      super();
    }

    public static int getLiveRegion(Object p0)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).getLiveRegion();
    }

    public static void setLiveRegion(Object p0, int p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setLiveRegion(p1);
    }

}

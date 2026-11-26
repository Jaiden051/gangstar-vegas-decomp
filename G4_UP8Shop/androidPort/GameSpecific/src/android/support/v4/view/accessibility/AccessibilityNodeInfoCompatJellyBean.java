// Decompiled from classes.dex (SourceFile: AccessibilityNodeInfoCompatJellyBean.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

import android.view.accessibility.AccessibilityNodeInfo;
class AccessibilityNodeInfoCompatJellyBean {
    // Methods
    AccessibilityNodeInfoCompatJellyBean()
    {
      super();
    }

    public static void addChild(Object p0, android.view.View p1, int p2)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).addChild(p1, p2);
    }

    public static Object findFocus(Object p0, int p1)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).findFocus(p1);
    }

    public static Object focusSearch(Object p0, int p1)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).focusSearch(p1);
    }

    public static int getMovementGranularities(Object p0)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).getMovementGranularities();
    }

    public static boolean isAccessibilityFocused(Object p0)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).isAccessibilityFocused();
    }

    public static boolean isVisibleToUser(Object p0)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).isVisibleToUser();
    }

    public static Object obtain(android.view.View p0, int p1)
    {
      return AccessibilityNodeInfo.obtain(p0, p1);
    }

    public static boolean performAction(Object p0, int p1, android.os.Bundle p2)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).performAction(p1, p2);
    }

    public static void setAccesibilityFocused(Object p0, boolean p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setAccessibilityFocused(p1);
    }

    public static void setMovementGranularities(Object p0, int p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setMovementGranularities(p1);
    }

    public static void setParent(Object p0, android.view.View p1, int p2)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setParent(p1, p2);
    }

    public static void setSource(Object p0, android.view.View p1, int p2)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setSource(p1, p2);
    }

    public static void setVisibleToUser(Object p0, boolean p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setVisibleToUser(p1);
    }

}

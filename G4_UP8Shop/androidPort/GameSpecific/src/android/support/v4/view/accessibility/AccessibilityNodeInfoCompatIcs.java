// Decompiled from classes.dex (SourceFile: AccessibilityNodeInfoCompatIcs.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

import android.view.accessibility.AccessibilityNodeInfo;
class AccessibilityNodeInfoCompatIcs {
    // Methods
    AccessibilityNodeInfoCompatIcs()
    {
      super();
    }

    public static void addAction(Object p0, int p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).addAction(p1);
    }

    public static void addChild(Object p0, android.view.View p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).addChild(p1);
    }

    public static java.util.List<Object> findAccessibilityNodeInfosByText(
            Object p0,
            String p1)
    {
      return (java.util.List)((android.view.accessibility.AccessibilityNodeInfo)p0).findAccessibilityNodeInfosByText(p1);
    }

    public static int getActions(Object p0)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).getActions();
    }

    public static void getBoundsInParent(Object p0, android.graphics.Rect p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).getBoundsInParent(p1);
    }

    public static void getBoundsInScreen(Object p0, android.graphics.Rect p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).getBoundsInScreen(p1);
    }

    public static Object getChild(Object p0, int p1)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).getChild(p1);
    }

    public static int getChildCount(Object p0)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).getChildCount();
    }

    public static CharSequence getClassName(Object p0)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).getClassName();
    }

    public static CharSequence getContentDescription(Object p0)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).getContentDescription();
    }

    public static CharSequence getPackageName(Object p0)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).getPackageName();
    }

    public static Object getParent(Object p0)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).getParent();
    }

    public static CharSequence getText(Object p0)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).getText();
    }

    public static int getWindowId(Object p0)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).getWindowId();
    }

    public static boolean isCheckable(Object p0)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).isCheckable();
    }

    public static boolean isChecked(Object p0)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).isChecked();
    }

    public static boolean isClickable(Object p0)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).isClickable();
    }

    public static boolean isEnabled(Object p0)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).isEnabled();
    }

    public static boolean isFocusable(Object p0)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).isFocusable();
    }

    public static boolean isFocused(Object p0)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).isFocused();
    }

    public static boolean isLongClickable(Object p0)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).isLongClickable();
    }

    public static boolean isPassword(Object p0)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).isPassword();
    }

    public static boolean isScrollable(Object p0)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).isScrollable();
    }

    public static boolean isSelected(Object p0)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).isSelected();
    }

    public static Object obtain()
    {
      return AccessibilityNodeInfo.obtain();
    }

    public static Object obtain(android.view.View p0)
    {
      return AccessibilityNodeInfo.obtain(p0);
    }

    public static Object obtain(Object p0)
    {
      return AccessibilityNodeInfo.obtain((android.view.accessibility.AccessibilityNodeInfo)p0);
    }

    public static boolean performAction(Object p0, int p1)
    {
      return ((android.view.accessibility.AccessibilityNodeInfo)p0).performAction(p1);
    }

    public static void recycle(Object p0)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).recycle();
    }

    public static void setBoundsInParent(Object p0, android.graphics.Rect p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setBoundsInParent(p1);
    }

    public static void setBoundsInScreen(Object p0, android.graphics.Rect p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setBoundsInScreen(p1);
    }

    public static void setCheckable(Object p0, boolean p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setCheckable(p1);
    }

    public static void setChecked(Object p0, boolean p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setChecked(p1);
    }

    public static void setClassName(Object p0, CharSequence p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setClassName(p1);
    }

    public static void setClickable(Object p0, boolean p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setClickable(p1);
    }

    public static void setContentDescription(Object p0, CharSequence p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setContentDescription(p1);
    }

    public static void setEnabled(Object p0, boolean p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setEnabled(p1);
    }

    public static void setFocusable(Object p0, boolean p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setFocusable(p1);
    }

    public static void setFocused(Object p0, boolean p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setFocused(p1);
    }

    public static void setLongClickable(Object p0, boolean p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setLongClickable(p1);
    }

    public static void setPackageName(Object p0, CharSequence p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setPackageName(p1);
    }

    public static void setParent(Object p0, android.view.View p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setParent(p1);
    }

    public static void setPassword(Object p0, boolean p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setPassword(p1);
    }

    public static void setScrollable(Object p0, boolean p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setScrollable(p1);
    }

    public static void setSelected(Object p0, boolean p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setSelected(p1);
    }

    public static void setSource(Object p0, android.view.View p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setSource(p1);
    }

    public static void setText(Object p0, CharSequence p1)
    {
      ((android.view.accessibility.AccessibilityNodeInfo)p0).setText(p1);
    }

}

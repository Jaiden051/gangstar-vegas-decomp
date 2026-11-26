// Decompiled from classes.dex (SourceFile: AccessibilityNodeInfoCompat$AccessibilityNodeInfoJellybeanImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

class AccessibilityNodeInfoCompat$AccessibilityNodeInfoJellybeanImpl extends android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl {
    // Methods
    AccessibilityNodeInfoCompat$AccessibilityNodeInfoJellybeanImpl()
    {
      super();
    }

    public void addChild(
            Object p0,
            android.view.View p1,
            int p2)
    {
      AccessibilityNodeInfoCompatJellyBean.addChild(p0, p1, p2);
    }

    public Object findFocus(Object p0, int p1)
    {
      return AccessibilityNodeInfoCompatJellyBean.findFocus(p0, p1);
    }

    public Object focusSearch(Object p0, int p1)
    {
      return AccessibilityNodeInfoCompatJellyBean.focusSearch(p0, p1);
    }

    public int getMovementGranularities(Object p0)
    {
      return AccessibilityNodeInfoCompatJellyBean.getMovementGranularities(p0);
    }

    public boolean isAccessibilityFocused(Object p0)
    {
      return AccessibilityNodeInfoCompatJellyBean.isAccessibilityFocused(p0);
    }

    public boolean isVisibleToUser(Object p0)
    {
      return AccessibilityNodeInfoCompatJellyBean.isVisibleToUser(p0);
    }

    public Object obtain(android.view.View p0, int p1)
    {
      return AccessibilityNodeInfoCompatJellyBean.obtain(p0, p1);
    }

    public boolean performAction(
            Object p0,
            int p1,
            android.os.Bundle p2)
    {
      return AccessibilityNodeInfoCompatJellyBean.performAction(p0, p1, p2);
    }

    public void setAccessibilityFocused(
            Object p0,
            boolean p1)
    {
      AccessibilityNodeInfoCompatJellyBean.setAccesibilityFocused(p0, p1);
    }

    public void setMovementGranularities(Object p0, int p1)
    {
      AccessibilityNodeInfoCompatJellyBean.setMovementGranularities(p0, p1);
    }

    public void setParent(
            Object p0,
            android.view.View p1,
            int p2)
    {
      AccessibilityNodeInfoCompatJellyBean.setParent(p0, p1, p2);
    }

    public void setSource(
            Object p0,
            android.view.View p1,
            int p2)
    {
      AccessibilityNodeInfoCompatJellyBean.setSource(p0, p1, p2);
    }

    public void setVisibleToUser(Object p0, boolean p1)
    {
      AccessibilityNodeInfoCompatJellyBean.setVisibleToUser(p0, p1);
    }

}

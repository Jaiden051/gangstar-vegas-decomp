// Decompiled from classes.dex (SourceFile: AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

class AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl extends android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl {
    // Methods
    AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl()
    {
      super();
    }

    public void addAction(Object p0, int p1)
    {
      AccessibilityNodeInfoCompatIcs.addAction(p0, p1);
    }

    public void addChild(Object p0, android.view.View p1)
    {
      AccessibilityNodeInfoCompatIcs.addChild(p0, p1);
    }

    public java.util.List<Object> findAccessibilityNodeInfosByText(
            Object p0,
            String p1)
    {
      return AccessibilityNodeInfoCompatIcs.findAccessibilityNodeInfosByText(p0, p1);
    }

    public int getActions(Object p0)
    {
      return AccessibilityNodeInfoCompatIcs.getActions(p0);
    }

    public void getBoundsInParent(
            Object p0,
            android.graphics.Rect p1)
    {
      AccessibilityNodeInfoCompatIcs.getBoundsInParent(p0, p1);
    }

    public void getBoundsInScreen(
            Object p0,
            android.graphics.Rect p1)
    {
      AccessibilityNodeInfoCompatIcs.getBoundsInScreen(p0, p1);
    }

    public Object getChild(Object p0, int p1)
    {
      return AccessibilityNodeInfoCompatIcs.getChild(p0, p1);
    }

    public int getChildCount(Object p0)
    {
      return AccessibilityNodeInfoCompatIcs.getChildCount(p0);
    }

    public CharSequence getClassName(Object p0)
    {
      return AccessibilityNodeInfoCompatIcs.getClassName(p0);
    }

    public CharSequence getContentDescription(Object p0)
    {
      return AccessibilityNodeInfoCompatIcs.getContentDescription(p0);
    }

    public CharSequence getPackageName(Object p0)
    {
      return AccessibilityNodeInfoCompatIcs.getPackageName(p0);
    }

    public Object getParent(Object p0)
    {
      return AccessibilityNodeInfoCompatIcs.getParent(p0);
    }

    public CharSequence getText(Object p0)
    {
      return AccessibilityNodeInfoCompatIcs.getText(p0);
    }

    public int getWindowId(Object p0)
    {
      return AccessibilityNodeInfoCompatIcs.getWindowId(p0);
    }

    public boolean isCheckable(Object p0)
    {
      return AccessibilityNodeInfoCompatIcs.isCheckable(p0);
    }

    public boolean isChecked(Object p0)
    {
      return AccessibilityNodeInfoCompatIcs.isChecked(p0);
    }

    public boolean isClickable(Object p0)
    {
      return AccessibilityNodeInfoCompatIcs.isClickable(p0);
    }

    public boolean isEnabled(Object p0)
    {
      return AccessibilityNodeInfoCompatIcs.isEnabled(p0);
    }

    public boolean isFocusable(Object p0)
    {
      return AccessibilityNodeInfoCompatIcs.isFocusable(p0);
    }

    public boolean isFocused(Object p0)
    {
      return AccessibilityNodeInfoCompatIcs.isFocused(p0);
    }

    public boolean isLongClickable(Object p0)
    {
      return AccessibilityNodeInfoCompatIcs.isLongClickable(p0);
    }

    public boolean isPassword(Object p0)
    {
      return AccessibilityNodeInfoCompatIcs.isPassword(p0);
    }

    public boolean isScrollable(Object p0)
    {
      return AccessibilityNodeInfoCompatIcs.isScrollable(p0);
    }

    public boolean isSelected(Object p0)
    {
      return AccessibilityNodeInfoCompatIcs.isSelected(p0);
    }

    public Object obtain()
    {
      return AccessibilityNodeInfoCompatIcs.obtain();
    }

    public Object obtain(android.view.View p0)
    {
      return AccessibilityNodeInfoCompatIcs.obtain(p0);
    }

    public Object obtain(Object p0)
    {
      return AccessibilityNodeInfoCompatIcs.obtain(p0);
    }

    public boolean performAction(Object p0, int p1)
    {
      return AccessibilityNodeInfoCompatIcs.performAction(p0, p1);
    }

    public void recycle(Object p0)
    {
      AccessibilityNodeInfoCompatIcs.recycle(p0);
    }

    public void setBoundsInParent(
            Object p0,
            android.graphics.Rect p1)
    {
      AccessibilityNodeInfoCompatIcs.setBoundsInParent(p0, p1);
    }

    public void setBoundsInScreen(
            Object p0,
            android.graphics.Rect p1)
    {
      AccessibilityNodeInfoCompatIcs.setBoundsInScreen(p0, p1);
    }

    public void setCheckable(Object p0, boolean p1)
    {
      AccessibilityNodeInfoCompatIcs.setCheckable(p0, p1);
    }

    public void setChecked(Object p0, boolean p1)
    {
      AccessibilityNodeInfoCompatIcs.setChecked(p0, p1);
    }

    public void setClassName(Object p0, CharSequence p1)
    {
      AccessibilityNodeInfoCompatIcs.setClassName(p0, p1);
    }

    public void setClickable(Object p0, boolean p1)
    {
      AccessibilityNodeInfoCompatIcs.setClickable(p0, p1);
    }

    public void setContentDescription(Object p0, CharSequence p1)
    {
      AccessibilityNodeInfoCompatIcs.setContentDescription(p0, p1);
    }

    public void setEnabled(Object p0, boolean p1)
    {
      AccessibilityNodeInfoCompatIcs.setEnabled(p0, p1);
    }

    public void setFocusable(Object p0, boolean p1)
    {
      AccessibilityNodeInfoCompatIcs.setFocusable(p0, p1);
    }

    public void setFocused(Object p0, boolean p1)
    {
      AccessibilityNodeInfoCompatIcs.setFocused(p0, p1);
    }

    public void setLongClickable(Object p0, boolean p1)
    {
      AccessibilityNodeInfoCompatIcs.setLongClickable(p0, p1);
    }

    public void setPackageName(Object p0, CharSequence p1)
    {
      AccessibilityNodeInfoCompatIcs.setPackageName(p0, p1);
    }

    public void setParent(Object p0, android.view.View p1)
    {
      AccessibilityNodeInfoCompatIcs.setParent(p0, p1);
    }

    public void setPassword(Object p0, boolean p1)
    {
      AccessibilityNodeInfoCompatIcs.setPassword(p0, p1);
    }

    public void setScrollable(Object p0, boolean p1)
    {
      AccessibilityNodeInfoCompatIcs.setScrollable(p0, p1);
    }

    public void setSelected(Object p0, boolean p1)
    {
      AccessibilityNodeInfoCompatIcs.setSelected(p0, p1);
    }

    public void setSource(Object p0, android.view.View p1)
    {
      AccessibilityNodeInfoCompatIcs.setSource(p0, p1);
    }

    public void setText(Object p0, CharSequence p1)
    {
      AccessibilityNodeInfoCompatIcs.setText(p0, p1);
    }

}

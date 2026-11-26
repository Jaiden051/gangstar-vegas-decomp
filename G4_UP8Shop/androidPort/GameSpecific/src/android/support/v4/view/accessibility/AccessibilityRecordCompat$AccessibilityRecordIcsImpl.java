// Decompiled from classes.dex (SourceFile: AccessibilityRecordCompat$AccessibilityRecordIcsImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

class AccessibilityRecordCompat$AccessibilityRecordIcsImpl extends android.support.v4.view.accessibility.AccessibilityRecordCompat$AccessibilityRecordStubImpl {
    // Methods
    AccessibilityRecordCompat$AccessibilityRecordIcsImpl()
    {
      super();
    }

    public int getAddedCount(Object p0)
    {
      return AccessibilityRecordCompatIcs.getAddedCount(p0);
    }

    public CharSequence getBeforeText(Object p0)
    {
      return AccessibilityRecordCompatIcs.getBeforeText(p0);
    }

    public CharSequence getClassName(Object p0)
    {
      return AccessibilityRecordCompatIcs.getClassName(p0);
    }

    public CharSequence getContentDescription(Object p0)
    {
      return AccessibilityRecordCompatIcs.getContentDescription(p0);
    }

    public int getCurrentItemIndex(Object p0)
    {
      return AccessibilityRecordCompatIcs.getCurrentItemIndex(p0);
    }

    public int getFromIndex(Object p0)
    {
      return AccessibilityRecordCompatIcs.getFromIndex(p0);
    }

    public int getItemCount(Object p0)
    {
      return AccessibilityRecordCompatIcs.getItemCount(p0);
    }

    public android.os.Parcelable getParcelableData(Object p0)
    {
      return AccessibilityRecordCompatIcs.getParcelableData(p0);
    }

    public int getRemovedCount(Object p0)
    {
      return AccessibilityRecordCompatIcs.getRemovedCount(p0);
    }

    public int getScrollX(Object p0)
    {
      return AccessibilityRecordCompatIcs.getScrollX(p0);
    }

    public int getScrollY(Object p0)
    {
      return AccessibilityRecordCompatIcs.getScrollY(p0);
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat getSource(
            Object p0)
    {
      return AccessibilityNodeInfoCompat.wrapNonNullInstance(AccessibilityRecordCompatIcs.getSource(p0));
    }

    public java.util.List<CharSequence> getText(Object p0)
    {
      return AccessibilityRecordCompatIcs.getText(p0);
    }

    public int getToIndex(Object p0)
    {
      return AccessibilityRecordCompatIcs.getToIndex(p0);
    }

    public int getWindowId(Object p0)
    {
      return AccessibilityRecordCompatIcs.getWindowId(p0);
    }

    public boolean isChecked(Object p0)
    {
      return AccessibilityRecordCompatIcs.isChecked(p0);
    }

    public boolean isEnabled(Object p0)
    {
      return AccessibilityRecordCompatIcs.isEnabled(p0);
    }

    public boolean isFullScreen(Object p0)
    {
      return AccessibilityRecordCompatIcs.isFullScreen(p0);
    }

    public boolean isPassword(Object p0)
    {
      return AccessibilityRecordCompatIcs.isPassword(p0);
    }

    public boolean isScrollable(Object p0)
    {
      return AccessibilityRecordCompatIcs.isScrollable(p0);
    }

    public Object obtain()
    {
      return AccessibilityRecordCompatIcs.obtain();
    }

    public Object obtain(Object p0)
    {
      return AccessibilityRecordCompatIcs.obtain(p0);
    }

    public void recycle(Object p0)
    {
      AccessibilityRecordCompatIcs.recycle(p0);
    }

    public void setAddedCount(Object p0, int p1)
    {
      AccessibilityRecordCompatIcs.setAddedCount(p0, p1);
    }

    public void setBeforeText(Object p0, CharSequence p1)
    {
      AccessibilityRecordCompatIcs.setBeforeText(p0, p1);
    }

    public void setChecked(Object p0, boolean p1)
    {
      AccessibilityRecordCompatIcs.setChecked(p0, p1);
    }

    public void setClassName(Object p0, CharSequence p1)
    {
      AccessibilityRecordCompatIcs.setClassName(p0, p1);
    }

    public void setContentDescription(Object p0, CharSequence p1)
    {
      AccessibilityRecordCompatIcs.setContentDescription(p0, p1);
    }

    public void setCurrentItemIndex(Object p0, int p1)
    {
      AccessibilityRecordCompatIcs.setCurrentItemIndex(p0, p1);
    }

    public void setEnabled(Object p0, boolean p1)
    {
      AccessibilityRecordCompatIcs.setEnabled(p0, p1);
    }

    public void setFromIndex(Object p0, int p1)
    {
      AccessibilityRecordCompatIcs.setFromIndex(p0, p1);
    }

    public void setFullScreen(Object p0, boolean p1)
    {
      AccessibilityRecordCompatIcs.setFullScreen(p0, p1);
    }

    public void setItemCount(Object p0, int p1)
    {
      AccessibilityRecordCompatIcs.setItemCount(p0, p1);
    }

    public void setParcelableData(Object p0, android.os.Parcelable p1)
    {
      AccessibilityRecordCompatIcs.setParcelableData(p0, p1);
    }

    public void setPassword(Object p0, boolean p1)
    {
      AccessibilityRecordCompatIcs.setPassword(p0, p1);
    }

    public void setRemovedCount(Object p0, int p1)
    {
      AccessibilityRecordCompatIcs.setRemovedCount(p0, p1);
    }

    public void setScrollX(Object p0, int p1)
    {
      AccessibilityRecordCompatIcs.setScrollX(p0, p1);
    }

    public void setScrollY(Object p0, int p1)
    {
      AccessibilityRecordCompatIcs.setScrollY(p0, p1);
    }

    public void setScrollable(Object p0, boolean p1)
    {
      AccessibilityRecordCompatIcs.setScrollable(p0, p1);
    }

    public void setSource(Object p0, android.view.View p1)
    {
      AccessibilityRecordCompatIcs.setSource(p0, p1);
    }

    public void setToIndex(Object p0, int p1)
    {
      AccessibilityRecordCompatIcs.setToIndex(p0, p1);
    }

}

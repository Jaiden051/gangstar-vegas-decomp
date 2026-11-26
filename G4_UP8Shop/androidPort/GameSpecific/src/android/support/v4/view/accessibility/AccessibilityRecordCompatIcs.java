// Decompiled from classes.dex (SourceFile: AccessibilityRecordCompatIcs.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

import android.view.accessibility.AccessibilityRecord;
class AccessibilityRecordCompatIcs {
    // Methods
    AccessibilityRecordCompatIcs()
    {
      super();
    }

    public static int getAddedCount(Object p0)
    {
      return ((android.view.accessibility.AccessibilityRecord)p0).getAddedCount();
    }

    public static CharSequence getBeforeText(Object p0)
    {
      return ((android.view.accessibility.AccessibilityRecord)p0).getBeforeText();
    }

    public static CharSequence getClassName(Object p0)
    {
      return ((android.view.accessibility.AccessibilityRecord)p0).getClassName();
    }

    public static CharSequence getContentDescription(Object p0)
    {
      return ((android.view.accessibility.AccessibilityRecord)p0).getContentDescription();
    }

    public static int getCurrentItemIndex(Object p0)
    {
      return ((android.view.accessibility.AccessibilityRecord)p0).getCurrentItemIndex();
    }

    public static int getFromIndex(Object p0)
    {
      return ((android.view.accessibility.AccessibilityRecord)p0).getFromIndex();
    }

    public static int getItemCount(Object p0)
    {
      return ((android.view.accessibility.AccessibilityRecord)p0).getItemCount();
    }

    public static android.os.Parcelable getParcelableData(Object p0)
    {
      return ((android.view.accessibility.AccessibilityRecord)p0).getParcelableData();
    }

    public static int getRemovedCount(Object p0)
    {
      return ((android.view.accessibility.AccessibilityRecord)p0).getRemovedCount();
    }

    public static int getScrollX(Object p0)
    {
      return ((android.view.accessibility.AccessibilityRecord)p0).getScrollX();
    }

    public static int getScrollY(Object p0)
    {
      return ((android.view.accessibility.AccessibilityRecord)p0).getScrollY();
    }

    public static Object getSource(Object p0)
    {
      return ((android.view.accessibility.AccessibilityRecord)p0).getSource();
    }

    public static java.util.List<CharSequence> getText(Object p0)
    {
      return ((android.view.accessibility.AccessibilityRecord)p0).getText();
    }

    public static int getToIndex(Object p0)
    {
      return ((android.view.accessibility.AccessibilityRecord)p0).getToIndex();
    }

    public static int getWindowId(Object p0)
    {
      return ((android.view.accessibility.AccessibilityRecord)p0).getWindowId();
    }

    public static boolean isChecked(Object p0)
    {
      return ((android.view.accessibility.AccessibilityRecord)p0).isChecked();
    }

    public static boolean isEnabled(Object p0)
    {
      return ((android.view.accessibility.AccessibilityRecord)p0).isEnabled();
    }

    public static boolean isFullScreen(Object p0)
    {
      return ((android.view.accessibility.AccessibilityRecord)p0).isFullScreen();
    }

    public static boolean isPassword(Object p0)
    {
      return ((android.view.accessibility.AccessibilityRecord)p0).isPassword();
    }

    public static boolean isScrollable(Object p0)
    {
      return ((android.view.accessibility.AccessibilityRecord)p0).isScrollable();
    }

    public static Object obtain()
    {
      return AccessibilityRecord.obtain();
    }

    public static Object obtain(Object p0)
    {
      return AccessibilityRecord.obtain((android.view.accessibility.AccessibilityRecord)p0);
    }

    public static void recycle(Object p0)
    {
      ((android.view.accessibility.AccessibilityRecord)p0).recycle();
    }

    public static void setAddedCount(Object p0, int p1)
    {
      ((android.view.accessibility.AccessibilityRecord)p0).setAddedCount(p1);
    }

    public static void setBeforeText(Object p0, CharSequence p1)
    {
      ((android.view.accessibility.AccessibilityRecord)p0).setBeforeText(p1);
    }

    public static void setChecked(Object p0, boolean p1)
    {
      ((android.view.accessibility.AccessibilityRecord)p0).setChecked(p1);
    }

    public static void setClassName(Object p0, CharSequence p1)
    {
      ((android.view.accessibility.AccessibilityRecord)p0).setClassName(p1);
    }

    public static void setContentDescription(Object p0, CharSequence p1)
    {
      ((android.view.accessibility.AccessibilityRecord)p0).setContentDescription(p1);
    }

    public static void setCurrentItemIndex(Object p0, int p1)
    {
      ((android.view.accessibility.AccessibilityRecord)p0).setCurrentItemIndex(p1);
    }

    public static void setEnabled(Object p0, boolean p1)
    {
      ((android.view.accessibility.AccessibilityRecord)p0).setEnabled(p1);
    }

    public static void setFromIndex(Object p0, int p1)
    {
      ((android.view.accessibility.AccessibilityRecord)p0).setFromIndex(p1);
    }

    public static void setFullScreen(Object p0, boolean p1)
    {
      ((android.view.accessibility.AccessibilityRecord)p0).setFullScreen(p1);
    }

    public static void setItemCount(Object p0, int p1)
    {
      ((android.view.accessibility.AccessibilityRecord)p0).setItemCount(p1);
    }

    public static void setParcelableData(Object p0, android.os.Parcelable p1)
    {
      ((android.view.accessibility.AccessibilityRecord)p0).setParcelableData(p1);
    }

    public static void setPassword(Object p0, boolean p1)
    {
      ((android.view.accessibility.AccessibilityRecord)p0).setPassword(p1);
    }

    public static void setRemovedCount(Object p0, int p1)
    {
      ((android.view.accessibility.AccessibilityRecord)p0).setRemovedCount(p1);
    }

    public static void setScrollX(Object p0, int p1)
    {
      ((android.view.accessibility.AccessibilityRecord)p0).setScrollX(p1);
    }

    public static void setScrollY(Object p0, int p1)
    {
      ((android.view.accessibility.AccessibilityRecord)p0).setScrollY(p1);
    }

    public static void setScrollable(Object p0, boolean p1)
    {
      ((android.view.accessibility.AccessibilityRecord)p0).setScrollable(p1);
    }

    public static void setSource(Object p0, android.view.View p1)
    {
      ((android.view.accessibility.AccessibilityRecord)p0).setSource(p1);
    }

    public static void setToIndex(Object p0, int p1)
    {
      ((android.view.accessibility.AccessibilityRecord)p0).setToIndex(p1);
    }

}

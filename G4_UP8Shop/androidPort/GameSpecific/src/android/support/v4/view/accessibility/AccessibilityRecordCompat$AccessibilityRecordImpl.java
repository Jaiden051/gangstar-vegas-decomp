// Decompiled from classes.dex (SourceFile: AccessibilityRecordCompat$AccessibilityRecordImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

interface AccessibilityRecordCompat$AccessibilityRecordImpl {
    // Methods
    public abstract int getAddedCount(java.lang.Object p0);

    public abstract java.lang.CharSequence getBeforeText(java.lang.Object p0);

    public abstract java.lang.CharSequence getClassName(java.lang.Object p0);

    public abstract java.lang.CharSequence getContentDescription(java.lang.Object p0);

    public abstract int getCurrentItemIndex(java.lang.Object p0);

    public abstract int getFromIndex(java.lang.Object p0);

    public abstract int getItemCount(java.lang.Object p0);

    public abstract int getMaxScrollX(java.lang.Object p0);

    public abstract int getMaxScrollY(java.lang.Object p0);

    public abstract android.os.Parcelable getParcelableData(java.lang.Object p0);

    public abstract int getRemovedCount(java.lang.Object p0);

    public abstract int getScrollX(java.lang.Object p0);

    public abstract int getScrollY(java.lang.Object p0);

    public abstract android.support.v4.view.accessibility.AccessibilityNodeInfoCompat getSource(java.lang.Object p0);

    public abstract java.util.List getText(java.lang.Object p0);

    public abstract int getToIndex(java.lang.Object p0);

    public abstract int getWindowId(java.lang.Object p0);

    public abstract boolean isChecked(java.lang.Object p0);

    public abstract boolean isEnabled(java.lang.Object p0);

    public abstract boolean isFullScreen(java.lang.Object p0);

    public abstract boolean isPassword(java.lang.Object p0);

    public abstract boolean isScrollable(java.lang.Object p0);

    public abstract java.lang.Object obtain();

    public abstract java.lang.Object obtain(java.lang.Object p0);

    public abstract void recycle(java.lang.Object p0);

    public abstract void setAddedCount(java.lang.Object p0, int p1);

    public abstract void setBeforeText(java.lang.Object p0, java.lang.CharSequence p1);

    public abstract void setChecked(java.lang.Object p0, boolean p1);

    public abstract void setClassName(java.lang.Object p0, java.lang.CharSequence p1);

    public abstract void setContentDescription(java.lang.Object p0, java.lang.CharSequence p1);

    public abstract void setCurrentItemIndex(java.lang.Object p0, int p1);

    public abstract void setEnabled(java.lang.Object p0, boolean p1);

    public abstract void setFromIndex(java.lang.Object p0, int p1);

    public abstract void setFullScreen(java.lang.Object p0, boolean p1);

    public abstract void setItemCount(java.lang.Object p0, int p1);

    public abstract void setMaxScrollX(java.lang.Object p0, int p1);

    public abstract void setMaxScrollY(java.lang.Object p0, int p1);

    public abstract void setParcelableData(java.lang.Object p0, android.os.Parcelable p1);

    public abstract void setPassword(java.lang.Object p0, boolean p1);

    public abstract void setRemovedCount(java.lang.Object p0, int p1);

    public abstract void setScrollX(java.lang.Object p0, int p1);

    public abstract void setScrollY(java.lang.Object p0, int p1);

    public abstract void setScrollable(java.lang.Object p0, boolean p1);

    public abstract void setSource(java.lang.Object p0, android.view.View p1);

    public abstract void setSource(java.lang.Object p0, android.view.View p1, int p2);

    public abstract void setToIndex(java.lang.Object p0, int p1);

}

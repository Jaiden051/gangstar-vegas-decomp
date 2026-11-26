// Decompiled from classes.dex (SourceFile: AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

interface AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl {
    // Methods
    public abstract void addAction(java.lang.Object p0, int p1);

    public abstract void addChild(java.lang.Object p0, android.view.View p1);

    public abstract void addChild(java.lang.Object p0, android.view.View p1, int p2);

    public abstract java.util.List findAccessibilityNodeInfosByText(java.lang.Object p0, java.lang.String p1);

    public abstract java.lang.Object findFocus(java.lang.Object p0, int p1);

    public abstract java.lang.Object focusSearch(java.lang.Object p0, int p1);

    public abstract int getActions(java.lang.Object p0);

    public abstract void getBoundsInParent(java.lang.Object p0, android.graphics.Rect p1);

    public abstract void getBoundsInScreen(java.lang.Object p0, android.graphics.Rect p1);

    public abstract java.lang.Object getChild(java.lang.Object p0, int p1);

    public abstract int getChildCount(java.lang.Object p0);

    public abstract java.lang.CharSequence getClassName(java.lang.Object p0);

    public abstract java.lang.CharSequence getContentDescription(java.lang.Object p0);

    public abstract int getLiveRegion(java.lang.Object p0);

    public abstract int getMovementGranularities(java.lang.Object p0);

    public abstract java.lang.CharSequence getPackageName(java.lang.Object p0);

    public abstract java.lang.Object getParent(java.lang.Object p0);

    public abstract java.lang.CharSequence getText(java.lang.Object p0);

    public abstract java.lang.String getViewIdResourceName(java.lang.Object p0);

    public abstract int getWindowId(java.lang.Object p0);

    public abstract boolean isAccessibilityFocused(java.lang.Object p0);

    public abstract boolean isCheckable(java.lang.Object p0);

    public abstract boolean isChecked(java.lang.Object p0);

    public abstract boolean isClickable(java.lang.Object p0);

    public abstract boolean isEnabled(java.lang.Object p0);

    public abstract boolean isFocusable(java.lang.Object p0);

    public abstract boolean isFocused(java.lang.Object p0);

    public abstract boolean isLongClickable(java.lang.Object p0);

    public abstract boolean isPassword(java.lang.Object p0);

    public abstract boolean isScrollable(java.lang.Object p0);

    public abstract boolean isSelected(java.lang.Object p0);

    public abstract boolean isVisibleToUser(java.lang.Object p0);

    public abstract java.lang.Object obtain();

    public abstract java.lang.Object obtain(android.view.View p0);

    public abstract java.lang.Object obtain(android.view.View p0, int p1);

    public abstract java.lang.Object obtain(java.lang.Object p0);

    public abstract boolean performAction(java.lang.Object p0, int p1);

    public abstract boolean performAction(java.lang.Object p0, int p1, android.os.Bundle p2);

    public abstract void recycle(java.lang.Object p0);

    public abstract void setAccessibilityFocused(java.lang.Object p0, boolean p1);

    public abstract void setBoundsInParent(java.lang.Object p0, android.graphics.Rect p1);

    public abstract void setBoundsInScreen(java.lang.Object p0, android.graphics.Rect p1);

    public abstract void setCheckable(java.lang.Object p0, boolean p1);

    public abstract void setChecked(java.lang.Object p0, boolean p1);

    public abstract void setClassName(java.lang.Object p0, java.lang.CharSequence p1);

    public abstract void setClickable(java.lang.Object p0, boolean p1);

    public abstract void setContentDescription(java.lang.Object p0, java.lang.CharSequence p1);

    public abstract void setEnabled(java.lang.Object p0, boolean p1);

    public abstract void setFocusable(java.lang.Object p0, boolean p1);

    public abstract void setFocused(java.lang.Object p0, boolean p1);

    public abstract void setLiveRegion(java.lang.Object p0, int p1);

    public abstract void setLongClickable(java.lang.Object p0, boolean p1);

    public abstract void setMovementGranularities(java.lang.Object p0, int p1);

    public abstract void setPackageName(java.lang.Object p0, java.lang.CharSequence p1);

    public abstract void setParent(java.lang.Object p0, android.view.View p1);

    public abstract void setParent(java.lang.Object p0, android.view.View p1, int p2);

    public abstract void setPassword(java.lang.Object p0, boolean p1);

    public abstract void setScrollable(java.lang.Object p0, boolean p1);

    public abstract void setSelected(java.lang.Object p0, boolean p1);

    public abstract void setSource(java.lang.Object p0, android.view.View p1);

    public abstract void setSource(java.lang.Object p0, android.view.View p1, int p2);

    public abstract void setText(java.lang.Object p0, java.lang.CharSequence p1);

    public abstract void setViewIdResourceName(java.lang.Object p0, java.lang.String p1);

    public abstract void setVisibleToUser(java.lang.Object p0, boolean p1);

}

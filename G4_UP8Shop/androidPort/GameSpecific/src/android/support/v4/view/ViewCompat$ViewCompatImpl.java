// Decompiled from classes.dex (SourceFile: ViewCompat$ViewCompatImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

interface ViewCompat$ViewCompatImpl {
    // Methods
    public abstract boolean canScrollHorizontally(android.view.View p0, int p1);

    public abstract boolean canScrollVertically(android.view.View p0, int p1);

    public abstract int getAccessibilityLiveRegion(android.view.View p0);

    public abstract android.support.v4.view.accessibility.AccessibilityNodeProviderCompat getAccessibilityNodeProvider(android.view.View p0);

    public abstract float getAlpha(android.view.View p0);

    public abstract int getImportantForAccessibility(android.view.View p0);

    public abstract int getLabelFor(android.view.View p0);

    public abstract int getLayerType(android.view.View p0);

    public abstract int getLayoutDirection(android.view.View p0);

    public abstract int getMeasuredHeightAndState(android.view.View p0);

    public abstract int getMeasuredState(android.view.View p0);

    public abstract int getMeasuredWidthAndState(android.view.View p0);

    public abstract int getOverScrollMode(android.view.View p0);

    public abstract android.view.ViewParent getParentForAccessibility(android.view.View p0);

    public abstract boolean hasTransientState(android.view.View p0);

    public abstract boolean isOpaque(android.view.View p0);

    public abstract void onInitializeAccessibilityEvent(android.view.View p0, android.view.accessibility.AccessibilityEvent p1);

    public abstract void onInitializeAccessibilityNodeInfo(android.view.View p0, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat p1);

    public abstract void onPopulateAccessibilityEvent(android.view.View p0, android.view.accessibility.AccessibilityEvent p1);

    public abstract boolean performAccessibilityAction(android.view.View p0, int p1, android.os.Bundle p2);

    public abstract void postInvalidateOnAnimation(android.view.View p0);

    public abstract void postInvalidateOnAnimation(android.view.View p0, int p1, int p2, int p3, int p4);

    public abstract void postOnAnimation(android.view.View p0, java.lang.Runnable p1);

    public abstract void postOnAnimationDelayed(android.view.View p0, java.lang.Runnable p1, long p2);

    public abstract int resolveSizeAndState(int p0, int p1, int p2);

    public abstract void setAccessibilityDelegate(android.view.View p0, android.support.v4.view.AccessibilityDelegateCompat p1);

    public abstract void setAccessibilityLiveRegion(android.view.View p0, int p1);

    public abstract void setHasTransientState(android.view.View p0, boolean p1);

    public abstract void setImportantForAccessibility(android.view.View p0, int p1);

    public abstract void setLabelFor(android.view.View p0, int p1);

    public abstract void setLayerPaint(android.view.View p0, android.graphics.Paint p1);

    public abstract void setLayerType(android.view.View p0, int p1, android.graphics.Paint p2);

    public abstract void setLayoutDirection(android.view.View p0, int p1);

    public abstract void setOverScrollMode(android.view.View p0, int p1);

}

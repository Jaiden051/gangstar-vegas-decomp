// Decompiled from classes.dex (SourceFile: ViewCompat$JBViewCompatImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class ViewCompat$JBViewCompatImpl extends android.support.v4.view.ViewCompat$ICSViewCompatImpl {
    // Methods
    ViewCompat$JBViewCompatImpl()
    {
      super();
    }

    public android.support.v4.view.accessibility.AccessibilityNodeProviderCompat getAccessibilityNodeProvider(
            android.view.View p0)
    {
      Object AccessibilityNodeProvider; // RETVAL
    
      AccessibilityNodeProvider = ViewCompatJB.getAccessibilityNodeProvider(p0);
      if ( AccessibilityNodeProvider != null )
        return new android.support.v4.view.accessibility.AccessibilityNodeProviderCompat(AccessibilityNodeProvider);
      else
        return null;
    }

    public int getImportantForAccessibility(android.view.View p0)
    {
      return ViewCompatJB.getImportantForAccessibility(p0);
    }

    public android.view.ViewParent getParentForAccessibility(android.view.View p0)
    {
      return ViewCompatJB.getParentForAccessibility(p0);
    }

    public boolean hasTransientState(android.view.View p0)
    {
      return ViewCompatJB.hasTransientState(p0);
    }

    public boolean performAccessibilityAction(
            android.view.View p0,
            int p1,
            android.os.Bundle p2)
    {
      return ViewCompatJB.performAccessibilityAction(p0, p1, p2);
    }

    public void postInvalidateOnAnimation(android.view.View p0)
    {
      ViewCompatJB.postInvalidateOnAnimation(p0);
    }

    public void postInvalidateOnAnimation(android.view.View p0, int p1, int p2, int p3, int p4)
    {
      ViewCompatJB.postInvalidateOnAnimation(p0, p1, p2, p3, p4);
    }

    public void postOnAnimation(android.view.View p0, Runnable p1)
    {
      ViewCompatJB.postOnAnimation(p0, p1);
    }

    public void postOnAnimationDelayed(android.view.View p0, Runnable p1, long p2)
    {
      ViewCompatJB.postOnAnimationDelayed(p0, p1, p2);
    }

    public void setHasTransientState(android.view.View p0, boolean p1)
    {
      ViewCompatJB.setHasTransientState(p0, p1);
    }

    public void setImportantForAccessibility(android.view.View p0, int p1)
    {
      ViewCompatJB.setImportantForAccessibility(p0, p1);
    }

}

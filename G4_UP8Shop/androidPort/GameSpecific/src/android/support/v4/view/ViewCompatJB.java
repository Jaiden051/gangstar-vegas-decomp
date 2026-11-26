// Decompiled from classes.dex (SourceFile: ViewCompatJB.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class ViewCompatJB {
    // Methods
    ViewCompatJB()
    {
      super();
    }

    public static Object getAccessibilityNodeProvider(android.view.View p0)
    {
      return p0.getAccessibilityNodeProvider();
    }

    public static int getImportantForAccessibility(android.view.View p0)
    {
      return p0.getImportantForAccessibility();
    }

    public static android.view.ViewParent getParentForAccessibility(android.view.View p0)
    {
      return p0.getParentForAccessibility();
    }

    public static boolean hasTransientState(android.view.View p0)
    {
      return p0.hasTransientState();
    }

    public static boolean performAccessibilityAction(android.view.View p0, int p1, android.os.Bundle p2)
    {
      return p0.performAccessibilityAction(p1, p2);
    }

    public static void postInvalidateOnAnimation(android.view.View p0)
    {
      p0.postInvalidateOnAnimation();
    }

    public static void postInvalidateOnAnimation(android.view.View p0, int p1, int p2, int p3, int p4)
    {
      p0.postInvalidate(p1, p2, p3, p4);
    }

    public static void postOnAnimation(android.view.View p0, Runnable p1)
    {
      p0.postOnAnimation(p1);
    }

    public static void postOnAnimationDelayed(android.view.View p0, Runnable p1, long p2)
    {
      p0.postOnAnimationDelayed(p1, p2);
    }

    public static void setHasTransientState(android.view.View p0, boolean p1)
    {
      p0.setHasTransientState(p1);
    }

    public static void setImportantForAccessibility(android.view.View p0, int p1)
    {
      p0.setImportantForAccessibility(p1);
    }

}

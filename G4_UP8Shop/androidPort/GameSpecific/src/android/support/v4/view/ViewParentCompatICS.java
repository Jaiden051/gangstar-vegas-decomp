// Decompiled from classes.dex (SourceFile: ViewParentCompatICS.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

public class ViewParentCompatICS {
    // Methods
    public ViewParentCompatICS()
    {
      super();
    }

    public static boolean requestSendAccessibilityEvent(
            android.view.ViewParent p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      return p0.requestSendAccessibilityEvent(p1, p2);
    }

}

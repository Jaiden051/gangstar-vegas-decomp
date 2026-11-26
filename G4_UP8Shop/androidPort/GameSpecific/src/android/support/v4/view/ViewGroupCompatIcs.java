// Decompiled from classes.dex (SourceFile: ViewGroupCompatIcs.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class ViewGroupCompatIcs {
    // Methods
    ViewGroupCompatIcs()
    {
      super();
    }

    public static boolean onRequestSendAccessibilityEvent(
            android.view.ViewGroup p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      return p0.onRequestSendAccessibilityEvent(p1, p2);
    }

}

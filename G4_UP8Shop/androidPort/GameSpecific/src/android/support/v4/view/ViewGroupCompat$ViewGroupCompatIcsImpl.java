// Decompiled from classes.dex (SourceFile: ViewGroupCompat$ViewGroupCompatIcsImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class ViewGroupCompat$ViewGroupCompatIcsImpl extends android.support.v4.view.ViewGroupCompat$ViewGroupCompatHCImpl {
    // Methods
    ViewGroupCompat$ViewGroupCompatIcsImpl()
    {
      super();
    }

    public boolean onRequestSendAccessibilityEvent(
            android.view.ViewGroup p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      return ViewGroupCompatIcs.onRequestSendAccessibilityEvent(p0, p1, p2);
    }

}

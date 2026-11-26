// Decompiled from classes.dex (SourceFile: ViewParentCompat$ViewParentCompatICSImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class ViewParentCompat$ViewParentCompatICSImpl extends android.support.v4.view.ViewParentCompat$ViewParentCompatStubImpl {
    // Methods
    ViewParentCompat$ViewParentCompatICSImpl()
    {
      super();
    }

    public boolean requestSendAccessibilityEvent(
            android.view.ViewParent p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      return ViewParentCompatICS.requestSendAccessibilityEvent(p0, p1, p2);
    }

}

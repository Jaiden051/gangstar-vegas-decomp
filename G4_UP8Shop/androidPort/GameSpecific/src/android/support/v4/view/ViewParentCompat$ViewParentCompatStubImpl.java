// Decompiled from classes.dex (SourceFile: ViewParentCompat$ViewParentCompatStubImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class ViewParentCompat$ViewParentCompatStubImpl implements android.support.v4.view.ViewParentCompat$ViewParentCompatImpl {
    // Methods
    ViewParentCompat$ViewParentCompatStubImpl()
    {
      super();
    }

    public boolean requestSendAccessibilityEvent(
            android.view.ViewParent p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      if ( p1 == null )
        return false;
      ((android.view.accessibility.AccessibilityManager)p1.getContext().getSystemService("accessibility")).sendAccessibilityEvent(p2);
      return true;
    }

}

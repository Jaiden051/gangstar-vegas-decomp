// Decompiled from classes.dex (SourceFile: ViewParentCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.os.Build;
public class ViewParentCompat {
    // Fields
    static final android.support.v4.view.ViewParentCompat$ViewParentCompatImpl IMPL;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 14 )
        IMPL = (android.support.v4.view.ViewParentCompat$ViewParentCompatImpl)new android.support.v4.view.ViewParentCompat$ViewParentCompatStubImpl();
      else
        IMPL = (android.support.v4.view.ViewParentCompat$ViewParentCompatImpl)new android.support.v4.view.ViewParentCompat$ViewParentCompatICSImpl();
    }

    private ViewParentCompat()
    {
      super();
    }

    public static boolean requestSendAccessibilityEvent(
            android.view.ViewParent p0,
            android.view.View p1,
            android.view.accessibility.AccessibilityEvent p2)
    {
      return IMPL.requestSendAccessibilityEvent(p0, p1, p2);
    }

}

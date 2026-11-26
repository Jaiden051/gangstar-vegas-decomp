// Decompiled from classes.dex (SourceFile: ListPopupWindowCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

import android.os.Build;
public class ListPopupWindowCompat {
    // Fields
    static final android.support.v4.widget.ListPopupWindowCompat$ListPopupWindowImpl IMPL;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 19 )
        IMPL = (android.support.v4.widget.ListPopupWindowCompat$ListPopupWindowImpl)new android.support.v4.widget.ListPopupWindowCompat$BaseListPopupWindowImpl();
      else
        IMPL = (android.support.v4.widget.ListPopupWindowCompat$ListPopupWindowImpl)new android.support.v4.widget.ListPopupWindowCompat$KitKatListPopupWindowImpl();
    }

    private ListPopupWindowCompat()
    {
      super();
    }

    public static android.view.View.OnTouchListener createDragToOpenListener(
            Object p0,
            android.view.View p1)
    {
      return IMPL.createDragToOpenListener(p0, p1);
    }

}

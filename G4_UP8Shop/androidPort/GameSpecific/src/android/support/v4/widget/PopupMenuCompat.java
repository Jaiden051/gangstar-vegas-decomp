// Decompiled from classes.dex (SourceFile: PopupMenuCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

import android.os.Build;
public class PopupMenuCompat {
    // Fields
    static final android.support.v4.widget.PopupMenuCompat$PopupMenuImpl IMPL;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 19 )
        IMPL = (android.support.v4.widget.PopupMenuCompat$PopupMenuImpl)new android.support.v4.widget.PopupMenuCompat$BasePopupMenuImpl();
      else
        IMPL = (android.support.v4.widget.PopupMenuCompat$PopupMenuImpl)new android.support.v4.widget.PopupMenuCompat$KitKatPopupMenuImpl();
    }

    private PopupMenuCompat()
    {
      super();
    }

    public static android.view.View.OnTouchListener getDragToOpenListener(Object p0)
    {
      return IMPL.getDragToOpenListener(p0);
    }

}

// Decompiled from classes.dex (SourceFile: ListPopupWindowCompatKitKat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

class ListPopupWindowCompatKitKat {
    // Methods
    ListPopupWindowCompatKitKat()
    {
      super();
    }

    public static android.view.View.OnTouchListener createDragToOpenListener(
            Object p0,
            android.view.View p1)
    {
      return ((android.widget.ListPopupWindow)p0).createDragToOpenListener(p1);
    }

}

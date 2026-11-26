// Decompiled from classes.dex (SourceFile: ListPopupWindowCompat$KitKatListPopupWindowImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

class ListPopupWindowCompat$KitKatListPopupWindowImpl extends android.support.v4.widget.ListPopupWindowCompat$BaseListPopupWindowImpl {
    // Methods
    ListPopupWindowCompat$KitKatListPopupWindowImpl()
    {
      super();
    }

    public android.view.View.OnTouchListener createDragToOpenListener(
            Object p0,
            android.view.View p1)
    {
      return ListPopupWindowCompatKitKat.createDragToOpenListener(p0, p1);
    }

}

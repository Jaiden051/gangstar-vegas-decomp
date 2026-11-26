// Decompiled from classes.dex (SourceFile: SearchViewCompatHoneycomb$2.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

final class SearchViewCompatHoneycomb$2 implements android.widget.SearchView.OnCloseListener {
    // Fields
    final android.support.v4.widget.SearchViewCompatHoneycomb$OnCloseListenerCompatBridge val$listener;

    // Methods
    SearchViewCompatHoneycomb$2(android.support.v4.widget.SearchViewCompatHoneycomb$OnCloseListenerCompatBridge p0)
    {
      super();
      this.val$listener = p0;
    
    }

    public final boolean onClose()
    {
      return this.val$listener.onClose();
    }

}

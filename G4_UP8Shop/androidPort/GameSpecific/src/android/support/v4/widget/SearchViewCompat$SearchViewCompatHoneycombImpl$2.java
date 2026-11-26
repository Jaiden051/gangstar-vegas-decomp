// Decompiled from classes.dex (SourceFile: SearchViewCompat$SearchViewCompatHoneycombImpl$2.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

class SearchViewCompat$SearchViewCompatHoneycombImpl$2 implements android.support.v4.widget.SearchViewCompatHoneycomb$OnCloseListenerCompatBridge {
    // Fields
    final android.support.v4.widget.SearchViewCompat$SearchViewCompatHoneycombImpl this$0;
    final android.support.v4.widget.SearchViewCompat$OnCloseListenerCompat val$listener;

    // Methods
    SearchViewCompat$SearchViewCompatHoneycombImpl$2(
            android.support.v4.widget.SearchViewCompat$SearchViewCompatHoneycombImpl p0,
            android.support.v4.widget.SearchViewCompat$OnCloseListenerCompat p1)
    {
      super();
      this.this$0 = p0;
      this.val$listener = p1;
    
    }

    public boolean onClose()
    {
      return this.val$listener.onClose();
    }

}

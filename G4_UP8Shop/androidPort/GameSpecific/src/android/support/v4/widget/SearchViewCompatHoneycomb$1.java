// Decompiled from classes.dex (SourceFile: SearchViewCompatHoneycomb$1.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

final class SearchViewCompatHoneycomb$1 implements android.widget.SearchView.OnQueryTextListener {
    // Fields
    final android.support.v4.widget.SearchViewCompatHoneycomb$OnQueryTextListenerCompatBridge val$listener;

    // Methods
    SearchViewCompatHoneycomb$1(android.support.v4.widget.SearchViewCompatHoneycomb$OnQueryTextListenerCompatBridge p0)
    {
      super();
      this.val$listener = p0;
    
    }

    public final boolean onQueryTextChange(String p0)
    {
      return this.val$listener.onQueryTextChange(p0);
    }

    public final boolean onQueryTextSubmit(String p0)
    {
      return this.val$listener.onQueryTextSubmit(p0);
    }

}

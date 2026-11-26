// Decompiled from classes.dex (SourceFile: SearchViewCompat$SearchViewCompatHoneycombImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

class SearchViewCompat$SearchViewCompatHoneycombImpl$1 implements android.support.v4.widget.SearchViewCompatHoneycomb$OnQueryTextListenerCompatBridge {
    // Fields
    final android.support.v4.widget.SearchViewCompat$SearchViewCompatHoneycombImpl this$0;
    final android.support.v4.widget.SearchViewCompat$OnQueryTextListenerCompat val$listener;

    // Methods
    SearchViewCompat$SearchViewCompatHoneycombImpl$1(
            android.support.v4.widget.SearchViewCompat$SearchViewCompatHoneycombImpl p0,
            android.support.v4.widget.SearchViewCompat$OnQueryTextListenerCompat p1)
    {
      super();
      this.this$0 = p0;
      this.val$listener = p1;
    
    }

    public boolean onQueryTextChange(String p0)
    {
      return this.val$listener.onQueryTextChange(p0);
    }

    public boolean onQueryTextSubmit(String p0)
    {
      return this.val$listener.onQueryTextSubmit(p0);
    }

}

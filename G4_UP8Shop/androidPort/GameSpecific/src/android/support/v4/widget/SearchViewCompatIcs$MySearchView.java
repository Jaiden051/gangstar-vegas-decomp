// Decompiled from classes.dex (SourceFile: SearchViewCompatIcs$MySearchView.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

public class SearchViewCompatIcs$MySearchView extends android.widget.SearchView {
    // Methods
    public SearchViewCompatIcs$MySearchView(android.content.Context p0)
    {
      super(p0);
    }

    public void onActionViewCollapsed()
    {
      this.setQuery("", false);
      super.onActionViewCollapsed();
    }

}

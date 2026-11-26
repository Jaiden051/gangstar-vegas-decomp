// Decompiled from classes.dex (SourceFile: SearchViewCompat$SearchViewCompatIcsImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

class SearchViewCompat$SearchViewCompatIcsImpl extends android.support.v4.widget.SearchViewCompat$SearchViewCompatHoneycombImpl {
    // Methods
    SearchViewCompat$SearchViewCompatIcsImpl()
    {
      super();
    }

    public android.view.View newSearchView(android.content.Context p0)
    {
      return SearchViewCompatIcs.newSearchView(p0);
    }

    public void setImeOptions(android.view.View p0, int p1)
    {
      SearchViewCompatIcs.setImeOptions(p0, p1);
    }

    public void setInputType(android.view.View p0, int p1)
    {
      SearchViewCompatIcs.setInputType(p0, p1);
    }

}

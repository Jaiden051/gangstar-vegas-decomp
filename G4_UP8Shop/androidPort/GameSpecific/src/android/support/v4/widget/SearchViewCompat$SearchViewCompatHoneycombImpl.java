// Decompiled from classes.dex (SourceFile: SearchViewCompat$SearchViewCompatHoneycombImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

class SearchViewCompat$SearchViewCompatHoneycombImpl extends android.support.v4.widget.SearchViewCompat$SearchViewCompatStubImpl {
    // Methods
    SearchViewCompat$SearchViewCompatHoneycombImpl()
    {
      super();
    }

    public CharSequence getQuery(android.view.View p0)
    {
      return SearchViewCompatHoneycomb.getQuery(p0);
    }

    public boolean isIconified(android.view.View p0)
    {
      return SearchViewCompatHoneycomb.isIconified(p0);
    }

    public boolean isQueryRefinementEnabled(android.view.View p0)
    {
      return SearchViewCompatHoneycomb.isQueryRefinementEnabled(p0);
    }

    public boolean isSubmitButtonEnabled(android.view.View p0)
    {
      return SearchViewCompatHoneycomb.isSubmitButtonEnabled(p0);
    }

    public Object newOnCloseListener(
            android.support.v4.widget.SearchViewCompat$OnCloseListenerCompat p0)
    {
      return SearchViewCompatHoneycomb.newOnCloseListener((android.support.v4.widget.SearchViewCompatHoneycomb$OnCloseListenerCompatBridge)new android.support.v4.widget.SearchViewCompat$SearchViewCompatHoneycombImpl$2(this, p0));
    }

    public Object newOnQueryTextListener(
            android.support.v4.widget.SearchViewCompat$OnQueryTextListenerCompat p0)
    {
      return SearchViewCompatHoneycomb.newOnQueryTextListener((android.support.v4.widget.SearchViewCompatHoneycomb$OnQueryTextListenerCompatBridge)new android.support.v4.widget.SearchViewCompat$SearchViewCompatHoneycombImpl$1(this, p0));
    }

    public android.view.View newSearchView(android.content.Context p0)
    {
      return SearchViewCompatHoneycomb.newSearchView(p0);
    }

    public void setIconified(android.view.View p0, boolean p1)
    {
      SearchViewCompatHoneycomb.setIconified(p0, p1);
    }

    public void setMaxWidth(android.view.View p0, int p1)
    {
      SearchViewCompatHoneycomb.setMaxWidth(p0, p1);
    }

    public void setOnCloseListener(Object p0, Object p1)
    {
      SearchViewCompatHoneycomb.setOnCloseListener(p0, p1);
    }

    public void setOnQueryTextListener(Object p0, Object p1)
    {
      SearchViewCompatHoneycomb.setOnQueryTextListener(p0, p1);
    }

    public void setQuery(android.view.View p0, CharSequence p1, boolean p2)
    {
      SearchViewCompatHoneycomb.setQuery(p0, p1, p2);
    }

    public void setQueryHint(android.view.View p0, CharSequence p1)
    {
      SearchViewCompatHoneycomb.setQueryHint(p0, p1);
    }

    public void setQueryRefinementEnabled(android.view.View p0, boolean p1)
    {
      SearchViewCompatHoneycomb.setQueryRefinementEnabled(p0, p1);
    }

    public void setSearchableInfo(
            android.view.View p0,
            android.content.ComponentName p1)
    {
      SearchViewCompatHoneycomb.setSearchableInfo(p0, p1);
    }

    public void setSubmitButtonEnabled(android.view.View p0, boolean p1)
    {
      SearchViewCompatHoneycomb.setSubmitButtonEnabled(p0, p1);
    }

}

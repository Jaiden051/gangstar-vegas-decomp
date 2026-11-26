// Decompiled from classes.dex (SourceFile: SearchViewCompatHoneycomb.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

class SearchViewCompatHoneycomb {
    // Methods
    SearchViewCompatHoneycomb()
    {
      super();
    }

    public static CharSequence getQuery(android.view.View p0)
    {
      return ((android.widget.SearchView)p0).getQuery();
    }

    public static boolean isIconified(android.view.View p0)
    {
      return ((android.widget.SearchView)p0).isIconified();
    }

    public static boolean isQueryRefinementEnabled(android.view.View p0)
    {
      return ((android.widget.SearchView)p0).isQueryRefinementEnabled();
    }

    public static boolean isSubmitButtonEnabled(android.view.View p0)
    {
      return ((android.widget.SearchView)p0).isSubmitButtonEnabled();
    }

    public static Object newOnCloseListener(
            android.support.v4.widget.SearchViewCompatHoneycomb$OnCloseListenerCompatBridge p0)
    {
      return new android.support.v4.widget.SearchViewCompatHoneycomb$2(p0);
    }

    public static Object newOnQueryTextListener(
            android.support.v4.widget.SearchViewCompatHoneycomb$OnQueryTextListenerCompatBridge p0)
    {
      return new android.support.v4.widget.SearchViewCompatHoneycomb$1(p0);
    }

    public static android.view.View newSearchView(android.content.Context p0)
    {
      return new android.widget.SearchView(p0);
    }

    public static void setIconified(android.view.View p0, boolean p1)
    {
      ((android.widget.SearchView)p0).setIconified(p1);
    }

    public static void setMaxWidth(android.view.View p0, int p1)
    {
      ((android.widget.SearchView)p0).setMaxWidth(p1);
    }

    public static void setOnCloseListener(Object p0, Object p1)
    {
      ((android.widget.SearchView)p0).setOnCloseListener((android.widget.SearchView.OnCloseListener)p1);
    }

    public static void setOnQueryTextListener(Object p0, Object p1)
    {
      ((android.widget.SearchView)p0).setOnQueryTextListener((android.widget.SearchView.OnQueryTextListener)p1);
    }

    public static void setQuery(android.view.View p0, CharSequence p1, boolean p2)
    {
      ((android.widget.SearchView)p0).setQuery(p1, p2);
    }

    public static void setQueryHint(android.view.View p0, CharSequence p1)
    {
      ((android.widget.SearchView)p0).setQueryHint(p1);
    }

    public static void setQueryRefinementEnabled(android.view.View p0, boolean p1)
    {
      ((android.widget.SearchView)p0).setQueryRefinementEnabled(p1);
    }

    public static void setSearchableInfo(android.view.View p0, android.content.ComponentName p1)
    {
      android.widget.SearchView v2;
      v2 = (android.widget.SearchView)p0;
      v2.setSearchableInfo(((android.app.SearchManager)v2.getContext().getSystemService("search")).getSearchableInfo(p1));
    }

    public static void setSubmitButtonEnabled(android.view.View p0, boolean p1)
    {
      ((android.widget.SearchView)p0).setSubmitButtonEnabled(p1);
    }

}

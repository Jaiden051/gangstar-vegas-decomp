// Decompiled from classes.dex (SourceFile: SearchViewCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

import android.os.Build;
public class SearchViewCompat {
    // Fields
    private static final android.support.v4.widget.SearchViewCompat$SearchViewCompatImpl IMPL;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 14 )
      {
        if ( Build.VERSION.SDK_INT < 11 )
          IMPL = (android.support.v4.widget.SearchViewCompat$SearchViewCompatImpl)new android.support.v4.widget.SearchViewCompat$SearchViewCompatStubImpl();
        else
          IMPL = (android.support.v4.widget.SearchViewCompat$SearchViewCompatImpl)new android.support.v4.widget.SearchViewCompat$SearchViewCompatHoneycombImpl();
      }
      else
      {
        IMPL = (android.support.v4.widget.SearchViewCompat$SearchViewCompatImpl)new android.support.v4.widget.SearchViewCompat$SearchViewCompatIcsImpl();
      }
    }

    private SearchViewCompat(android.content.Context p0)
    {
      super();
    }

    /* synthetic */ static android.support.v4.widget.SearchViewCompat$SearchViewCompatImpl access$000()
    {
      return IMPL;
    }

    public static CharSequence getQuery(android.view.View p0)
    {
      return IMPL.getQuery(p0);
    }

    public static boolean isIconified(android.view.View p0)
    {
      return IMPL.isIconified(p0);
    }

    public static boolean isQueryRefinementEnabled(android.view.View p0)
    {
      return IMPL.isQueryRefinementEnabled(p0);
    }

    public static boolean isSubmitButtonEnabled(android.view.View p0)
    {
      return IMPL.isSubmitButtonEnabled(p0);
    }

    public static android.view.View newSearchView(android.content.Context p0)
    {
      return IMPL.newSearchView(p0);
    }

    public static void setIconified(android.view.View p0, boolean p1)
    {
      IMPL.setIconified(p0, p1);
    }

    public static void setImeOptions(android.view.View p0, int p1)
    {
      IMPL.setImeOptions(p0, p1);
    }

    public static void setInputType(android.view.View p0, int p1)
    {
      IMPL.setInputType(p0, p1);
    }

    public static void setMaxWidth(android.view.View p0, int p1)
    {
      IMPL.setMaxWidth(p0, p1);
    }

    public static void setOnCloseListener(
            android.view.View p0,
            android.support.v4.widget.SearchViewCompat$OnCloseListenerCompat p1)
    {
      IMPL.setOnCloseListener(p0, p1.mListener);
    }

    public static void setOnQueryTextListener(
            android.view.View p0,
            android.support.v4.widget.SearchViewCompat$OnQueryTextListenerCompat p1)
    {
      IMPL.setOnQueryTextListener(p0, p1.mListener);
    }

    public static void setQuery(android.view.View p0, CharSequence p1, boolean p2)
    {
      IMPL.setQuery(p0, p1, p2);
    }

    public static void setQueryHint(android.view.View p0, CharSequence p1)
    {
      IMPL.setQueryHint(p0, p1);
    }

    public static void setQueryRefinementEnabled(android.view.View p0, boolean p1)
    {
      IMPL.setQueryRefinementEnabled(p0, p1);
    }

    public static void setSearchableInfo(android.view.View p0, android.content.ComponentName p1)
    {
      IMPL.setSearchableInfo(p0, p1);
    }

    public static void setSubmitButtonEnabled(android.view.View p0, boolean p1)
    {
      IMPL.setSubmitButtonEnabled(p0, p1);
    }

}

// Decompiled from classes.dex (SourceFile: SearchViewCompat$SearchViewCompatImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

interface SearchViewCompat$SearchViewCompatImpl {
    // Methods
    public abstract java.lang.CharSequence getQuery(android.view.View p0);

    public abstract boolean isIconified(android.view.View p0);

    public abstract boolean isQueryRefinementEnabled(android.view.View p0);

    public abstract boolean isSubmitButtonEnabled(android.view.View p0);

    public abstract java.lang.Object newOnCloseListener(android.support.v4.widget.SearchViewCompat$OnCloseListenerCompat p0);

    public abstract java.lang.Object newOnQueryTextListener(android.support.v4.widget.SearchViewCompat$OnQueryTextListenerCompat p0);

    public abstract android.view.View newSearchView(android.content.Context p0);

    public abstract void setIconified(android.view.View p0, boolean p1);

    public abstract void setImeOptions(android.view.View p0, int p1);

    public abstract void setInputType(android.view.View p0, int p1);

    public abstract void setMaxWidth(android.view.View p0, int p1);

    public abstract void setOnCloseListener(java.lang.Object p0, java.lang.Object p1);

    public abstract void setOnQueryTextListener(java.lang.Object p0, java.lang.Object p1);

    public abstract void setQuery(android.view.View p0, java.lang.CharSequence p1, boolean p2);

    public abstract void setQueryHint(android.view.View p0, java.lang.CharSequence p1);

    public abstract void setQueryRefinementEnabled(android.view.View p0, boolean p1);

    public abstract void setSearchableInfo(android.view.View p0, android.content.ComponentName p1);

    public abstract void setSubmitButtonEnabled(android.view.View p0, boolean p1);

}

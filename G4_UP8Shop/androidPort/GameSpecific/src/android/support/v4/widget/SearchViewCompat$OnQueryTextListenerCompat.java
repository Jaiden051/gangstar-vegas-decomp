// Decompiled from classes.dex (SourceFile: SearchViewCompat$OnQueryTextListenerCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

public abstract class SearchViewCompat$OnQueryTextListenerCompat {
    // Fields
    final java.lang.Object mListener;

    // Methods
    public SearchViewCompat$OnQueryTextListenerCompat()
    {
      super();
      this.mListener = SearchViewCompat.access$000().newOnQueryTextListener(this);
    }

    public boolean onQueryTextChange(String p0)
    {
      return false;
    }

    public boolean onQueryTextSubmit(String p0)
    {
      return false;
    }

}

// Decompiled from classes.dex (SourceFile: SearchViewCompat$OnCloseListenerCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

public abstract class SearchViewCompat$OnCloseListenerCompat {
    // Fields
    final java.lang.Object mListener;

    // Methods
    public SearchViewCompat$OnCloseListenerCompat()
    {
      super();
      this.mListener = SearchViewCompat.access$000().newOnCloseListener(this);
    }

    public boolean onClose()
    {
      return false;
    }

}

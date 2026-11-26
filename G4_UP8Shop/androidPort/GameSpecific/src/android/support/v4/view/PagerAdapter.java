// Decompiled from classes.dex (SourceFile: PagerAdapter.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

public abstract class PagerAdapter {
    // Fields
    public static int POSITION_NONE;
    public static int POSITION_UNCHANGED;
    private android.database.DataSetObservable mObservable;

    // Methods
    public PagerAdapter()
    {
      super();
      this.mObservable = new android.database.DataSetObservable();
    }

    public void destroyItem(android.view.View p0, int p1, Object p2)
    {
      throw new UnsupportedOperationException("Required method destroyItem was not overridden");
    }

    public void destroyItem(android.view.ViewGroup p0, int p1, Object p2)
    {
      this.destroyItem(p0, p1, p2);
    }

    public void finishUpdate(android.view.View p0)
    {
      ;
    }

    public void finishUpdate(android.view.ViewGroup p0)
    {
      this.finishUpdate(p0);
    }

    public abstract int getCount();

    public int getItemPosition(Object p0)
    {
      return -1;
    }

    public CharSequence getPageTitle(int p0)
    {
      return null;
    }

    public float getPageWidth(int p0)
    {
      return 1.0f;
    }

    public Object instantiateItem(android.view.View p0, int p1)
    {
      throw new UnsupportedOperationException("Required method instantiateItem was not overridden");
    }

    public Object instantiateItem(android.view.ViewGroup p0, int p1)
    {
      return this.instantiateItem(p0, p1);
    }

    public abstract boolean isViewFromObject(android.view.View p0, java.lang.Object p1);

    public void notifyDataSetChanged()
    {
      this.mObservable.notifyChanged();
    }

    public void registerDataSetObserver(android.database.DataSetObserver p0)
    {
      this.mObservable.registerObserver(p0);
    }

    public void restoreState(android.os.Parcelable p0, ClassLoader p1)
    {
      ;
    }

    public android.os.Parcelable saveState()
    {
      return null;
    }

    public void setPrimaryItem(android.view.View p0, int p1, Object p2)
    {
      ;
    }

    public void setPrimaryItem(android.view.ViewGroup p0, int p1, Object p2)
    {
      this.setPrimaryItem(p0, p1, p2);
    }

    public void startUpdate(android.view.View p0)
    {
      ;
    }

    public void startUpdate(android.view.ViewGroup p0)
    {
      this.startUpdate(p0);
    }

    public void unregisterDataSetObserver(android.database.DataSetObserver p0)
    {
      this.mObservable.unregisterObserver(p0);
    }

}

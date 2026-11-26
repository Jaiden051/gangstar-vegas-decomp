// Decompiled from classes.dex (SourceFile: FragmentPagerAdapter.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

public abstract class FragmentPagerAdapter extends android.support.v4.view.PagerAdapter {
    // Fields
    private static java.lang.String a;
    private static boolean b;
    private final android.support.v4.app.FragmentManager c;
    private android.support.v4.app.ac d;
    private android.support.v4.app.Fragment e;

    // Methods
    private FragmentPagerAdapter(android.support.v4.app.FragmentManager p0)
    {
      super();
      this.d = null;
      this.e = null;
      this.c = p0;
    }

    private static long getItemId(int p0)
    {
      return p0;
    }

    private static String makeFragmentName(int p0, long p1)
    {
      return "android:switcher:" + p0 + ":" + p1;
    }

    public abstract android.support.v4.app.Fragment a();

    public void destroyItem(android.view.ViewGroup p0, int p1, Object p2)
    {
      if ( this.d == null )
        this.d = this.c.a();
      this.d.d((android.support.v4.app.Fragment)p2);
    }

    public void finishUpdate(android.view.ViewGroup p0)
    {
      if ( this.d != null )
      {
        this.d.i();
        this.d = null;
        this.c.b();
      }
    }

    public Object instantiateItem(android.view.ViewGroup p0, int p1)
    {
      android.support.v4.app.Fragment v3; // RETVAL
      android.support.v4.app.Fragment v4;
      if ( this.d == null )
        this.d = this.c.a();
      v3 = this.c.a(makeFragmentName(p0.getId(), p1));
      v4 = v3;
      if ( v3 != null )
      {
        this.d.e(v3);
      }
      else
      {
        v4 = this.a();
        this.d.a(p0.getId(), v4, makeFragmentName(p0.getId(), p1));
      }
      if ( v4 != this.e )
      {
        v4.setMenuVisibility(false);
        v4.setUserVisibleHint(false);
      }
      return v4;
    }

    public boolean isViewFromObject(android.view.View p0, Object p1)
    {
      return ((android.support.v4.app.Fragment)p1).getView() == p0;
    }

    public void restoreState(android.os.Parcelable p0, ClassLoader p1)
    {
      ;
    }

    public android.os.Parcelable saveState()
    {
      return null;
    }

    public void setPrimaryItem(android.view.ViewGroup p0, int p1, Object p2)
    {
      android.support.v4.app.Fragment v4;
      v4 = (android.support.v4.app.Fragment)p2;
      if ( v4 != this.e )
      {
        if ( this.e != null )
        {
          this.e.setMenuVisibility(false);
          this.e.setUserVisibleHint(false);
        }
        if ( v4 != null )
        {
          v4.setMenuVisibility(true);
          v4.setUserVisibleHint(true);
        }
        this.e = v4;
      }
    }

    public void startUpdate(android.view.ViewGroup p0)
    {
      ;
    }

}

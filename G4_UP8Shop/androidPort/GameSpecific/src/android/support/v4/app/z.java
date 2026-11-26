// Decompiled from classes.dex (SourceFile: z.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.util.Log;
public abstract class z extends android.support.v4.view.PagerAdapter {
    // Fields
    private static java.lang.String a;
    private static boolean b;
    private final android.support.v4.app.FragmentManager c;
    private android.support.v4.app.ac d;
    private java.util.ArrayList e;
    private java.util.ArrayList f;
    private android.support.v4.app.Fragment g;

    // Methods
    private z(android.support.v4.app.FragmentManager p0)
    {
      super();
      this.d = null;
      this.e = new java.util.ArrayList();
      this.f = new java.util.ArrayList();
      this.g = null;
      this.c = p0;
    }

    public abstract android.support.v4.app.Fragment a();

    public void destroyItem(android.view.ViewGroup p0, int p1, Object p2)
    {
      android.support.v4.app.Fragment v4;
      v4 = (android.support.v4.app.Fragment)p2;
      if ( this.d == null )
        this.d = this.c.a();
      while ( this.e.size() <= p1 )
        this.e.add(null);
      this.e.set(p1, this.c.a(v4));
      this.f.set(p1, null);
      this.d.a(v4);
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
      android.support.v4.app.Fragment v3;
      android.support.v4.app.Fragment v5;
      android.support.v4.app.Fragment$SavedState v6;
      if ( this.f.size() <= p1 || (v3 = (android.support.v4.app.Fragment)this.f.get(p1)) == null )
      {
        if ( this.d == null )
          this.d = this.c.a();
        v5 = this.a();
        if ( this.e.size() > p1 )
        {
          v6 = (android.support.v4.app.Fragment$SavedState)this.e.get(p1);
          if ( v6 != null )
            v5.setInitialSavedState(v6);
        }
        while ( this.f.size() <= p1 )
          this.f.add(null);
        v5.setMenuVisibility(false);
        v5.setUserVisibleHint(false);
        this.f.set(p1, v5);
        this.d.a(p0.getId(), v5);
        return v5;
      }
      return v3;
    }

    public boolean isViewFromObject(android.view.View p0, Object p1)
    {
      return ((android.support.v4.app.Fragment)p1).getView() == p0;
    }

    public void restoreState(android.os.Parcelable p0, ClassLoader p1)
    {
      android.os.Bundle v3;
      Object[] ParcelableArray;
      int i;
      java.util.Iterator v6;
      String v7;
      int v8;
      android.support.v4.app.Fragment v9;
      if ( p0 != null )
      {
        v3 = (android.os.Bundle)p0;
        v3.setClassLoader(p1);
        ParcelableArray = v3.getParcelableArray("states");
        this.e.clear();
        this.f.clear();
        if ( ParcelableArray != null )
        {
          for ( i = 0; i < ParcelableArray.length; ++i )
            this.e.add((android.support.v4.app.Fragment$SavedState)ParcelableArray[i]);
        }
        v6 = v3.keySet().iterator();
        while ( v6.hasNext() )
        {
          v7 = (String)v6.next();
          if ( v7.startsWith("f") )
          {
            v8 = Integer.parseInt(v7.substring(1));
            v9 = this.c.a(v3, v7);
            if ( v9 != null )
            {
              while ( this.f.size() <= v8 )
                this.f.add(null);
              v9.setMenuVisibility(false);
              this.f.set(v8, v9);
            }
            else
            {
              Log.w("FragmentStatePagerAdapter", "Bad fragment at key " + v7);
            }
          }
        }
      }
    }

    public android.os.Parcelable saveState()
    {
      android.os.Bundle v1;
      android.support.v4.app.Fragment$SavedState[] v2;
      int v3;
      android.os.Bundle v4;
      android.support.v4.app.Fragment v5;
      v1 = null;
      if ( this.e.size() > 0 )
      {
        v1 = new android.os.Bundle();
        v2 = new android.support.v4.app.Fragment$SavedState[this.e.size()];
        this.e.toArray(v2);
        v1.putParcelableArray("states", v2);
      }
      v3 = 0;
      v4 = v1;
      while ( v3 < this.f.size() )
      {
        v5 = (android.support.v4.app.Fragment)this.f.get(v3);
        if ( v5 != null )
        {
          if ( v4 == null )
            v4 = new android.os.Bundle();
          this.c.a(v4, "f" + v3, v5);
        }
        ++v3;
      }
      return v4;
    }

    public void setPrimaryItem(android.view.ViewGroup p0, int p1, Object p2)
    {
      android.support.v4.app.Fragment v4;
      v4 = (android.support.v4.app.Fragment)p2;
      if ( v4 != this.g )
      {
        if ( this.g != null )
        {
          this.g.setMenuVisibility(false);
          this.g.setUserVisibleHint(false);
        }
        if ( v4 != null )
        {
          v4.setMenuVisibility(true);
          v4.setUserVisibleHint(true);
        }
        this.g = v4;
      }
    }

    public void startUpdate(android.view.ViewGroup p0)
    {
      ;
    }

}

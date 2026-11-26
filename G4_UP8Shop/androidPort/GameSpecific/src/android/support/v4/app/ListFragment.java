// Decompiled from classes.dex (SourceFile: ListFragment.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.view.View;
import android.view.animation.AnimationUtils;
public final class ListFragment extends android.support.v4.app.Fragment {
    // Fields
    static int a;
    static int b;
    static int c;
    android.widget.ListAdapter d;
    android.widget.ListView e;
    android.view.View f;
    android.widget.TextView g;
    android.view.View h;
    android.view.View i;
    java.lang.CharSequence j;
    boolean k;
    private final android.os.Handler l;
    private final java.lang.Runnable m;
    private final android.widget.AdapterView.OnItemClickListener n;

    // Methods
    public ListFragment()
    {
      super();
      this.l = new android.os.Handler();
      this.m = (Runnable)new android.support.v4.app.ad(this);
      this.n = (android.widget.AdapterView.OnItemClickListener)new android.support.v4.app.ae(this);
    }

    private int a()
    {
      this.e();
      return this.e.getSelectedItemPosition();
    }

    private void a(int p0)
    {
      this.e();
      this.e.setSelection(p0);
    }

    private void a(android.widget.ListAdapter p0)
    {
      boolean v2;
      v2 = this.d != null;
      this.d = p0;
      if ( this.e != null )
      {
        this.e.setAdapter(p0);
        if ( !this.k && !v2 )
          this.a(true, this.getView().getWindowToken() != null);
      }
    }

    private void a(CharSequence p0)
    {
      this.e();
      if ( this.g == null )
        throw new IllegalStateException("Can't be used with a custom content view");
      this.g.setText(p0);
      if ( this.j == null )
        this.e.setEmptyView(this.g);
      this.j = p0;
    }

    private void a(boolean p0)
    {
      this.a(p0, true);
    }

    private void a(boolean p0, boolean p1)
    {
      this.e();
      if ( this.h == null )
        throw new IllegalStateException("Can't be used with a custom content view");
      if ( this.k != p0 )
      {
        this.k = p0;
        if ( p0 )
        {
          if ( p1 )
          {
            this.h.startAnimation(AnimationUtils.loadAnimation(this.getActivity(), 17432577));
            this.i.startAnimation(AnimationUtils.loadAnimation(this.getActivity(), 17432576));
          }
          else
          {
            this.h.clearAnimation();
            this.i.clearAnimation();
          }
          this.h.setVisibility(8);
          this.i.setVisibility(0);
        }
        else
        {
          if ( p1 )
          {
            this.h.startAnimation(AnimationUtils.loadAnimation(this.getActivity(), 17432576));
            this.i.startAnimation(AnimationUtils.loadAnimation(this.getActivity(), 17432577));
          }
          else
          {
            this.h.clearAnimation();
            this.i.clearAnimation();
          }
          this.h.setVisibility(0);
          this.i.setVisibility(8);
        }
      }
    }

    private long b()
    {
      this.e();
      return this.e.getSelectedItemId();
    }

    private void b(boolean p0)
    {
      this.a(p0, false);
    }

    private android.widget.ListView c()
    {
      this.e();
      return this.e;
    }

    private android.widget.ListAdapter d()
    {
      return this.d;
    }

    private void e()
    {
      android.view.View View; // RETVAL
      android.view.View v2;
      android.widget.ListAdapter d;
      android.view.View ViewById; // RETVAL
    
      if ( this.e == null )
      {
        View = this.getView();
        v2 = View;
        if ( View == null )
          throw new IllegalStateException("Content view not yet created");
        if ( View instanceof android.widget.ListView )
        {
          this.e = (android.widget.ListView)View;
        }
        else
        {
          this.g = (android.widget.TextView)View.findViewById(16711681);
          if ( this.g != null )
            this.g.setVisibility(8);
          else
            this.f = v2.findViewById(16908292);
          this.h = v2.findViewById(16711682);
          this.i = v2.findViewById(16711683);
          ViewById = v2.findViewById(16908298);
          if ( !(ViewById instanceof android.widget.ListView) )
          {
            if ( ViewById == null )
              throw new RuntimeException("Your content must have a ListView whose id attribute is 'android.R.id.list'");
            throw new RuntimeException("Content has view with id attribute 'android.R.id.list' that is not a ListView class");
          }
          this.e = (android.widget.ListView)ViewById;
          if ( this.f != null )
          {
            this.e.setEmptyView(this.f);
          }
          else if ( this.j != null )
          {
            this.g.setText(this.j);
            this.e.setEmptyView(this.g);
          }
        }
        this.k = true;
        this.e.setOnItemClickListener(this.n);
        if ( this.d != null )
        {
          d = this.d;
          this.d = null;
          this.d = d;
          if ( this.e != null )
            this.e.setAdapter(d);
        }
        else if ( this.h != null )
        {
          this.a(false, false);
        }
        this.l.post(this.m);
      }
    }

    public static void onListItemClick$42a3bb55()
    {
      ;
    }

    public final android.view.View onCreateView(
            android.view.LayoutInflater p0,
            android.view.ViewGroup p1,
            android.os.Bundle p2)
    {
      android.support.v4.app.FragmentActivity Activity; // RETVAL
      android.widget.FrameLayout v5;
      android.widget.LinearLayout v6;
      android.widget.FrameLayout v7;
      android.widget.TextView v8;
      android.widget.ListView v9;
      Activity = this.getActivity();
      v5 = new android.widget.FrameLayout(Activity);
      v6 = new android.widget.LinearLayout(Activity);
      v6.setId(16711682);
      v6.setOrientation(1);
      v6.setVisibility(8);
      v6.setGravity(17);
      v6.addView(new android.widget.ProgressBar(Activity, null, 16842874), new android.widget.FrameLayout.LayoutParams(-2, -2));
      v5.addView(v6, new android.widget.FrameLayout.LayoutParams(-1, -1));
      v7 = new android.widget.FrameLayout(Activity);
      v7.setId(16711683);
      v8 = new android.widget.TextView(this.getActivity());
      v8.setId(16711681);
      v8.setGravity(17);
      v7.addView(v8, new android.widget.FrameLayout.LayoutParams(-1, -1));
      v9 = new android.widget.ListView(this.getActivity());
      v9.setId(16908298);
      v9.setDrawSelectorOnTop(false);
      v7.addView(v9, new android.widget.FrameLayout.LayoutParams(-1, -1));
      v5.addView(v7, new android.widget.FrameLayout.LayoutParams(-1, -1));
      v5.setLayoutParams(new android.widget.FrameLayout.LayoutParams(-1, -1));
      return v5;
    }

    public final void onDestroyView()
    {
      this.l.removeCallbacks(this.m);
      this.e = null;
      this.k = false;
      this.i = null;
      this.h = null;
      this.f = null;
      this.g = null;
      super.onDestroyView();
    }

    public final void onViewCreated(android.view.View p0, android.os.Bundle p1)
    {
      super.onViewCreated(p0, p1);
      this.e();
    }

}

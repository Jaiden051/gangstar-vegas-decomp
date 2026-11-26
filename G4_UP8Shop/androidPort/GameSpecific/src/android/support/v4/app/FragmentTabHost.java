// Decompiled from classes.dex (SourceFile: FragmentTabHost.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

public class FragmentTabHost extends android.widget.TabHost implements android.widget.TabHost.OnTabChangeListener {
    // Fields
    private final java.util.ArrayList a;
    private android.widget.FrameLayout b;
    private android.content.Context c;
    private android.support.v4.app.FragmentManager d;
    private int e;
    private android.widget.TabHost.OnTabChangeListener f;
    private android.support.v4.app.FragmentTabHost$TabInfo g;
    private boolean h;

    // Methods
    private FragmentTabHost(android.content.Context p0)
    {
      super(p0, null);
      this.a = new java.util.ArrayList();
      this.a(p0, (android.util.AttributeSet)null);
    }

    public FragmentTabHost(android.content.Context p0, android.util.AttributeSet p1)
    {
      super(p0, p1);
      this.a = new java.util.ArrayList();
      this.a(p0, p1);
    }

    private android.support.v4.app.ac a(String p0, android.support.v4.app.ac p1)
    {
      android.support.v4.app.FragmentTabHost$TabInfo v3;
      int i;
      android.support.v4.app.FragmentTabHost$TabInfo v5;
      v3 = null;
      for ( i = 0; i < this.a.size(); ++i )
      {
        v5 = (android.support.v4.app.FragmentTabHost$TabInfo)this.a.get(i);
        if ( !FragmentTabHost$TabInfo.access$200(v5).equals(p0) )
          v5 = v3;
        v3 = v5;
      }
      if ( v3 == null )
        throw new IllegalStateException("No tab known for tag " + p0);
      if ( this.g != v3 )
      {
        if ( p1 == null )
          p1 = this.d.a();
        if ( this.g != null && FragmentTabHost$TabInfo.access$100(this.g) != null )
          p1.d(FragmentTabHost$TabInfo.access$100(this.g));
        if ( FragmentTabHost$TabInfo.access$100(v3) != null )
        {
          p1.e(FragmentTabHost$TabInfo.access$100(v3));
        }
        else
        {
          FragmentTabHost$TabInfo.access$102(
            v3,
            Fragment.instantiate(
              this.c,
              FragmentTabHost$TabInfo.access$300(v3).getName(),
              FragmentTabHost$TabInfo.access$400(v3)));
          p1.a(this.e, FragmentTabHost$TabInfo.access$100(v3), FragmentTabHost$TabInfo.access$200(v3));
        }
        this.g = v3;
      }
      return p1;
    }

    private void a()
    {
      if ( this.b == null )
      {
        this.b = (android.widget.FrameLayout)this.findViewById(this.e);
        throw new IllegalStateException("No tab content FrameLayout found for id " + this.e);
      }
    }

    private void a(android.content.Context p0)
    {
      android.widget.LinearLayout v2;
      android.widget.TabWidget v3;
      android.widget.FrameLayout v4;
      android.widget.FrameLayout v5;
      if ( this.findViewById(16908307) == null )
      {
        v2 = new android.widget.LinearLayout(p0);
        v2.setOrientation(1);
        this.addView(v2, new android.widget.FrameLayout.LayoutParams(-1, -1));
        v3 = new android.widget.TabWidget(p0);
        v3.setId(16908307);
        v3.setOrientation(0);
        v2.addView(v3, new android.widget.LinearLayout.LayoutParams(-1, -2, 0.0f));
        v4 = new android.widget.FrameLayout(p0);
        v4.setId(16908305);
        v2.addView(v4, new android.widget.LinearLayout.LayoutParams(0, 0, 0.0f));
        v5 = new android.widget.FrameLayout(p0);
        this.b = v5;
        this.b.setId(this.e);
        v2.addView(v5, new android.widget.LinearLayout.LayoutParams(-1, 0, 1.0f));
      }
    }

    private void a(android.content.Context p0, android.support.v4.app.FragmentManager p1)
    {
      this.a(p0);
      super.setup();
      this.c = p0;
      this.d = p1;
      this.a();
    }

    private void a(android.content.Context p0, android.support.v4.app.FragmentManager p1, int p2)
    {
      this.a(p0);
      super.setup();
      this.c = p0;
      this.d = p1;
      this.e = p2;
      this.a();
      this.b.setId(p2);
      if ( this.getId() == -1 )
        this.setId(16908306);
    }

    private void a(android.content.Context p0, android.util.AttributeSet p1)
    {
      int[] v3;
      android.content.res.TypedArray v4;
      v3 = new int[1];
      v3[0] = 16842995;
      v4 = p0.obtainStyledAttributes(p1, v3, 0, 0);
      this.e = v4.getResourceId(0, 0);
      v4.recycle();
      super.setOnTabChangedListener(this);
    }

    private void a(android.widget.TabHost.TabSpec p0, Class<?> p1, android.os.Bundle p2)
    {
      String Tag; // RETVAL
      android.support.v4.app.FragmentTabHost$TabInfo v5;
      android.support.v4.app.ac v6;
      p0.setContent((android.widget.TabHost.TabContentFactory)new android.support.v4.app.ab(this.c));
      Tag = p0.getTag();
      v5 = new android.support.v4.app.FragmentTabHost$TabInfo(Tag, p1, p2);
      if ( this.h )
      {
        FragmentTabHost$TabInfo.access$102(v5, this.d.a(Tag));
        if ( FragmentTabHost$TabInfo.access$100(v5) != null && !FragmentTabHost$TabInfo.access$100(v5).isDetached() )
        {
          v6 = this.d.a();
          v6.d(FragmentTabHost$TabInfo.access$100(v5));
          v6.h();
        }
      }
      this.a.add(v5);
      this.addTab(p0);
    }

    protected void onAttachedToWindow()
    {
      String CurrentTabTag;
      android.support.v4.app.ac v2;
      int i;
      android.support.v4.app.FragmentTabHost$TabInfo v4;
      android.support.v4.app.ac v5; // RETVAL
    
      super.onAttachedToWindow();
      CurrentTabTag = this.getCurrentTabTag();
      v2 = null;
      for ( i = 0; i < this.a.size(); ++i )
      {
        v4 = (android.support.v4.app.FragmentTabHost$TabInfo)this.a.get(i);
        FragmentTabHost$TabInfo.access$102(v4, this.d.a(FragmentTabHost$TabInfo.access$200(v4)));
        if ( FragmentTabHost$TabInfo.access$100(v4) != null && !FragmentTabHost$TabInfo.access$100(v4).isDetached() )
        {
          if ( FragmentTabHost$TabInfo.access$200(v4).equals(CurrentTabTag) )
          {
            this.g = v4;
          }
          else
          {
            if ( v2 == null )
              v2 = this.d.a();
            v2.d(FragmentTabHost$TabInfo.access$100(v4));
          }
        }
      }
      this.h = true;
      v5 = this.a(CurrentTabTag, v2);
      if ( v5 != null )
      {
        v5.h();
        this.d.b();
      }
    }

    protected void onDetachedFromWindow()
    {
      super.onDetachedFromWindow();
      this.h = false;
    }

    protected void onRestoreInstanceState(android.os.Parcelable p0)
    {
      android.support.v4.app.FragmentTabHost$SavedState v2;
      v2 = (android.support.v4.app.FragmentTabHost$SavedState)p0;
      super.onRestoreInstanceState(v2.getSuperState());
      this.setCurrentTabByTag(v2.a);
    }

    protected android.os.Parcelable onSaveInstanceState()
    {
      android.support.v4.app.FragmentTabHost$SavedState v1;
      v1 = new android.support.v4.app.FragmentTabHost$SavedState(super.onSaveInstanceState());
      v1.a = this.getCurrentTabTag();
      return v1;
    }

    public void onTabChanged(String p0)
    {
      android.support.v4.app.ac v2; // RETVAL
    
      if ( this.h )
      {
        v2 = this.a(p0, (android.support.v4.app.ac)null);
        if ( v2 != null )
          v2.h();
      }
      if ( this.f != null )
        this.f.onTabChanged(p0);
    }

    public void setOnTabChangedListener(android.widget.TabHost.OnTabChangeListener p0)
    {
      this.f = p0;
    }

    public void setup()
    {
      throw new IllegalStateException("Must call setup() that takes a Context and FragmentManager");
    }

}

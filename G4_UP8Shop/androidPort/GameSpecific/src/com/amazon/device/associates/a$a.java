// Decompiled from classes.dex (SourceFile: a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.location.Location;
import android.webkit.CookieManager;
import android.webkit.CookieSyncManager;
class a$a extends android.widget.RelativeLayout implements android.view.View.OnTouchListener {
    // Fields
    private final android.content.Context a;
    private android.widget.RelativeLayout b;
    private android.webkit.WebView c;
    private final float d;
    private int e;
    private int f;
    private int g;
    private int h;
    private final int i;
    private boolean j;
    private android.view.ViewGroup k;
    private final android.graphics.drawable.Drawable l;
    private final android.graphics.drawable.Drawable m;
    private final android.graphics.drawable.Drawable n;
    private final android.graphics.drawable.Drawable o;
    private com.amazon.device.associates.a$a$a p;
    private android.view.View.OnTouchListener q;

    // Methods
    public a$a(android.content.Context p0)
    {
      this(p0, null);
    }

    public a$a(android.content.Context p0, android.view.View.OnTouchListener p1)
    {
      super(p0);
      Object[] v3;
      android.webkit.CookieManager Instance; // RETVAL
      this.e = 300;
      this.f = 160;
      this.j = false;
      this.l = this.getResources().getDrawable(bo.a("quickaction_arrow_up", "drawable"));
      this.m = this.getResources().getDrawable(bo.a("quickaction_arrow_right", "drawable"));
      this.n = this.getResources().getDrawable(bo.a("quickaction_arrow_down", "drawable"));
      this.o = this.getResources().getDrawable(bo.a("quickaction_arrow_left", "drawable"));
      this.p = null;
      this.setLayoutParams(new android.widget.RelativeLayout.LayoutParams(-1, -1));
      this.setGravity(51);
      this.setBackgroundColor(-1775487687);
      this.a = p0;
      this.d = this.a.getResources().getDisplayMetrics().density;
      this.f = Math.round((float)this.f * this.d);
      this.e = Math.round((float)this.e * this.d);
      this.i = Math.round(7.0f * this.d);
      this.q = p1;
      v3 = new Object[3];
      v3[0] = Float.valueOf(this.d);
      v3[1] = Integer.valueOf(this.f);
      v3[2] = Integer.valueOf(this.e);
      com.amazon.device.associates.p.c("Default Config", String.format("Scale %f, Height %d, Width %d", v3));
      CookieSyncManager.createInstance(p0);
      Instance = CookieManager.getInstance();
      Instance.setAcceptCookie(false);
      Instance.removeAllCookie();
    
    }

    /* synthetic */ static android.view.ViewGroup a(com.amazon.device.associates.a$a p0)
    {
      return p0.k;
    }

    private void a(android.graphics.Rect p0, android.graphics.Rect p1)
    {
      android.graphics.Rect v3;
      v3 = this.b(p0, p1);
      com.amazon.device.associates.p.c("Location", this.p.toString());
      this.g = v3.width();
      this.h = v3.height();
      com.amazon.device.associates.p.c("Dimension:", this.g + ", " + this.h);
      this.c = new android.webkit.WebView(this.a);
      this.c.setLayoutParams(new android.widget.RelativeLayout.LayoutParams(this.g, this.h));
      this.c.getSettings().setJavaScriptEnabled(false);
      this.c.setVerticalScrollBarEnabled(false);
      this.c.setHorizontalScrollBarEnabled(false);
      this.c.loadDataWithBaseURL("blarg://ignored", "", "text/html", "UTF-8", "");
      if ( this.q != null )
        this.c.setOnTouchListener(this.q);
    }

    /* synthetic */ static boolean a(com.amazon.device.associates.a$a p0, boolean p1)
    {
      p0.j = p1;
      return p1;
    }

    /* synthetic */ static int b(com.amazon.device.associates.a$a p0)
    {
      return p0.g;
    }

    private android.graphics.Rect b(android.graphics.Rect p0, android.graphics.Rect p1)
    {
      android.graphics.Rect v3;
      android.graphics.Rect v4;
      android.graphics.Rect v5;
      android.graphics.Rect v6;
      int v7;
      int v8;
      int v9;
      int v10;
      v3 = this.c(p0, p1);
      v4 = this.d(p0, p1);
      v5 = this.e(p0, p1);
      v6 = this.f(p0, p1);
      v7 = v3.width() * v3.height();
      v8 = v4.width() * v4.height();
      v9 = v5.width() * v5.height();
      v10 = v6.width() * v6.height();
      if ( v7 < v8 || v7 < v9 || v7 < v10 )
      {
        if ( v8 < v7 || v8 < v9 || v8 < v10 )
        {
          if ( v9 < v7 || v9 < v8 || v9 < v10 )
          {
            this.p = a$a$a.d;
            return v6;
          }
          else
          {
            this.p = a$a$a.c;
            return v5;
          }
        }
        else
        {
          this.p = a$a$a.b;
          return v4;
        }
      }
      else
      {
        this.p = a$a$a.a;
      }
      return v3;
    }

    private android.view.ViewGroup b(android.view.View p0)
    {
      android.view.View ViewById; // RETVAL
      android.view.ViewParent i;
      ViewById = p0.getRootView().findViewById(16908290);
      if ( ViewById instanceof android.widget.FrameLayout )
        return (android.view.ViewGroup)ViewById;
      for ( i = p0.getParent();
            i.getParent() != null
         && i.getParent().getParent() != null
         && !i.getParent().getParent().getClass().getName().equals("com.android.internal.policy.impl.PhoneWindow$DecorView");
            i = i.getParent() )
      {
        ;
      }
      return (android.view.ViewGroup)i;
    }

    private void b()
    {
      this.b = new android.widget.RelativeLayout(this.a);
      this.b.setLayoutParams(new android.widget.RelativeLayout.LayoutParams(-2, -2));
      this.b.setBackgroundDrawable(this.a.getResources().getDrawable(bo.a("bg_custom", "drawable")));
      this.b.setPadding(this.i, this.i, this.i, this.i);
      if ( this.c != null )
        this.b.addView(this.c);
    }

    /* synthetic */ static float c(com.amazon.device.associates.a$a p0)
    {
      return p0.d;
    }

    private android.graphics.Rect c(android.graphics.Rect p0, android.graphics.Rect p1)
    {
      int e;
      int f;
      int v5;
      e = this.e;
      f = this.f;
      if ( f > p1.top - p0.top - this.n.getIntrinsicHeight() )
      {
        f = p1.top - p0.top - this.n.getIntrinsicHeight() - 2 * this.i;
        if ( f < 0 )
          f = 0;
        e = (int)((double)f * 1.0 / (double)this.f * (double)this.e);
      }
      if ( e > p0.right - p0.left )
      {
        v5 = p0.right - p0.left - 2 * this.i;
        if ( v5 < 0 )
          v5 = 0;
        e = v5;
        f = (int)((double)v5 * 1.0 / (double)this.e * (double)this.f);
      }
      return new android.graphics.Rect(0, 0, e, f);
    }

    private android.graphics.Rect c(android.view.View p0)
    {
      int[] v2;
      v2 = new int[2];
      p0.getLocationOnScreen(v2);
      return new android.graphics.Rect(v2[0], v2[1], v2[0] + p0.getWidth(), v2[1] + p0.getHeight());
    }

    /* synthetic */ static int d(com.amazon.device.associates.a$a p0)
    {
      return p0.h;
    }

    private android.graphics.Rect d(android.graphics.Rect p0, android.graphics.Rect p1)
    {
      int e;
      int f;
      int v5;
      e = this.e;
      f = this.f;
      if ( e > p0.right - p1.right - this.o.getIntrinsicWidth() )
      {
        v5 = p0.right - p1.right - this.o.getIntrinsicWidth() - 2 * this.i;
        if ( v5 < 0 )
          v5 = 0;
        e = v5;
        f = (int)((double)v5 * 1.0 / (double)this.e * (double)this.f);
      }
      if ( f > p0.bottom - p0.top )
      {
        f = p0.bottom - p0.top - 2 * this.i;
        if ( f < 0 )
          f = 0;
        e = (int)((double)f * 1.0 / (double)this.f * (double)this.e);
      }
      return new android.graphics.Rect(0, 0, e, f);
    }

    private android.graphics.Rect e(android.graphics.Rect p0, android.graphics.Rect p1)
    {
      int e;
      int f;
      int v5;
      e = this.e;
      f = this.f;
      if ( f > p0.bottom - p1.bottom - this.l.getIntrinsicHeight() )
      {
        f = p0.bottom - p1.bottom - this.l.getIntrinsicHeight() - 2 * this.i;
        if ( f < 0 )
          f = 0;
        e = (int)((double)f * 1.0 / (double)this.f * (double)this.e);
      }
      if ( e > p0.right - p0.left )
      {
        v5 = p0.right - p0.left - 2 * this.i;
        if ( v5 < 0 )
          v5 = 0;
        e = v5;
        f = (int)((double)v5 * 1.0 / (double)this.e * (double)this.f);
      }
      return new android.graphics.Rect(0, 0, e, f);
    }

    /* synthetic */ static android.webkit.WebView e(com.amazon.device.associates.a$a p0)
    {
      return p0.c;
    }

    private android.graphics.Rect f(android.graphics.Rect p0, android.graphics.Rect p1)
    {
      int e;
      int f;
      int v5;
      e = this.e;
      f = this.f;
      if ( e > p1.left - p0.left - this.m.getIntrinsicWidth() )
      {
        v5 = p1.left - p0.left - this.m.getIntrinsicWidth() - 2 * this.i;
        if ( v5 < 0 )
          v5 = 0;
        e = v5;
        f = (int)((double)v5 * 1.0 / (double)this.e * (double)this.f);
      }
      if ( f > p0.bottom - p0.top )
      {
        f = p0.bottom - p0.top - 2 * this.i;
        if ( f < 0 )
          f = 0;
        e = (int)((double)f * 1.0 / (double)this.f * (double)this.e);
      }
      return new android.graphics.Rect(0, 0, e, f);
    }

    /* synthetic */ static android.widget.RelativeLayout f(com.amazon.device.associates.a$a p0)
    {
      return p0.b;
    }

    private void g(android.graphics.Rect p0, android.graphics.Rect p1)
    {
      int v3 = 0;
      int MeasuredWidth = 0;
      int MeasuredHeight = 0;
      int v6 = 0;
      int v7 = 0;
      int v8 = 0;
      android.widget.RelativeLayout.LayoutParams v9 = null;
      int v10 = 0;
      int v11 = 0;
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v3 = 0;
            this.b.measure(0, 0);
            MeasuredWidth = this.b.getMeasuredWidth();
            MeasuredHeight = this.b.getMeasuredHeight();
            v6 = (int)(5.0f * this.d);
            _sw_1 = (a$2.a[this.p.ordinal()]);
            if ( (_sw_1 == (1)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (2)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (3)) ) { _pc = 3; continue _sm; }
            if ( (_sw_1 == (4)) ) { _pc = 4; continue _sm; }
            _pc = 9;
            continue _sm;
          case 1:
            v10 = p1.centerX() - p0.left - MeasuredWidth / 2;
            if ( v10 >= 0 )
            {
            if ( v10 + MeasuredWidth <= p0.right - p0.left )
            v3 = v10;
            else
            v3 = p0.right - MeasuredWidth;
            }
            v8 = p1.top - p0.top - MeasuredHeight - this.n.getIntrinsicHeight() + v6;
            v7 = v3;
            _pc = 10;
            continue _sm;
          case 2:
            v7 = p1.right - p0.left + this.o.getIntrinsicWidth() - v6;
            v8 = p1.centerY() - p0.top - MeasuredHeight / 2;
            if ( v8 >= 0 )
            {
            if ( v8 + MeasuredHeight > p0.bottom - p0.top )
            { _pc = 5; continue _sm; }
            }
            else
            {
            v8 = 0;
            }
            _pc = 10;
            continue _sm;
          case 3:
            v11 = p1.centerX() - p0.left - MeasuredWidth / 2;
            if ( v11 >= 0 )
            {
            if ( v11 + MeasuredWidth <= p0.right - p0.left )
            v3 = v11;
            else
            v3 = p0.right - MeasuredWidth;
            }
            v8 = p1.bottom - p0.top + this.l.getIntrinsicHeight() - v6;
            v7 = v3;
            _pc = 10;
            continue _sm;
          case 4:
            v7 = p1.left - p0.left - MeasuredWidth - this.m.getIntrinsicWidth() + v6;
            v8 = p1.centerY() - p0.top - MeasuredHeight / 2;
            if ( !(v8 >= 0) ) { _pc = 7; continue _sm; }
            if ( v8 + MeasuredHeight > p0.bottom - p0.top ) { _pc = 5; continue _sm; } else { _pc = 6; continue _sm; }
          case 5:
            v8 = p0.bottom - p0.top - MeasuredHeight;
            _pc = 6;
            continue _sm;
          case 6:
            _pc = 8;
            continue _sm;
          case 7:
            {
            v8 = 0;
            }
            _pc = 8;
            continue _sm;
          case 8:
            _pc = 10;
            continue _sm;
          case 9:
            v7 = 0;
            v8 = 0;
            _pc = 10;
            continue _sm;
          case 10:
            v9 = (android.widget.RelativeLayout.LayoutParams)this.b.getLayoutParams();
            v9.leftMargin = v7;
            v9.topMargin = v8;
            this.h(p0, p1);
            return;
        }
      }
}

    private void h(android.graphics.Rect p0, android.graphics.Rect p1)
    {
      int IntrinsicHeight;
      android.widget.ImageView v4;
      int v5;
      int v6;
      android.graphics.drawable.Drawable n;
      int IntrinsicWidth;
      android.view.ViewGroup.LayoutParams v9;
      IntrinsicHeight = 0;
      v4 = new android.widget.ImageView(this.getContext());
      switch ( a$2.a[this.p.ordinal()] )
      {
        case 1:
          n = this.n;
          IntrinsicWidth = n.getIntrinsicWidth();
          IntrinsicHeight = n.getIntrinsicHeight();
          v6 = p1.centerX() - p0.left - IntrinsicWidth / 2;
          v5 = p1.top - p0.top - IntrinsicHeight;
          break;
        case 2:
          n = this.o;
          IntrinsicWidth = n.getIntrinsicWidth();
          IntrinsicHeight = n.getIntrinsicHeight();
          v6 = p1.right - p0.left;
          v5 = p1.centerY() - p0.top - IntrinsicHeight / 2;
          break;
        case 3:
          n = this.l;
          IntrinsicWidth = n.getIntrinsicWidth();
          IntrinsicHeight = n.getIntrinsicHeight();
          v6 = p1.centerX() - p0.left - IntrinsicWidth / 2;
          v5 = p1.bottom - p0.top;
          break;
        case 4:
          n = this.m;
          IntrinsicWidth = n.getIntrinsicWidth();
          IntrinsicHeight = n.getIntrinsicHeight();
          v6 = p1.left - p0.left - IntrinsicWidth;
          v5 = p1.centerY() - p0.top - IntrinsicHeight / 2;
          break;
        default:
          v5 = 0;
          v6 = 0;
          n = null;
          IntrinsicWidth = 0;
          break;
      }
      v4.setImageDrawable(n);
      v9 = new android.widget.RelativeLayout.LayoutParams(IntrinsicWidth, IntrinsicHeight);
      v9.height = v6;
      v9.width = v5;
      this.addView(v4, v9);
    }

    public void a()
    {
      android.view.animation.AlphaAnimation v1;
      if ( !this.j )
      {
        this.c.setVisibility(4);
        v1 = new android.view.animation.AlphaAnimation(1.0f, 0.0f);
        v1.setDuration(300);
        v1.setAnimationListener((android.view.animation.Animation.AnimationListener)new com.amazon.device.associates.a$a$1(this));
        this.j = true;
        this.startAnimation(v1);
      }
    }

    public void a(android.view.View p0)
    {
      android.view.ViewGroup v2;
      android.graphics.Rect v3;
      android.graphics.Rect v4; // RETVAL
      android.view.animation.AlphaAnimation v5;
      v2 = this.b(p0);
      this.k = v2;
      v3 = this.c(v2);
      v4 = this.c(p0);
      this.a(v3, v4);
      this.b();
      this.g(v3, v4);
      this.addView(this.b);
      v2.addView(this);
      this.setOnTouchListener(this);
      v5 = new android.view.animation.AlphaAnimation(0.0f, 1.0f);
      v5.setDuration(300);
      v5.setAnimationListener((android.view.animation.Animation.AnimationListener)new com.amazon.device.associates.a$a$2(this));
      this.j = true;
      this.startAnimation(v5);
    }

    public boolean onTouch(android.view.View p0, android.view.MotionEvent p1)
    {
      if ( !this.j && p0 == this )
        this.a();
      return true;
    }

}

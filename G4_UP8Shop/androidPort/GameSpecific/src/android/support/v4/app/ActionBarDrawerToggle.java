// Decompiled from classes.dex (SourceFile: ActionBarDrawerToggle.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.os.Build;
public class ActionBarDrawerToggle implements android.support.v4.widget.DrawerLayout$DrawerListener {
    // Fields
    private static final android.support.v4.app.b a;
    private static float b;
    private static int c;
    private final android.app.Activity d;
    private final android.support.v4.app.e e;
    private final android.support.v4.widget.DrawerLayout f;
    private boolean g;
    private android.graphics.drawable.Drawable h;
    private android.graphics.drawable.Drawable i;
    private android.support.v4.app.g j;
    private final int k;
    private final int l;
    private final int m;
    private java.lang.Object n;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 11 )
        a = (android.support.v4.app.b)new android.support.v4.app.c(0);
      else
        a = (android.support.v4.app.b)new android.support.v4.app.d(0);
    }

    private ActionBarDrawerToggle(
            android.app.Activity p0,
            android.support.v4.widget.DrawerLayout p1,
            int p2,
            int p3,
            int p4)
    {
      super();
      this.g = true;
      this.d = p0;
      if ( p0 instanceof android.support.v4.app.f )
        this.e = ((android.support.v4.app.f)p0).a();
      else
        this.e = null;
      this.f = p1;
      this.k = p2;
      this.l = p3;
      this.m = p4;
      this.h = this.d();
      this.i = p0.getResources().getDrawable(p2);
      this.j = new android.support.v4.app.g(this, this.i, 0);
      this.j.b(0.33333334f);
    }

    private void a()
    {
      android.graphics.drawable.Drawable j;
      int m;
      if ( this.f.isDrawerOpen(8388611) )
        this.j.a(1.0f);
      else
        this.j.a(0.0f);
      if ( this.g )
      {
        j = this.j;
        if ( this.f.isDrawerOpen(8388611) )
          m = this.m;
        else
          m = this.l;
        this.a(j, m);
      }
    }

    private void a(int p0)
    {
      if ( this.e == null )
        this.n = a.a(this.n, this.d, p0);
    }

    private void a(android.graphics.drawable.Drawable p0, int p1)
    {
      if ( this.e == null )
        this.n = a.a(this.n, this.d, p0, p1);
    }

    private void a(boolean p0)
    {
      android.graphics.drawable.Drawable j;
      int m;
      if ( p0 != this.g )
      {
        if ( p0 )
        {
          j = this.j;
          if ( this.f.isDrawerOpen(8388611) )
            m = this.m;
          else
            m = this.l;
          this.a(j, m);
        }
        else
        {
          this.a(this.h, 0);
        }
        this.g = p0;
      }
    }

    private boolean a(android.view.MenuItem p0)
    {
      if ( p0 == null || p0.getItemId() != 16908332 || !this.g )
        return false;
      if ( this.f.isDrawerVisible(8388611) )
        this.f.closeDrawer(8388611);
      else
        this.f.openDrawer(8388611);
      return true;
    }

    /* synthetic */ static android.app.Activity access$300(
            android.support.v4.app.ActionBarDrawerToggle p0)
    {
      return p0.d;
    }

    private boolean b()
    {
      return this.g;
    }

    private void c()
    {
      android.graphics.drawable.Drawable j;
      int m;
      this.h = this.d();
      this.i = this.d.getResources().getDrawable(this.k);
      if ( this.f.isDrawerOpen(8388611) )
        this.j.a(1.0f);
      else
        this.j.a(0.0f);
      if ( this.g )
      {
        j = this.j;
        if ( this.f.isDrawerOpen(8388611) )
          m = this.m;
        else
          m = this.l;
        this.a(j, m);
      }
    }

    private android.graphics.drawable.Drawable d()
    {
      if ( this.e != null )
        return this.e.a();
      else
        return a.a(this.d);
    }

    public void onDrawerClosed(android.view.View p0)
    {
      this.j.a(0.0f);
      if ( this.g )
        this.a(this.l);
    }

    public void onDrawerOpened(android.view.View p0)
    {
      this.j.a(1.0f);
      if ( this.g )
        this.a(this.m);
    }

    public void onDrawerSlide(android.view.View p0, float p1)
    {
      float v3; // RETVAL
      float v4;
      v3 = this.j.a();
      if ( p1 <= 0.5f )
        v4 = Math.min(v3, p1 * 2.0f);
      else
        v4 = Math.max(v3, Math.max(0.0f, p1 - 0.5f) * 2.0f);
      this.j.a(v4);
    }

    public void onDrawerStateChanged(int p0)
    {
      ;
    }

}

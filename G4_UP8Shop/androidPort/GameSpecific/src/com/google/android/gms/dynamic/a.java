// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.dynamic;

import com.google.android.gms.common.GooglePlayServicesUtil;
public abstract class a<T extends com.google.android.gms.dynamic.LifecycleDelegate> {
    // Fields
    private com.google.android.gms.dynamic.LifecycleDelegate a;
    private android.os.Bundle b;
    private java.util.LinkedList c;
    private final com.google.android.gms.dynamic.f d;

    // Methods
    public a()
    {
      super();
      this.d = (com.google.android.gms.dynamic.f)new com.google.android.gms.dynamic.a$1(this);
    }

    /* synthetic */ static android.os.Bundle a(com.google.android.gms.dynamic.a p0, android.os.Bundle p1)
    {
      p0.b = p1;
      return p1;
    }

    /* synthetic */ static com.google.android.gms.dynamic.LifecycleDelegate a(
            com.google.android.gms.dynamic.a p0,
            com.google.android.gms.dynamic.LifecycleDelegate p1)
    {
      p0.a = p1;
      return p1;
    }

    /* synthetic */ static java.util.LinkedList a(com.google.android.gms.dynamic.a p0)
    {
      return p0.c;
    }

    private void a(int p0)
 {
      while ( !this.c.isEmpty() && ((com.google.android.gms.dynamic.a$a)this.c.getLast()).a() >= p0 )
        this.c.removeLast();
    }

    private void a(android.os.Bundle p0, com.google.android.gms.dynamic.a$a p1)
    {
      if ( this.a != null )
      {
        p1.b();
      }
      else
      {
        if ( this.c == null )
          this.c = new java.util.LinkedList();
        this.c.add(p1);
        if ( p0 != null )
        {
          if ( this.b != null )
            this.b.putAll(p0);
          else
            this.b = (android.os.Bundle)p0.clone();
        }
        this.a(this.d);
      }
    }

    /* synthetic */ static com.google.android.gms.dynamic.LifecycleDelegate b(com.google.android.gms.dynamic.a p0)
    {
      return p0.a;
    }

    public static void b(android.widget.FrameLayout p0)
    {
      android.content.Context Context;
      int isGooglePlayServicesAvailable;
      String v3;
      String v4;
      android.widget.LinearLayout v5;
      android.widget.TextView v6;
      android.widget.Button v7;
      Context = p0.getContext();
      isGooglePlayServicesAvailable = GooglePlayServicesUtil.isGooglePlayServicesAvailable(Context);
      v3 = GooglePlayServicesUtil.d(Context, isGooglePlayServicesAvailable);
      v4 = GooglePlayServicesUtil.e(Context, isGooglePlayServicesAvailable);
      v5 = new android.widget.LinearLayout(p0.getContext());
      v5.setOrientation(1);
      v5.setLayoutParams(new android.widget.FrameLayout.LayoutParams(-2, -2));
      p0.addView(v5);
      v6 = new android.widget.TextView(p0.getContext());
      v6.setLayoutParams(new android.widget.FrameLayout.LayoutParams(-2, -2));
      v6.setText(v3);
      v5.addView(v6);
      if ( v4 != null )
      {
        v7 = new android.widget.Button(Context);
        v7.setLayoutParams(new android.widget.FrameLayout.LayoutParams(-2, -2));
        v7.setText(v4);
        v5.addView(v7);
        v7.setOnClickListener((android.view.View.OnClickListener)new com.google.android.gms.dynamic.a$5(Context, isGooglePlayServicesAvailable));
      }
    }

    public final android.view.View a(android.view.LayoutInflater p0, android.view.ViewGroup p1, android.os.Bundle p2)
    {
      android.widget.FrameLayout v4;
      v4 = new android.widget.FrameLayout(p0.getContext());
      this.a(p2, (com.google.android.gms.dynamic.a$a)new com.google.android.gms.dynamic.a$4(this, v4, p0, p1, p2));
      if ( this.a == null )
        this.a(v4);
      return v4;
    }

    public final T a()
    {
      return (T)this.a;
    }

    public final void a(android.app.Activity p0, android.os.Bundle p1, android.os.Bundle p2)
    {
      this.a(p2, (com.google.android.gms.dynamic.a$a)new com.google.android.gms.dynamic.a$2(this, p0, p1, p2));
    }

    public final void a(android.os.Bundle p0)
 {
      this.a(p0, (com.google.android.gms.dynamic.a$a)new com.google.android.gms.dynamic.a$3(this, p0));
    }

    protected void a(android.widget.FrameLayout p0)
 {
      b(p0);
    }

    protected abstract void a(com.google.android.gms.dynamic.f<T> p0);

    public final void b()
    {
      this.a(null, (com.google.android.gms.dynamic.a$a)new com.google.android.gms.dynamic.a$6(this));
    }

    public final void b(android.os.Bundle p0)
    {
      if ( this.a != null )
      {
        this.a.b(p0);
      }
      else if ( this.b != null )
      {
        p0.putAll(this.b);
      }
    }

    public final void c()
    {
      this.a(null, (com.google.android.gms.dynamic.a$a)new com.google.android.gms.dynamic.a$7(this));
    }

    public final void d()
    {
      if ( this.a != null )
        this.a.c();
      else
        this.a(5);
    }

    public final void e()
    {
      if ( this.a != null )
        this.a.d();
      else
        this.a(4);
    }

    public final void f()
    {
      if ( this.a != null )
        this.a.e();
      else
        this.a(2);
    }

    public final void g()
    {
      if ( this.a != null )
        this.a.f();
      else
        this.a(1);
    }

    public final void h()
    {
      if ( this.a != null )
        this.a.g();
    }

}

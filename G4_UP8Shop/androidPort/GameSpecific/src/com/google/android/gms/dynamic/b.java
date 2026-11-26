// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.dynamic;

public final class b extends com.google.android.gms.dynamic.c$a {
    // Fields
    private android.app.Fragment a;

    // Methods
    private b(android.app.Fragment p0)
    {
      super();
      this.a = p0;
    }

    public static com.google.android.gms.dynamic.b a(android.app.Fragment p0)
    {
      if ( p0 != null )
        return new com.google.android.gms.dynamic.b(p0);
      else
        return null;
    }

    public final com.google.android.gms.dynamic.d a()
    {
      return e.h(this.a.getActivity());
    }

    public final void a(android.content.Intent p0)
    {
      this.a.startActivity(p0);
    }

    public final void a(android.content.Intent p0, int p1)
    {
      this.a.startActivityForResult(p0, p1);
    }

    public final void a(com.google.android.gms.dynamic.d p0)
    {
      this.a.registerForContextMenu((android.view.View)e.e(p0));
    }

    public final void a(boolean p0)
    {
      this.a.setHasOptionsMenu(p0);
    }

    public final android.os.Bundle b()
    {
      return this.a.getArguments();
    }

    public final void b(com.google.android.gms.dynamic.d p0)
    {
      this.a.unregisterForContextMenu((android.view.View)e.e(p0));
    }

    public final void b(boolean p0)
    {
      this.a.setMenuVisibility(p0);
    }

    public final int c()
    {
      return this.a.getId();
    }

    public final void c(boolean p0)
    {
      this.a.setRetainInstance(p0);
    }

    public final com.google.android.gms.dynamic.c d()
    {
      return a(this.a.getParentFragment());
    }

    public final void d(boolean p0)
    {
      this.a.setUserVisibleHint(p0);
    }

    public final com.google.android.gms.dynamic.d e()
    {
      return e.h(this.a.getResources());
    }

    public final boolean f()
    {
      return this.a.getRetainInstance();
    }

    public final String g()
    {
      return this.a.getTag();
    }

    public final com.google.android.gms.dynamic.c h()
    {
      return a(this.a.getTargetFragment());
    }

    public final int i()
    {
      return this.a.getTargetRequestCode();
    }

    public final boolean j()
    {
      return this.a.getUserVisibleHint();
    }

    public final com.google.android.gms.dynamic.d k()
    {
      return e.h(this.a.getView());
    }

    public final boolean l()
    {
      return this.a.isAdded();
    }

    public final boolean m()
    {
      return this.a.isDetached();
    }

    public final boolean n()
    {
      return this.a.isHidden();
    }

    public final boolean o()
    {
      return this.a.isInLayout();
    }

    public final boolean p()
    {
      return this.a.isRemoving();
    }

    public final boolean q()
    {
      return this.a.isResumed();
    }

    public final boolean r()
    {
      return this.a.isVisible();
    }

}

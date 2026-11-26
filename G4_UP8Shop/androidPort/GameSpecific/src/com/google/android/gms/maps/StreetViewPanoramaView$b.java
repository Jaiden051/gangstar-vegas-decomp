// Decompiled from classes.dex (SourceFile: StreetViewPanoramaView$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

import com.google.android.gms.internal.hn;
class StreetViewPanoramaView$b implements com.google.android.gms.dynamic.LifecycleDelegate {
    // Fields
    private final android.view.ViewGroup a;
    private final com.google.android.gms.maps.internal.IStreetViewPanoramaViewDelegate b;
    private android.view.View c;

    // Methods
    public StreetViewPanoramaView$b(android.view.ViewGroup p0, com.google.android.gms.maps.internal.IStreetViewPanoramaViewDelegate p1)
    {
      super();
      this.b = (com.google.android.gms.maps.internal.IStreetViewPanoramaViewDelegate)hn.f(p1);
      this.a = (android.view.ViewGroup)hn.f(p0);
    }

    public final android.view.View a(
            android.view.LayoutInflater p0,
            android.view.ViewGroup p1,
            android.os.Bundle p2)
    {
      throw new UnsupportedOperationException("onCreateView not allowed on StreetViewPanoramaViewDelegate");
    }

    public final void a()
    {
      ;
    }

    public final void a(android.app.Activity p0, android.os.Bundle p1, android.os.Bundle p2)
    {
      throw new UnsupportedOperationException("onInflate not allowed on StreetViewPanoramaViewDelegate");
    }

    public final void a(android.os.Bundle p0)
    {
      try
      {
        this.b.a(p0);
        this.c = (android.view.View)com.google.android.gms.dynamic.e.e(this.b.f());
        this.a.removeAllViews();
        this.a.addView(this.c);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    public final void b()
    {
      try
      {
        this.b.b();
      }
      catch ( android.os.RemoteException v1 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v1);
      }
    }

    public final void b(android.os.Bundle p0)
    {
      try
      {
        this.b.b(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    public final void c()
    {
      try
      {
        this.b.c();
      }
      catch ( android.os.RemoteException v1 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v1);
      }
    }

    public final void d()
    {
      ;
    }

    public final void e()
    {
      throw new UnsupportedOperationException("onDestroyView not allowed on StreetViewPanoramaViewDelegate");
    }

    public final void f()
    {
      try
      {
        this.b.d();
      }
      catch ( android.os.RemoteException v1 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v1);
      }
    }

    public final void g()
    {
      try
      {
        this.b.e();
      }
      catch ( android.os.RemoteException v1 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v1);
      }
    }

    public final com.google.android.gms.maps.internal.IStreetViewPanoramaViewDelegate h()
    {
      return this.b;
    }

}

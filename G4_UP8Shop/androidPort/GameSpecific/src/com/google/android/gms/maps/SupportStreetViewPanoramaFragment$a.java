// Decompiled from classes.dex (SourceFile: SupportStreetViewPanoramaFragment$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

import com.google.android.gms.internal.hn;
class SupportStreetViewPanoramaFragment$a implements com.google.android.gms.dynamic.LifecycleDelegate {
    // Fields
    private final android.support.v4.app.Fragment a;
    private final com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate b;

    // Methods
    public SupportStreetViewPanoramaFragment$a(
            android.support.v4.app.Fragment p0,
            com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate p1)
    {
      super();
      this.b = (com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate)hn.f(p1);
      this.a = (android.support.v4.app.Fragment)hn.f(p0);
    }

    public final android.view.View a(
            android.view.LayoutInflater p0,
            android.view.ViewGroup p1,
            android.os.Bundle p2)
    {
      com.google.android.gms.dynamic.d v4; // RETVAL
    
      try
      {
        v4 = this.b.a(com.google.android.gms.dynamic.e.h(p0), com.google.android.gms.dynamic.e.h(p1), p2);
        return (android.view.View)com.google.android.gms.dynamic.e.e(v4);
      }
      catch ( android.os.RemoteException v6 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v6);
      }
    }

    public final void a()
    {
      ;
    }

    public final void a(
            android.app.Activity p0,
            android.os.Bundle p1,
            android.os.Bundle p2)
    {
      try
      {
        this.b.a(com.google.android.gms.dynamic.e.h(p0), (com.google.android.gms.maps.StreetViewPanoramaOptions)null, p2);
      }
      catch ( android.os.RemoteException v4 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v4);
      }
    }

    public final void a(android.os.Bundle p0)
    {
      android.os.Bundle Arguments; // RETVAL
      android.os.Bundle v3;
      try
      {
        if ( p0 == null )
          p0 = new android.os.Bundle();
        Arguments = this.a.getArguments();
        v3 = Arguments;
        if ( Arguments != null && Arguments.containsKey("StreetViewPanoramaOptions") )
          com.google.android.gms.maps.internal.t.a(p0, "StreetViewPanoramaOptions", v3.getParcelable("StreetViewPanoramaOptions"));
        this.b.a(p0);
      }
      catch ( android.os.RemoteException v4 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v4);
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
      try
      {
        this.b.d();
      }
      catch ( android.os.RemoteException v1 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v1);
      }
    }

    public final void f()
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

    public final void g()
    {
      try
      {
        this.b.f();
      }
      catch ( android.os.RemoteException v1 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v1);
      }
    }

    public final com.google.android.gms.maps.internal.IStreetViewPanoramaFragmentDelegate h()
    {
      return this.b;
    }

}

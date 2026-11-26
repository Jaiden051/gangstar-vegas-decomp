// Decompiled from classes.dex (SourceFile: StreetViewPanorama.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

import com.google.android.gms.internal.hn;
public class StreetViewPanorama {
    // Fields
    private final com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate a;

    // Methods
    protected StreetViewPanorama(com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate p0)
    {
      super();
      this.a = (com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate)hn.f(p0);
    }

    private android.graphics.Point a(com.google.android.gms.maps.model.StreetViewPanoramaOrientation p0)
    {
      try
      {
        return (android.graphics.Point)com.google.android.gms.dynamic.e.e(this.a.a(p0));
      }
      catch ( android.os.RemoteException v4 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v4);
      }
    }

    private com.google.android.gms.maps.model.StreetViewPanoramaOrientation a(android.graphics.Point p0)
    {
      try
      {
        return this.a.a(com.google.android.gms.dynamic.e.h(p0));
      }
      catch ( android.os.RemoteException v3 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v3);
      }
    }

    private void a(
            com.google.android.gms.maps.StreetViewPanorama$OnStreetViewPanoramaCameraChangeListener p0)
    {
      try
      {
        if ( p0 != null )
          this.a.a(new com.google.android.gms.maps.StreetViewPanorama$2(this, p0));
        else
          this.a.a((com.google.android.gms.maps.internal.p)null);
        return;
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void a(com.google.android.gms.maps.StreetViewPanorama$OnStreetViewPanoramaChangeListener p0)
    {
      try
      {
        if ( p0 != null )
          this.a.a(new com.google.android.gms.maps.StreetViewPanorama$1(this, p0));
        else
          this.a.a((com.google.android.gms.maps.internal.p)null);
        return;
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void a(com.google.android.gms.maps.StreetViewPanorama$OnStreetViewPanoramaClickListener p0)
    {
      try
      {
        if ( p0 != null )
          this.a.a(new com.google.android.gms.maps.StreetViewPanorama$3(this, p0));
        else
          this.a.a((com.google.android.gms.maps.internal.p)null);
        return;
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void a(com.google.android.gms.maps.model.LatLng p0)
    {
      try
      {
        this.a.a(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void a(com.google.android.gms.maps.model.LatLng p0, int p1)
    {
      try
      {
        this.a.a(p0, p1);
      }
      catch ( android.os.RemoteException v3 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v3);
      }
    }

    private void a(com.google.android.gms.maps.model.StreetViewPanoramaCamera p0, long p1)
    {
      try
      {
        this.a.a(p0, p1);
      }
      catch ( android.os.RemoteException v3 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v3);
      }
    }

    private void a(String p0)
    {
      try
      {
        this.a.a(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void a(boolean p0)
    {
      try
      {
        this.a.a(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void b(boolean p0)
    {
      try
      {
        this.a.b(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private boolean b()
    {
      try
      {
        return this.a.a();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void c(boolean p0)
    {
      try
      {
        this.a.c(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private boolean c()
    {
      try
      {
        return this.a.b();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void d(boolean p0)
    {
      try
      {
        this.a.d(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private boolean d()
    {
      try
      {
        return this.a.c();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private boolean e()
    {
      try
      {
        return this.a.d();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private com.google.android.gms.maps.model.StreetViewPanoramaCamera f()
    {
      try
      {
        return this.a.e();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private com.google.android.gms.maps.model.StreetViewPanoramaLocation g()
    {
      try
      {
        return this.a.f();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    final com.google.android.gms.maps.internal.IStreetViewPanoramaDelegate a()
    {
      return this.a;
    }

}

// Decompiled from classes.dex (SourceFile: GoogleMap.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

import com.google.android.gms.internal.hn;
public final class GoogleMap {
    // Fields
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    public static int e;
    private final com.google.android.gms.maps.internal.IGoogleMapDelegate f;
    private com.google.android.gms.maps.UiSettings g;

    // Methods
    protected GoogleMap(com.google.android.gms.maps.internal.IGoogleMapDelegate p0)
    {
      super();
      this.f = (com.google.android.gms.maps.internal.IGoogleMapDelegate)hn.f(p0);
    }

    private com.google.android.gms.maps.model.Circle a(com.google.android.gms.maps.model.CircleOptions p0)
    {
      try
      {
        return new com.google.android.gms.maps.model.Circle(this.f.a(p0));
      }
      catch ( android.os.RemoteException v4 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v4);
      }
    }

    private com.google.android.gms.maps.model.GroundOverlay a(
            com.google.android.gms.maps.model.GroundOverlayOptions p0)
    {
      com.google.android.gms.maps.model.internal.c v2; // RETVAL
    
      try
      {
        v2 = this.f.a(p0);
        if ( v2 != null )
          return new com.google.android.gms.maps.model.GroundOverlay(v2);
        else
          return null;
      }
      catch ( android.os.RemoteException v5 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v5);
      }
    }

    private com.google.android.gms.maps.model.Marker a(com.google.android.gms.maps.model.MarkerOptions p0)
    {
      com.google.android.gms.maps.model.internal.f v2; // RETVAL
    
      try
      {
        v2 = this.f.a(p0);
        if ( v2 != null )
          return new com.google.android.gms.maps.model.Marker(v2);
        else
          return null;
      }
      catch ( android.os.RemoteException v5 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v5);
      }
    }

    private com.google.android.gms.maps.model.Polygon a(com.google.android.gms.maps.model.PolygonOptions p0)
    {
      try
      {
        return new com.google.android.gms.maps.model.Polygon(this.f.a(p0));
      }
      catch ( android.os.RemoteException v4 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v4);
      }
    }

    private com.google.android.gms.maps.model.Polyline a(com.google.android.gms.maps.model.PolylineOptions p0)
    {
      try
      {
        return new com.google.android.gms.maps.model.Polyline(this.f.a(p0));
      }
      catch ( android.os.RemoteException v4 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v4);
      }
    }

    private com.google.android.gms.maps.model.TileOverlay a(
            com.google.android.gms.maps.model.TileOverlayOptions p0)
    {
      com.google.android.gms.maps.model.internal.h v2; // RETVAL
    
      try
      {
        v2 = this.f.a(p0);
        if ( v2 != null )
          return new com.google.android.gms.maps.model.TileOverlay(v2);
        else
          return null;
      }
      catch ( android.os.RemoteException v5 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v5);
      }
    }

    private void a(int p0)
    {
      try
      {
        this.f.a(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void a(int p0, int p1, int p2, int p3)
    {
      try
      {
        this.f.a(p0, p1, p2, p3);
      }
      catch ( android.os.RemoteException v5 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v5);
      }
    }

    private void a(com.google.android.gms.maps.CameraUpdate p0)
    {
      try
      {
        this.f.a(p0.a());
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void a(
            com.google.android.gms.maps.CameraUpdate p0,
            int p1,
            com.google.android.gms.maps.GoogleMap$CancelableCallback p2)
    {
      com.google.android.gms.maps.internal.IGoogleMapDelegate f;
      com.google.android.gms.dynamic.d v5; // RETVAL
      com.google.android.gms.maps.internal.b v6;
      try
      {
        f = this.f;
        v5 = p0.a();
        if ( p2 != null )
          v6 = new com.google.android.gms.maps.GoogleMap$a(p2);
        else
          v6 = null;
        f.a(v5, p1, v6);
        return;
      }
      catch ( android.os.RemoteException v7 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v7);
      }
    }

    private void a(
            com.google.android.gms.maps.CameraUpdate p0,
            com.google.android.gms.maps.GoogleMap$CancelableCallback p1)
    {
      com.google.android.gms.maps.internal.IGoogleMapDelegate f;
      com.google.android.gms.dynamic.d v4; // RETVAL
      com.google.android.gms.maps.internal.b v5;
      try
      {
        f = this.f;
        v4 = p0.a();
        if ( p1 != null )
          v5 = new com.google.android.gms.maps.GoogleMap$a(p1);
        else
          v5 = null;
        f.a(v4, v5);
        return;
      }
      catch ( android.os.RemoteException v6 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v6);
      }
    }

    private void a(com.google.android.gms.maps.GoogleMap$InfoWindowAdapter p0)
    {
      try
      {
        if ( p0 != null )
          this.f.a(new com.google.android.gms.maps.GoogleMap$13(this, p0));
        else
          this.f.a((com.google.android.gms.maps.internal.d)null);
        return;
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void a(com.google.android.gms.maps.GoogleMap$OnCameraChangeListener p0)
    {
      try
      {
        if ( p0 != null )
          this.f.a(new com.google.android.gms.maps.GoogleMap$7(this, p0));
        else
          this.f.a((com.google.android.gms.maps.internal.e)null);
        return;
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void a(com.google.android.gms.maps.GoogleMap$OnIndoorStateChangeListener p0)
    {
      try
      {
        if ( p0 != null )
          this.f.a(new com.google.android.gms.maps.GoogleMap$1(this, p0));
        else
          this.f.a((com.google.android.gms.maps.internal.f)null);
        return;
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void a(com.google.android.gms.maps.GoogleMap$OnInfoWindowClickListener p0)
    {
      try
      {
        if ( p0 != null )
          this.f.a(new com.google.android.gms.maps.GoogleMap$12(this, p0));
        else
          this.f.a((com.google.android.gms.maps.internal.g)null);
        return;
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void a(com.google.android.gms.maps.GoogleMap$OnMapClickListener p0)
    {
      try
      {
        if ( p0 != null )
          this.f.a(new com.google.android.gms.maps.GoogleMap$8(this, p0));
        else
          this.f.a((com.google.android.gms.maps.internal.i)null);
        return;
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void a(com.google.android.gms.maps.GoogleMap$OnMapLoadedCallback p0)
    {
      try
      {
        if ( p0 != null )
          this.f.a(new com.google.android.gms.maps.GoogleMap$4(this, p0));
        else
          this.f.a((com.google.android.gms.maps.internal.j)null);
        return;
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void a(com.google.android.gms.maps.GoogleMap$OnMapLongClickListener p0)
    {
      try
      {
        if ( p0 != null )
          this.f.a(new com.google.android.gms.maps.GoogleMap$9(this, p0));
        else
          this.f.a((com.google.android.gms.maps.internal.k)null);
        return;
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void a(com.google.android.gms.maps.GoogleMap$OnMarkerClickListener p0)
    {
      try
      {
        if ( p0 != null )
          this.f.a(new com.google.android.gms.maps.GoogleMap$10(this, p0));
        else
          this.f.a((com.google.android.gms.maps.internal.l)null);
        return;
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void a(com.google.android.gms.maps.GoogleMap$OnMarkerDragListener p0)
    {
      try
      {
        if ( p0 != null )
          this.f.a(new com.google.android.gms.maps.GoogleMap$11(this, p0));
        else
          this.f.a((com.google.android.gms.maps.internal.m)null);
        return;
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void a(com.google.android.gms.maps.GoogleMap$OnMyLocationButtonClickListener p0)
    {
      try
      {
        if ( p0 != null )
          this.f.a(new com.google.android.gms.maps.GoogleMap$3(this, p0));
        else
          this.f.a((com.google.android.gms.maps.internal.n)null);
        return;
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void a(com.google.android.gms.maps.GoogleMap$OnMyLocationChangeListener p0)
    {
      try
      {
        if ( p0 != null )
          this.f.a(new com.google.android.gms.maps.GoogleMap$2(this, p0));
        else
          this.f.a((com.google.android.gms.maps.internal.o)null);
        return;
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void a(com.google.android.gms.maps.GoogleMap$SnapshotReadyCallback p0)
    {
      try
      {
        this.f.a(new com.google.android.gms.maps.GoogleMap$5(this, p0), null);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void a(com.google.android.gms.maps.GoogleMap$SnapshotReadyCallback p0, android.graphics.Bitmap p1)
    {
      try
      {
        this.f.a(new com.google.android.gms.maps.GoogleMap$5(this, p0), null);
      }
      catch ( android.os.RemoteException v3 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v3);
      }
    }

    private void a(com.google.android.gms.maps.LocationSource p0)
    {
      try
      {
        if ( p0 != null )
          this.f.a(new com.google.android.gms.maps.GoogleMap$6(this, p0));
        else
          this.f.a((com.google.android.gms.maps.internal.ILocationSourceDelegate)null);
        return;
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
        this.f.a(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private com.google.android.gms.maps.model.CameraPosition b()
    {
      try
      {
        return this.f.a();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void b(com.google.android.gms.maps.CameraUpdate p0)
    {
      try
      {
        this.f.b(p0.a());
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private boolean b(boolean p0)
    {
      try
      {
        return this.f.b(p0);
      }
      catch ( android.os.RemoteException v3 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v3);
      }
    }

    private float c()
    {
      try
      {
        return this.f.b();
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
        this.f.d(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private float d()
    {
      try
      {
        return this.f.c();
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
        this.f.c(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private void e()
    {
      try
      {
        this.f.d();
      }
      catch ( android.os.RemoteException v1 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v1);
      }
    }

    private void f()
    {
      try
      {
        this.f.e();
      }
      catch ( android.os.RemoteException v1 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v1);
      }
    }

    private com.google.android.gms.maps.model.IndoorBuilding g()
    {
      com.google.android.gms.maps.model.internal.d v1; // RETVAL
    
      try
      {
        v1 = this.f.o();
        if ( v1 != null )
          return new com.google.android.gms.maps.model.IndoorBuilding(v1);
        else
          return null;
      }
      catch ( android.os.RemoteException v4 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v4);
      }
    }

    private int h()
    {
      try
      {
        return this.f.f();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private boolean i()
    {
      try
      {
        return this.f.g();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private boolean j()
    {
      try
      {
        return this.f.h();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private boolean k()
    {
      try
      {
        return this.f.n();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private boolean l()
    {
      try
      {
        return this.f.i();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private android.location.Location m()
    {
      try
      {
        return this.f.j();
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v2);
      }
    }

    private com.google.android.gms.maps.UiSettings n()
    {
      try
      {
        if ( this.g == null )
          this.g = new com.google.android.gms.maps.UiSettings(this.f.k());
        return this.g;
      }
      catch ( android.os.RemoteException v3 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v3);
      }
    }

    private com.google.android.gms.maps.Projection o()
    {
      try
      {
        return new com.google.android.gms.maps.Projection(this.f.l());
      }
      catch ( android.os.RemoteException v3 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v3);
      }
    }

    final com.google.android.gms.maps.internal.IGoogleMapDelegate a()
    {
      return this.f;
    }

}

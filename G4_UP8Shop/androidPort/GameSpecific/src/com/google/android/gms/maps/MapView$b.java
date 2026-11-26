// Decompiled from classes.dex (SourceFile: MapView$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

import com.google.android.gms.maps.internal.u;
class MapView$b extends com.google.android.gms.dynamic.a<com.google.android.gms.maps.MapView$a> {
    // Fields
    protected com.google.android.gms.dynamic.f a;
    private final android.view.ViewGroup b;
    private final android.content.Context c;
    private final com.google.android.gms.maps.GoogleMapOptions d;

    // Methods
    MapView$b(android.view.ViewGroup p0, android.content.Context p1, com.google.android.gms.maps.GoogleMapOptions p2)
    {
      super();
      this.b = p0;
      this.c = p1;
      this.d = p2;
    }

    protected final void a(com.google.android.gms.dynamic.f<com.google.android.gms.maps.MapView$a> p0)
    {
      this.a = p0;
      this.i();
    }

    public final void i()
    {
      if ( this.a != null && this.a() == null )
      {
        try
        {
          this.a.a((com.google.android.gms.dynamic.LifecycleDelegate)new com.google.android.gms.maps.MapView$a(this.b, u.E(this.c).a(com.google.android.gms.dynamic.e.h(this.c), this.d)));
        }
        catch ( android.os.RemoteException v1 )
        {
          throw new com.google.android.gms.maps.model.RuntimeRemoteException(v1);
        }
        catch ( com.google.android.gms.common.GooglePlayServicesNotAvailableException e )
        {
        }
      }
    }

}

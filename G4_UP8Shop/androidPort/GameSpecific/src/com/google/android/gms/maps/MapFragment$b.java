// Decompiled from classes.dex (SourceFile: MapFragment$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

import com.google.android.gms.maps.internal.u;
class MapFragment$b extends com.google.android.gms.dynamic.a<com.google.android.gms.maps.MapFragment$a> {
    // Fields
    protected com.google.android.gms.dynamic.f a;
    private final android.app.Fragment b;
    private android.app.Activity c;

    // Methods
    MapFragment$b(android.app.Fragment p0)
    {
      super();
      this.b = p0;
    }

    private void a(android.app.Activity p0)
    {
      this.c = p0;
      this.i();
    }

    /* synthetic */ static void a(com.google.android.gms.maps.MapFragment$b p0, android.app.Activity p1)
    {
      p0.c = p1;
      p0.i();
    }

    protected final void a(com.google.android.gms.dynamic.f<com.google.android.gms.maps.MapFragment$a> p0)
    {
      this.a = p0;
      this.i();
    }

    public final void i()
    {
      if ( this.c != null && this.a != null && this.a() == null )
      {
        try
        {
          MapsInitializer.initialize(this.c);
          this.a.a((com.google.android.gms.dynamic.LifecycleDelegate)new com.google.android.gms.maps.MapFragment$a(this.b, u.E(this.c).b(com.google.android.gms.dynamic.e.h(this.c))));
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

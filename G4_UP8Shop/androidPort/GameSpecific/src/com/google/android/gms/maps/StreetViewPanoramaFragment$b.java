// Decompiled from classes.dex (SourceFile: StreetViewPanoramaFragment$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

import com.google.android.gms.maps.internal.u;
class StreetViewPanoramaFragment$b extends com.google.android.gms.dynamic.a<com.google.android.gms.maps.StreetViewPanoramaFragment$a> {
    // Fields
    protected com.google.android.gms.dynamic.f a;
    private final android.app.Fragment b;
    private android.app.Activity c;

    // Methods
    StreetViewPanoramaFragment$b(android.app.Fragment p0)
    {
      super();
      this.b = p0;
    }

    private void a(android.app.Activity p0)
    {
      this.c = p0;
      this.i();
    }

    /* synthetic */ static void a(
            com.google.android.gms.maps.StreetViewPanoramaFragment$b p0,
            android.app.Activity p1)
    {
      p0.c = p1;
      p0.i();
    }

    protected final void a(
            com.google.android.gms.dynamic.f<com.google.android.gms.maps.StreetViewPanoramaFragment$a> p0)
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
          this.a.a((com.google.android.gms.dynamic.LifecycleDelegate)new com.google.android.gms.maps.StreetViewPanoramaFragment$a(this.b, u.E(this.c).c(com.google.android.gms.dynamic.e.h(this.c))));
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

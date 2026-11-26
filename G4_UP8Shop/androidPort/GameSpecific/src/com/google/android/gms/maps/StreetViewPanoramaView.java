// Decompiled from classes.dex (SourceFile: StreetViewPanoramaView.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

public class StreetViewPanoramaView extends android.widget.FrameLayout {
    // Fields
    private final com.google.android.gms.maps.StreetViewPanoramaView$a a;
    private com.google.android.gms.maps.StreetViewPanorama b;

    // Methods
    private StreetViewPanoramaView(android.content.Context p0)
    {
      super(p0);
      this.a = new com.google.android.gms.maps.StreetViewPanoramaView$a(this, p0, null);
    }

    public StreetViewPanoramaView(android.content.Context p0, android.util.AttributeSet p1)
    {
      super(p0, p1);
      this.a = new com.google.android.gms.maps.StreetViewPanoramaView$a(this, p0, null);
    }

    public StreetViewPanoramaView(android.content.Context p0, android.util.AttributeSet p1, int p2)
    {
      super(p0, p1, p2);
      this.a = new com.google.android.gms.maps.StreetViewPanoramaView$a(this, p0, null);
    }

    private StreetViewPanoramaView(android.content.Context p0, com.google.android.gms.maps.StreetViewPanoramaOptions p1)
    {
      super(p0);
      this.a = new com.google.android.gms.maps.StreetViewPanoramaView$a(this, p0, p1);
    }

    private com.google.android.gms.maps.StreetViewPanorama a()
    {
      com.google.android.gms.dynamic.LifecycleDelegate v3; // RETVAL
    
      if ( this.b != null )
        return this.b;
      this.a.i();
      v3 = this.a.a();
      if ( v3 == null )
        return null;
      try
      {
        this.b = new com.google.android.gms.maps.StreetViewPanorama(((com.google.android.gms.maps.StreetViewPanoramaView$b)this.a.a()).h().a());
        return this.b;
      }
      catch ( android.os.RemoteException v4 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v4);
      }
    }

    private void a(android.os.Bundle p0)
    {
      this.a.a(p0);
      if ( this.a.a() == null )
        a.b(this);
    }

    private void b()
    {
      this.a.c();
    }

    private void b(android.os.Bundle p0)
    {
      this.a.b(p0);
    }

    private void c()
    {
      this.a.d();
    }

    private void d()
    {
      this.a.g();
    }

    private void e()
    {
      this.a.h();
    }

}

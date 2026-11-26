// Decompiled from classes.dex (SourceFile: MapView.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

public class MapView extends android.widget.FrameLayout {
    // Fields
    private final com.google.android.gms.maps.MapView$b a;
    private com.google.android.gms.maps.GoogleMap b;

    // Methods
    private MapView(android.content.Context p0)
    {
      super(p0);
      this.a = new com.google.android.gms.maps.MapView$b(this, p0, null);
    }

    public MapView(android.content.Context p0, android.util.AttributeSet p1)
    {
      super(p0, p1);
      this.a = new com.google.android.gms.maps.MapView$b(this, p0, GoogleMapOptions.createFromAttributes(p0, p1));
    }

    public MapView(android.content.Context p0, android.util.AttributeSet p1, int p2)
    {
      super(p0, p1, p2);
      this.a = new com.google.android.gms.maps.MapView$b(this, p0, GoogleMapOptions.createFromAttributes(p0, p1));
    }

    private MapView(android.content.Context p0, com.google.android.gms.maps.GoogleMapOptions p1)
    {
      super(p0);
      this.a = new com.google.android.gms.maps.MapView$b(this, p0, p1);
    }

    private com.google.android.gms.maps.GoogleMap a()
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
        this.b = new com.google.android.gms.maps.GoogleMap(((com.google.android.gms.maps.MapView$a)this.a.a()).h().a());
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

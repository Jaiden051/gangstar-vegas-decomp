// Decompiled from classes.dex (SourceFile: TileOverlayOptions.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

import com.google.android.gms.maps.internal.v;
public final class TileOverlayOptions implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.maps.model.TileOverlayOptionsCreator CREATOR;
    private final int a;
    private com.google.android.gms.maps.model.internal.i b;
    private com.google.android.gms.maps.model.TileProvider c;
    private boolean d;
    private float e;
    private boolean f;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.maps.model.TileOverlayOptionsCreator();
    }

    public TileOverlayOptions()
    {
      super();
      this.d = true;
      this.f = true;
      this.a = 1;
    }

    TileOverlayOptions(int p0, android.os.IBinder p1, boolean p2, float p3, boolean p4)
    {
      super();
      com.google.android.gms.maps.model.TileProvider v6;
      this.d = true;
      this.f = true;
      this.a = p0;
      this.b = com.google.android.gms.maps.model.internal.i$a.bg(p1);
      if ( this.b != null )
        v6 = (com.google.android.gms.maps.model.TileProvider)new com.google.android.gms.maps.model.TileOverlayOptions$1(this);
      else
        v6 = null;
      this.c = v6;
      this.d = p2;
      this.e = p3;
      this.f = p4;
    
    }

    private com.google.android.gms.maps.model.TileOverlayOptions a(float p0)
    {
      this.e = p0;
      return this;
    }

    private com.google.android.gms.maps.model.TileOverlayOptions a(
            com.google.android.gms.maps.model.TileProvider p0)
    {
      com.google.android.gms.maps.model.internal.i v2;
      this.c = p0;
      if ( this.c != null )
        v2 = new com.google.android.gms.maps.model.TileOverlayOptions$2(this, p0);
      else
        v2 = null;
      this.b = v2;
      return this;
    }

    private com.google.android.gms.maps.model.TileOverlayOptions a(boolean p0)
    {
      this.d = p0;
      return this;
    }

    /* synthetic */ static com.google.android.gms.maps.model.internal.i a(
            com.google.android.gms.maps.model.TileOverlayOptions p0)
    {
      return p0.b;
    }

    private com.google.android.gms.maps.model.TileOverlayOptions b(boolean p0)
    {
      this.f = p0;
      return this;
    }

    private com.google.android.gms.maps.model.TileProvider f()
    {
      return this.c;
    }

    final int a()
    {
      return this.a;
    }

    final android.os.IBinder b()
    {
      return this.b.asBinder();
    }

    public final float c()
    {
      return this.e;
    }

    public final boolean d()
    {
      return this.d;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final boolean e()
    {
      return this.f;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      if ( v.jG() )
        com.google.android.gms.maps.model.j.a(this, p0, p1);
      else
        TileOverlayOptionsCreator.a(this, p0, p1);
    }

}

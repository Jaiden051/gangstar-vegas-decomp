// Decompiled from classes.dex (SourceFile: GroundOverlayOptions.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

import android.location.Location;
import com.google.android.gms.internal.hn;
import com.google.android.gms.maps.internal.v;
public final class GroundOverlayOptions implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.maps.model.GroundOverlayOptionsCreator CREATOR;
    public static float a;
    private final int b;
    private com.google.android.gms.maps.model.BitmapDescriptor c;
    private com.google.android.gms.maps.model.LatLng d;
    private float e;
    private float f;
    private com.google.android.gms.maps.model.LatLngBounds g;
    private float h;
    private float i;
    private boolean j;
    private float k;
    private float l;
    private float m;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.maps.model.GroundOverlayOptionsCreator();
    }

    public GroundOverlayOptions()
    {
      super();
      this.j = true;
      this.k = 0.0f;
      this.l = 0.5f;
      this.m = 0.5f;
      this.b = 1;
    }

    GroundOverlayOptions(
            int p0,
            android.os.IBinder p1,
            com.google.android.gms.maps.model.LatLng p2,
            float p3,
            float p4,
            com.google.android.gms.maps.model.LatLngBounds p5,
            float p6,
            float p7,
            boolean p8,
            float p9,
            float p10,
            float p11)
    {
      super();
      this.j = true;
      this.k = 0.0f;
      this.l = 0.5f;
      this.m = 0.5f;
      this.b = p0;
      this.c = new com.google.android.gms.maps.model.BitmapDescriptor(com.google.android.gms.dynamic.d$a.ag(p1));
      this.d = p2;
      this.e = p3;
      this.f = p4;
      this.g = p5;
      this.h = p6;
      this.i = p7;
      this.j = p8;
      this.k = p9;
      this.l = p10;
      this.m = p11;
    }

    private com.google.android.gms.maps.model.GroundOverlayOptions a(float p0)
    {
      this.h = (p0 % 360.0f + 360.0f) % 360.0f;
      return this;
    }

    private com.google.android.gms.maps.model.GroundOverlayOptions a(float p0, float p1)
    {
      this.l = p0;
      this.m = p1;
      return this;
    }

    private com.google.android.gms.maps.model.GroundOverlayOptions a(
            com.google.android.gms.maps.model.BitmapDescriptor p0)
    {
      this.c = p0;
      return this;
    }

    private com.google.android.gms.maps.model.GroundOverlayOptions a(
            com.google.android.gms.maps.model.LatLng p0,
            float p1)
    {
      hn.a(this.g == null, "Position has already been set using positionFromBounds");
      hn.b(p0 != null, "Location must be specified");
      hn.b(p1 >= 0.0f, "Width must be non-negative");
      return this.b(p0, p1, -1.0f);
    }

    private com.google.android.gms.maps.model.GroundOverlayOptions a(
            com.google.android.gms.maps.model.LatLng p0,
            float p1,
            float p2)
    {
      hn.a(this.g == null, "Position has already been set using positionFromBounds");
      hn.b(p0 != null, "Location must be specified");
      hn.b(p1 >= 0.0f, "Width must be non-negative");
      hn.b(p2 >= 0.0f, "Height must be non-negative");
      return this.b(p0, p1, p2);
    }

    private com.google.android.gms.maps.model.GroundOverlayOptions a(
            com.google.android.gms.maps.model.LatLngBounds p0)
    {
      Object[] v2;
      v2 = new Object[1];
      v2[0] = this.d;
      hn.a(this.d == null, "Position has already been set using position: %s", v2);
      this.g = p0;
      return this;
    }

    private com.google.android.gms.maps.model.GroundOverlayOptions a(boolean p0)
    {
      this.j = p0;
      return this;
    }

    private com.google.android.gms.maps.model.GroundOverlayOptions b(float p0)
    {
      this.i = p0;
      return this;
    }

    private com.google.android.gms.maps.model.GroundOverlayOptions b(
            com.google.android.gms.maps.model.LatLng p0,
            float p1,
            float p2)
    {
      this.d = p0;
      this.e = p1;
      this.f = p2;
      return this;
    }

    private com.google.android.gms.maps.model.GroundOverlayOptions c(float p0)
    {
      boolean v2;
      v2 = p0 >= 0.0f && p0 <= 1.0f;
      hn.b(v2, "Transparency must be in the range [0..1]");
      this.k = p0;
      return this;
    }

    private com.google.android.gms.maps.model.BitmapDescriptor m()
    {
      return this.c;
    }

    final android.os.IBinder a()
    {
      return this.c.a().asBinder();
    }

    final int b()
    {
      return this.b;
    }

    public final com.google.android.gms.maps.model.LatLng c()
    {
      return this.d;
    }

    public final float d()
    {
      return this.e;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final float e()
    {
      return this.f;
    }

    public final com.google.android.gms.maps.model.LatLngBounds f()
    {
      return this.g;
    }

    public final float g()
    {
      return this.h;
    }

    public final float h()
    {
      return this.i;
    }

    public final float i()
    {
      return this.k;
    }

    public final float j()
    {
      return this.l;
    }

    public final float k()
    {
      return this.m;
    }

    public final boolean l()
    {
      return this.j;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      if ( v.jG() )
        com.google.android.gms.maps.model.c.a(this, p0, p1);
      else
        GroundOverlayOptionsCreator.a(this, p0, p1);
    }

}

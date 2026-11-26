// Decompiled from classes.dex (SourceFile: VisibleRegion.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

import com.google.android.gms.internal.hl;
import com.google.android.gms.maps.internal.v;
public final class VisibleRegion implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.maps.model.VisibleRegionCreator CREATOR;
    public final com.google.android.gms.maps.model.LatLng a;
    public final com.google.android.gms.maps.model.LatLng b;
    public final com.google.android.gms.maps.model.LatLng c;
    public final com.google.android.gms.maps.model.LatLng d;
    public final com.google.android.gms.maps.model.LatLngBounds e;
    private final int f;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.maps.model.VisibleRegionCreator();
    }

    VisibleRegion(
            int p0,
            com.google.android.gms.maps.model.LatLng p1,
            com.google.android.gms.maps.model.LatLng p2,
            com.google.android.gms.maps.model.LatLng p3,
            com.google.android.gms.maps.model.LatLng p4,
            com.google.android.gms.maps.model.LatLngBounds p5)
    {
      super();
      this.f = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p4;
      this.e = p5;
    }

    private VisibleRegion(
            com.google.android.gms.maps.model.LatLng p0,
            com.google.android.gms.maps.model.LatLng p1,
            com.google.android.gms.maps.model.LatLng p2,
            com.google.android.gms.maps.model.LatLng p3,
            com.google.android.gms.maps.model.LatLngBounds p4)
    {
      this(1, p0, p1, p2, p3, p4);
    }

    final int a()
    {
      return this.f;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.maps.model.VisibleRegion v4;
      v2 = true;
      if ( this != p0 )
      {
        if ( p0 instanceof com.google.android.gms.maps.model.VisibleRegion )
        {
          v4 = (com.google.android.gms.maps.model.VisibleRegion)p0;
          if ( !this.a.equals(v4.a)
            || !this.b.equals(v4.b)
            || !this.c.equals(v4.c)
            || !this.d.equals(v4.d)
            || !this.e.equals(v4.e) )
          {
            return false;
          }
        }
        else
        {
          return false;
        }
      }
      return v2;
    }

    public final int hashCode()
    {
      Object[] v1;
      v1 = new Object[5];
      v1[0] = this.a;
      v1[1] = this.b;
      v1[2] = this.c;
      v1[3] = this.d;
      v1[4] = this.e;
      return hl.hashCode(v1);
    }

    public final String toString()
    {
      return hl.e(this).a("nearLeft", this.a).a("nearRight", this.b).a("farLeft", this.c).a("farRight", this.d).a("latLngBounds", this.e).toString();
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      if ( v.jG() )
        com.google.android.gms.maps.model.k.a(this, p0, p1);
      else
        VisibleRegionCreator.a(this, p0, p1);
    }

}

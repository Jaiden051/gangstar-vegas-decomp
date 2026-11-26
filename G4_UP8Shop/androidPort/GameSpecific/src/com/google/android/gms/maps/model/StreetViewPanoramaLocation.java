// Decompiled from classes.dex (SourceFile: StreetViewPanoramaLocation.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

import com.google.android.gms.internal.hl;
public class StreetViewPanoramaLocation implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.maps.model.StreetViewPanoramaLocationCreator CREATOR;
    public final com.google.android.gms.maps.model.StreetViewPanoramaLink[] a;
    public final com.google.android.gms.maps.model.LatLng b;
    public final java.lang.String c;
    private final int d;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.maps.model.StreetViewPanoramaLocationCreator();
    }

    StreetViewPanoramaLocation(
            int p0,
            com.google.android.gms.maps.model.StreetViewPanoramaLink[] p1,
            com.google.android.gms.maps.model.LatLng p2,
            String p3)
    {
      super();
      this.d = p0;
      this.a = (com.google.android.gms.maps.model.StreetViewPanoramaLink[])p1;
      this.b = p2;
      this.c = p3;
    }

    private StreetViewPanoramaLocation(
            com.google.android.gms.maps.model.StreetViewPanoramaLink[] p0,
            com.google.android.gms.maps.model.LatLng p1,
            String p2)
    {
      this(1, p0, p1, p2);
    }

    final int a()
    {
      return this.d;
    }

    public int describeContents()
    {
      return 0;
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.maps.model.StreetViewPanoramaLocation v4;
      v2 = true;
      if ( this != p0 )
      {
        if ( p0 instanceof com.google.android.gms.maps.model.StreetViewPanoramaLocation )
        {
          v4 = (com.google.android.gms.maps.model.StreetViewPanoramaLocation)p0;
          if ( !this.c.equals(v4.c) || !this.b.equals(v4.b) )
            return false;
        }
        else
        {
          return false;
        }
      }
      return v2;
    }

    public int hashCode()
    {
      Object[] v1;
      v1 = new Object[2];
      v1[0] = this.b;
      v1[1] = this.c;
      return hl.hashCode(v1);
    }

    public String toString()
    {
      return hl.e(this).a("panoId", this.c).a("position", this.b.toString()).toString();
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      StreetViewPanoramaLocationCreator.a(this, p0, p1);
    }

}

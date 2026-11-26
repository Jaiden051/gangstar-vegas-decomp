// Decompiled from classes.dex (SourceFile: LatLng.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

import com.google.android.gms.maps.internal.v;
public final class LatLng implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.maps.model.LatLngCreator CREATOR;
    public final double a;
    public final double b;
    private final int c;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.maps.model.LatLngCreator();
    }

    public LatLng(double p0, double p2)
    {
      this(1, p0, p2);
    }

    LatLng(int p0, double p1, double p3)
    {
      super();
      this.c = p0;
      if ( p3 < -180.0 || p3 >= 180.0 )
        this.b = ((p3 - 180.0) % 360.0 + 360.0) % 360.0 - 180.0;
      else
        this.b = p3;
      this.a = Math.max(-90.0, Math.min(90.0, p1));
    }

    final int a()
    {
      return this.c;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.maps.model.LatLng v4;
      v2 = true;
      if ( this != p0 )
      {
        if ( p0 instanceof com.google.android.gms.maps.model.LatLng )
        {
          v4 = (com.google.android.gms.maps.model.LatLng)p0;
          if ( Double.doubleToLongBits(this.a) != Double.doubleToLongBits(v4.a)
            || Double.doubleToLongBits(this.b) != Double.doubleToLongBits(v4.b) )
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
      long v1; // RETVAL
      long v2;
      long v3; // RETVAL
    
      v1 = Double.doubleToLongBits(this.a);
      v2 = v1 ^ com.gameloft.android.DecompRT.hi32(v1);
      v3 = Double.doubleToLongBits(this.b);
      return (int)(31 * (v2 + 31) + (v3 ^ com.gameloft.android.DecompRT.hi32(v3)));
    }

    public final String toString()
    {
      return "lat/lng: (" + this.a + "," + this.b + ")";
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      if ( v.jG() )
        com.google.android.gms.maps.model.e.a(this, p0, p1);
      else
        LatLngCreator.a(this, p0, p1);
    }

}

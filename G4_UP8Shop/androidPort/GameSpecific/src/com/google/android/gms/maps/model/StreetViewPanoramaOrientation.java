// Decompiled from classes.dex (SourceFile: StreetViewPanoramaOrientation.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.hn;
public class StreetViewPanoramaOrientation implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.maps.model.StreetViewPanoramaOrientationCreator CREATOR;
    public final float a;
    public final float b;
    private final int c;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.maps.model.StreetViewPanoramaOrientationCreator();
    }

    public StreetViewPanoramaOrientation(float p0, float p1)
    {
      this(1, p0, p1);
    }

    StreetViewPanoramaOrientation(int p0, float p1, float p2)
    {
      super();
      boolean v4;
      v4 = p1 >= -90.0f && p1 <= 90.0f;
      hn.b(v4, "Tilt needs to be between -90 and 90 inclusive");
      this.c = p0;
      this.a = p1 + 0.0f;
      if ( p2 <= 0.0 )
        p2 = p2 % 360.0f + 360.0f;
      this.b = p2 % 360.0f;
    
    }

    public static com.google.android.gms.maps.model.StreetViewPanoramaOrientation$Builder builder()
    {
      return new com.google.android.gms.maps.model.StreetViewPanoramaOrientation$Builder();
    }

    public static com.google.android.gms.maps.model.StreetViewPanoramaOrientation$Builder builder(
            com.google.android.gms.maps.model.StreetViewPanoramaOrientation p0)
    {
      return new com.google.android.gms.maps.model.StreetViewPanoramaOrientation$Builder(p0);
    }

    final int a()
    {
      return this.c;
    }

    public int describeContents()
    {
      return 0;
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.maps.model.StreetViewPanoramaOrientation v4;
      v2 = true;
      if ( this != p0 )
      {
        if ( p0 instanceof com.google.android.gms.maps.model.StreetViewPanoramaOrientation )
        {
          v4 = (com.google.android.gms.maps.model.StreetViewPanoramaOrientation)p0;
          if ( Float.floatToIntBits(this.a) != Float.floatToIntBits(v4.a)
            || Float.floatToIntBits(this.b) != Float.floatToIntBits(v4.b) )
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

    public int hashCode()
    {
      Object[] v1;
      v1 = new Object[2];
      v1[0] = Float.valueOf(this.a);
      v1[1] = Float.valueOf(this.b);
      return hl.hashCode(v1);
    }

    public String toString()
    {
      return hl.e(this).a("tilt", Float.valueOf(this.a)).a("bearing", Float.valueOf(this.b)).toString();
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      StreetViewPanoramaOrientationCreator.a(this, p0, p1);
    }

}

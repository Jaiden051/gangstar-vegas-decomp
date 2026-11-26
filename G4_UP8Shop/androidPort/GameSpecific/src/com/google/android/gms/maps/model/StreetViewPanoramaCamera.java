// Decompiled from classes.dex (SourceFile: StreetViewPanoramaCamera.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.hn;
public class StreetViewPanoramaCamera implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.maps.model.StreetViewPanoramaCameraCreator CREATOR;
    public final float a;
    public final float b;
    public final float c;
    private final int d;
    private com.google.android.gms.maps.model.StreetViewPanoramaOrientation e;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.maps.model.StreetViewPanoramaCameraCreator();
    }

    public StreetViewPanoramaCamera(float p0, float p1, float p2)
    {
      this(1, p0, p1, p2);
    }

    StreetViewPanoramaCamera(int p0, float p1, float p2, float p3)
    {
      super();
      boolean v5;
      float v6;
      v5 = p2 >= -90.0f && p2 <= 90.0f;
      hn.b(v5, "Tilt needs to be between -90 and 90 inclusive");
      this.d = p0;
      this.a = p1;
      this.b = p2 + 0.0f;
      if ( p3 > 0.0 )
        v6 = p3;
      else
        v6 = p3 % 360.0f + 360.0f;
      this.c = v6 % 360.0f;
      this.e = new com.google.android.gms.maps.model.StreetViewPanoramaOrientation$Builder().a(p2).b(p3).a();
    
    }

    private com.google.android.gms.maps.model.StreetViewPanoramaOrientation b()
    {
      return this.e;
    }

    public static com.google.android.gms.maps.model.StreetViewPanoramaCamera$Builder builder()
    {
      return new com.google.android.gms.maps.model.StreetViewPanoramaCamera$Builder();
    }

    public static com.google.android.gms.maps.model.StreetViewPanoramaCamera$Builder builder(
            com.google.android.gms.maps.model.StreetViewPanoramaCamera p0)
    {
      return new com.google.android.gms.maps.model.StreetViewPanoramaCamera$Builder(p0);
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
      com.google.android.gms.maps.model.StreetViewPanoramaCamera v4;
      v2 = true;
      if ( this != p0 )
      {
        if ( p0 instanceof com.google.android.gms.maps.model.StreetViewPanoramaCamera )
        {
          v4 = (com.google.android.gms.maps.model.StreetViewPanoramaCamera)p0;
          if ( Float.floatToIntBits(this.a) != Float.floatToIntBits(v4.a)
            || Float.floatToIntBits(this.b) != Float.floatToIntBits(v4.b)
            || Float.floatToIntBits(this.c) != Float.floatToIntBits(v4.c) )
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
      v1 = new Object[3];
      v1[0] = Float.valueOf(this.a);
      v1[1] = Float.valueOf(this.b);
      v1[2] = Float.valueOf(this.c);
      return hl.hashCode(v1);
    }

    public String toString()
    {
      return hl.e(this).a("zoom", Float.valueOf(this.a)).a("tilt", Float.valueOf(this.b)).a("bearing", Float.valueOf(this.c)).toString();
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      StreetViewPanoramaCameraCreator.a(this, p0, p1);
    }

}

// Decompiled from classes.dex (SourceFile: StreetViewPanoramaLink.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

import com.google.android.gms.internal.hl;
public class StreetViewPanoramaLink implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.maps.model.StreetViewPanoramaLinkCreator CREATOR;
    public final java.lang.String a;
    public final float b;
    private final int c;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.maps.model.StreetViewPanoramaLinkCreator();
    }

    StreetViewPanoramaLink(int p0, String p1, float p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      if ( p2 <= 0.0 )
        p2 = p2 % 360.0f + 360.0f;
      this.b = p2 % 360.0f;
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
      com.google.android.gms.maps.model.StreetViewPanoramaLink v4;
      v2 = true;
      if ( this != p0 )
      {
        if ( p0 instanceof com.google.android.gms.maps.model.StreetViewPanoramaLink )
        {
          v4 = (com.google.android.gms.maps.model.StreetViewPanoramaLink)p0;
          if ( !this.a.equals(v4.a) || Float.floatToIntBits(this.b) != Float.floatToIntBits(v4.b) )
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
      v1[0] = this.a;
      v1[1] = Float.valueOf(this.b);
      return hl.hashCode(v1);
    }

    public String toString()
    {
      return hl.e(this).a("panoId", this.a).a("bearing", Float.valueOf(this.b)).toString();
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      StreetViewPanoramaLinkCreator.a(this, p0, p1);
    }

}

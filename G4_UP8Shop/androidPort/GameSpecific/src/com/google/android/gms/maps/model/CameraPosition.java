// Decompiled from classes.dex (SourceFile: CameraPosition.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

import com.google.android.gms.R$styleable;
import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.hn;
import com.google.android.gms.maps.internal.v;
public final class CameraPosition implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.maps.model.CameraPositionCreator CREATOR;
    public final com.google.android.gms.maps.model.LatLng a;
    public final float b;
    public final float c;
    public final float d;
    private final int e;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.maps.model.CameraPositionCreator();
    }

    CameraPosition(int p0, com.google.android.gms.maps.model.LatLng p1, float p2, float p3, float p4)
    {
      super();
      boolean v6;
      hn.b(p1, "null camera target");
      v6 = p3 >= 0.0f && p3 <= 90.0f;
      hn.b(v6, "Tilt needs to be between 0 and 90 inclusive");
      this.e = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3 + 0.0f;
      if ( p4 <= 0.0 )
        p4 = p4 % 360.0f + 360.0f;
      this.d = p4 % 360.0f;
    
    }

    public CameraPosition(com.google.android.gms.maps.model.LatLng p0, float p1, float p2, float p3)
    {
      this(1, p0, p1, p2, p3);
    }

    public static com.google.android.gms.maps.model.CameraPosition$Builder builder()
    {
      return new com.google.android.gms.maps.model.CameraPosition$Builder();
    }

    public static com.google.android.gms.maps.model.CameraPosition$Builder builder(
            com.google.android.gms.maps.model.CameraPosition p0)
    {
      return new com.google.android.gms.maps.model.CameraPosition$Builder(p0);
    }

    public static com.google.android.gms.maps.model.CameraPosition createFromAttributes(
            android.content.Context p0,
            android.util.AttributeSet p1)
    {
      android.content.res.TypedArray v4;
      float Float;
      float v6;
      com.google.android.gms.maps.model.LatLng v7;
      com.google.android.gms.maps.model.CameraPosition$Builder v8;
      if ( p1 == null )
        return null;
      v4 = p0.getResources().obtainAttributes(p1, R$styleable.e);
      if ( v4.hasValue(2) )
        Float = v4.getFloat(2, 0.0f);
      else
        Float = 0.0f;
      if ( v4.hasValue(3) )
        v6 = v4.getFloat(3, 0.0f);
      else
        v6 = 0.0f;
      v7 = new com.google.android.gms.maps.model.LatLng(Float, v6);
      v8 = builder();
      v8.a(v7);
      if ( v4.hasValue(5) )
        v8.a(v4.getFloat(5, 0.0f));
      if ( v4.hasValue(1) )
        v8.c(v4.getFloat(1, 0.0f));
      if ( v4.hasValue(4) )
        v8.b(v4.getFloat(4, 0.0f));
      return v8.a();
    }

    public static final com.google.android.gms.maps.model.CameraPosition fromLatLngZoom(
            com.google.android.gms.maps.model.LatLng p0,
            float p1)
    {
      return new com.google.android.gms.maps.model.CameraPosition(p0, p1, 0.0f, 0.0f);
    }

    final int a()
    {
      return this.e;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.maps.model.CameraPosition v4;
      v2 = true;
      if ( this != p0 )
      {
        if ( p0 instanceof com.google.android.gms.maps.model.CameraPosition )
        {
          v4 = (com.google.android.gms.maps.model.CameraPosition)p0;
          if ( !this.a.equals(v4.a)
            || Float.floatToIntBits(this.b) != Float.floatToIntBits(v4.b)
            || Float.floatToIntBits(this.c) != Float.floatToIntBits(v4.c)
            || Float.floatToIntBits(this.d) != Float.floatToIntBits(v4.d) )
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
      v1 = new Object[4];
      v1[0] = this.a;
      v1[1] = java.lang.Float.valueOf(this.b);
      v1[2] = java.lang.Float.valueOf(this.c);
      v1[3] = java.lang.Float.valueOf(this.d);
      return hl.hashCode(v1);
    }

    public final String toString()
    {
      return hl.e(this).a("target", this.a).a("zoom", java.lang.Float.valueOf(this.b)).a("tilt", java.lang.Float.valueOf(this.c)).a("bearing", java.lang.Float.valueOf(this.d)).toString();
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      if ( v.jG() )
        com.google.android.gms.maps.model.a.a(this, p0, p1);
      else
        CameraPositionCreator.a(this, p0, p1);
    }

}

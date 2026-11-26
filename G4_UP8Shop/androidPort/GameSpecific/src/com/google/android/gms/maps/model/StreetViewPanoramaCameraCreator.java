// Decompiled from classes.dex (SourceFile: StreetViewPanoramaCameraCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

public class StreetViewPanoramaCameraCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public StreetViewPanoramaCameraCreator()
    {
      super();
    }

    static void a(
            com.google.android.gms.maps.model.StreetViewPanoramaCamera p0,
            android.os.Parcel p1,
            int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.b);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.c);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.maps.model.StreetViewPanoramaCamera _typed_createFromParcel(
            android.os.Parcel p0)
    {
      float v1;
      int v2;
      float v3;
      int v4;
      float v5;
      int v6;
      v1 = 0.0f;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0.0f;
      v4 = 0;
      v5 = 0.0f;
      while ( p0.dataPosition() < v2 )
      {
        v6 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v6) )
        {
          case 1:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          case 2:
            v3 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v6);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v6);
            break;
          case 4:
            v1 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v6);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v6);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.maps.model.StreetViewPanoramaCamera(v4, v3, v5, v1);
    }

    private static com.google.android.gms.maps.model.StreetViewPanoramaCamera[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.maps.model.StreetViewPanoramaCamera[p0];
    }

    /* bridge */ public Object createFromParcel(android.os.Parcel p0)
    {
      return _typed_createFromParcel(p0);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.maps.model.StreetViewPanoramaCamera[p0];
    }

}

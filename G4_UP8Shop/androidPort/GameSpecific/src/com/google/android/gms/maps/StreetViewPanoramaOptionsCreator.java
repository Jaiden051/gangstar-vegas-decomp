// Decompiled from classes.dex (SourceFile: StreetViewPanoramaOptionsCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

import com.google.android.gms.maps.model.LatLng;
import com.google.android.gms.maps.model.StreetViewPanoramaCamera;
public class StreetViewPanoramaOptionsCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public StreetViewPanoramaOptionsCreator()
    {
      super();
    }

    static void a(
            com.google.android.gms.maps.StreetViewPanoramaOptions p0,
            android.os.Parcel p1,
            int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, (android.os.Parcelable)p0.g(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.j(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, (android.os.Parcelable)p0.h(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.i(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.b());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.c());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.d());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 9, p0.e());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 10, p0.f());
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.maps.StreetViewPanoramaOptions _typed_createFromParcel(
            android.os.Parcel p0)
    {
      Integer v1;
      byte v2;
      int v3;
      byte v4;
      byte v5;
      byte v6;
      byte v7;
      com.google.android.gms.maps.model.LatLng v8;
      String v9;
      com.google.android.gms.maps.model.StreetViewPanoramaCamera v10;
      int v11;
      int v12;
      v1 = null;
      v2 = 0;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = 0;
      v5 = 0;
      v6 = 0;
      v7 = 0;
      v8 = null;
      v9 = null;
      v10 = null;
      v11 = 0;
      while ( p0.dataPosition() < v3 )
      {
        v12 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v12) )
        {
          case 1:
            v11 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v12);
            break;
          case 2:
            v10 = (com.google.android.gms.maps.model.StreetViewPanoramaCamera)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                                v12,
                                                                                (android.os.Parcelable.Creator)StreetViewPanoramaCamera.CREATOR);
            break;
          case 3:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v12);
            break;
          case 4:
            v8 = (com.google.android.gms.maps.model.LatLng)com.google.android.gms.common.internal.safeparcel.a.a(p0, v12, (android.os.Parcelable.Creator)LatLng.CREATOR);
            break;
          case 5:
            v1 = com.google.android.gms.common.internal.safeparcel.a.h(p0, v12);
            break;
          case 6:
            v7 = com.google.android.gms.common.internal.safeparcel.a.e(p0, v12);
            break;
          case 7:
            v6 = com.google.android.gms.common.internal.safeparcel.a.e(p0, v12);
            break;
          case 8:
            v5 = com.google.android.gms.common.internal.safeparcel.a.e(p0, v12);
            break;
          case 9:
            v4 = com.google.android.gms.common.internal.safeparcel.a.e(p0, v12);
            break;
          case 10:
            v2 = com.google.android.gms.common.internal.safeparcel.a.e(p0, v12);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v12);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.maps.StreetViewPanoramaOptions(v11, v10, v9, v8, v1, v7, v6, v5, v4, v2);
    }

    private static com.google.android.gms.maps.StreetViewPanoramaOptions[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.maps.StreetViewPanoramaOptions[p0];
    }

    /* bridge */ public Object createFromParcel(android.os.Parcel p0)
    {
      return _typed_createFromParcel(p0);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.maps.StreetViewPanoramaOptions[p0];
    }

}

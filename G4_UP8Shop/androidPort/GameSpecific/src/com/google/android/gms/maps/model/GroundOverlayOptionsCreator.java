// Decompiled from classes.dex (SourceFile: GroundOverlayOptionsCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

public class GroundOverlayOptionsCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public GroundOverlayOptionsCreator()
    {
      super();
    }

    static void a(
            com.google.android.gms.maps.model.GroundOverlayOptions p0,
            android.os.Parcel p1,
            int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.b());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.a(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, (android.os.Parcelable)p0.c(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.d());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.e());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, (android.os.Parcelable)p0.f(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.g());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.h());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 9, p0.l());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 10, p0.i());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 11, p0.j());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 12, p0.k());
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.maps.model.GroundOverlayOptions _typed_createFromParcel(
            android.os.Parcel p0)
    {
      boolean v1;
      com.google.android.gms.maps.model.LatLngBounds v2;
      float v3;
      int v4;
      float v5;
      float v6;
      float v7;
      float v8;
      float v9;
      float v10;
      com.google.android.gms.maps.model.LatLng v11;
      android.os.IBinder v12;
      int v13;
      int v14;
      v1 = false;
      v2 = null;
      v3 = 0.0f;
      v4 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v5 = 0.0f;
      v6 = 0.0f;
      v7 = 0.0f;
      v8 = 0.0f;
      v9 = 0.0f;
      v10 = 0.0f;
      v11 = null;
      v12 = null;
      v13 = 0;
      while ( p0.dataPosition() < v4 )
      {
        v14 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v14) )
        {
          case 1:
            v13 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v14);
            break;
          case 2:
            v12 = com.google.android.gms.common.internal.safeparcel.a.p(p0, v14);
            break;
          case 3:
            v11 = (com.google.android.gms.maps.model.LatLng)com.google.android.gms.common.internal.safeparcel.a.a(p0, v14, (android.os.Parcelable.Creator)LatLng.CREATOR);
            break;
          case 4:
            v10 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v14);
            break;
          case 5:
            v9 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v14);
            break;
          case 6:
            v2 = (com.google.android.gms.maps.model.LatLngBounds)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                   v14,
                                                                   (android.os.Parcelable.Creator)LatLngBounds.CREATOR);
            break;
          case 7:
            v8 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v14);
            break;
          case 8:
            v7 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v14);
            break;
          case 9:
            v1 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v14);
            break;
          case 10:
            v6 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v14);
            break;
          case 11:
            v5 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v14);
            break;
          case 12:
            v3 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v14);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v14);
            break;
        }
      }
      if ( p0.dataPosition() != v4 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v4, p0);
      return new com.google.android.gms.maps.model.GroundOverlayOptions(v13, v12, v11, v10, v9, v2, v8, v7, v1, v6, v5, v3);
    }

    private static com.google.android.gms.maps.model.GroundOverlayOptions[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.maps.model.GroundOverlayOptions[p0];
    }

    /* bridge */ public Object createFromParcel(android.os.Parcel p0)
    {
      return _typed_createFromParcel(p0);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.maps.model.GroundOverlayOptions[p0];
    }

}

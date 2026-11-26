// Decompiled from classes.dex (SourceFile: GoogleMapOptionsCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

import com.google.android.gms.maps.model.CameraPosition;
public class GoogleMapOptionsCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public GoogleMapOptionsCreator()
    {
      super();
    }

    static void a(com.google.android.gms.maps.GoogleMapOptions p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.b());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.c());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 4, p0.j());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, (android.os.Parcelable)p0.k(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.d());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.e());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.f());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 9, p0.g());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 10, p0.h());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 11, p0.i());
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.maps.GoogleMapOptions _typed_createFromParcel(
            android.os.Parcel p0)
    {
      byte v1;
      int v2;
      com.google.android.gms.maps.model.CameraPosition v3;
      byte v4;
      byte v5;
      byte v6;
      byte v7;
      byte v8;
      int v9;
      byte v10;
      byte v11;
      int v12;
      int v13;
      v1 = 0;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = null;
      v4 = 0;
      v5 = 0;
      v6 = 0;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v12 = 0;
      while ( p0.dataPosition() < v2 )
      {
        v13 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v13) )
        {
          case 1:
            v12 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v13);
            break;
          case 2:
            v11 = com.google.android.gms.common.internal.safeparcel.a.e(p0, v13);
            break;
          case 3:
            v10 = com.google.android.gms.common.internal.safeparcel.a.e(p0, v13);
            break;
          case 4:
            v9 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v13);
            break;
          case 5:
            v3 = (com.google.android.gms.maps.model.CameraPosition)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                     v13,
                                                                     (android.os.Parcelable.Creator)CameraPosition.CREATOR);
            break;
          case 6:
            v8 = com.google.android.gms.common.internal.safeparcel.a.e(p0, v13);
            break;
          case 7:
            v7 = com.google.android.gms.common.internal.safeparcel.a.e(p0, v13);
            break;
          case 8:
            v6 = com.google.android.gms.common.internal.safeparcel.a.e(p0, v13);
            break;
          case 9:
            v5 = com.google.android.gms.common.internal.safeparcel.a.e(p0, v13);
            break;
          case 10:
            v4 = com.google.android.gms.common.internal.safeparcel.a.e(p0, v13);
            break;
          case 11:
            v1 = com.google.android.gms.common.internal.safeparcel.a.e(p0, v13);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v13);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.maps.GoogleMapOptions(v12, v11, v10, v9, v3, v8, v7, v6, v5, v4, v1);
    }

    private static com.google.android.gms.maps.GoogleMapOptions[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.maps.GoogleMapOptions[p0];
    }

    /* bridge */ public Object createFromParcel(android.os.Parcel p0)
    {
      return _typed_createFromParcel(p0);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.maps.GoogleMapOptions[p0];
    }

}

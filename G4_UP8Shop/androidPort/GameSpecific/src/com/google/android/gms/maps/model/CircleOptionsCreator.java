// Decompiled from classes.dex (SourceFile: CircleOptionsCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

public class CircleOptionsCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public CircleOptionsCreator()
    {
      super();
    }

    static void a(com.google.android.gms.maps.model.CircleOptions p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, (android.os.Parcelable)p0.b(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.c());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.d());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 5, p0.e());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 6, p0.f());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.g());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.h());
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.maps.model.CircleOptions _typed_createFromParcel(
            android.os.Parcel p0)
    {
      float v1;
      boolean v2;
      int v3;
      com.google.android.gms.maps.model.LatLng v4;
      double v5;
      int v6;
      int v7;
      float v8;
      int v9;
      int v10;
      v1 = 0.0f;
      v2 = false;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = null;
      v5 = 0.0;
      v6 = 0;
      v7 = 0;
      v8 = 0.0f;
      v9 = 0;
      while ( p0.dataPosition() < v3 )
      {
        v10 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v10) )
        {
          case 1:
            v9 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v10);
            break;
          case 2:
            v4 = (com.google.android.gms.maps.model.LatLng)com.google.android.gms.common.internal.safeparcel.a.a(p0, v10, (android.os.Parcelable.Creator)LatLng.CREATOR);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.m(p0, v10);
            break;
          case 4:
            v8 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v10);
            break;
          case 5:
            v7 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v10);
            break;
          case 6:
            v6 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v10);
            break;
          case 7:
            v1 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v10);
            break;
          case 8:
            v2 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v10);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v10);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.maps.model.CircleOptions(v9, v4, v5, v8, v7, v6, v1, v2);
    }

    private static com.google.android.gms.maps.model.CircleOptions[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.maps.model.CircleOptions[p0];
    }

    /* bridge */ public Object createFromParcel(android.os.Parcel p0)
    {
      return _typed_createFromParcel(p0);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.maps.model.CircleOptions[p0];
    }

}

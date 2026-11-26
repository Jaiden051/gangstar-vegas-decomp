// Decompiled from classes.dex (SourceFile: PolylineOptionsCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

public class PolylineOptionsCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public PolylineOptionsCreator()
    {
      super();
    }

    static void a(
            com.google.android.gms.maps.model.PolylineOptions p0,
            android.os.Parcel p1,
            int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.b(p1, 2, p0.b(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.c());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 4, p0.d());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.e());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.f());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.g());
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.maps.model.PolylineOptions _typed_createFromParcel(
            android.os.Parcel p0)
    {
      float v1;
      boolean v2;
      int v3;
      java.util.ArrayList v4;
      boolean v5;
      int v6;
      float v7;
      int v8;
      int v9;
      v1 = 0.0f;
      v2 = false;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = null;
      v5 = false;
      v6 = 0;
      v7 = 0.0f;
      v8 = 0;
      while ( p0.dataPosition() < v3 )
      {
        v9 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v9) )
        {
          case 1:
            v8 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v9);
            break;
          case 2:
            v4 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v9, (android.os.Parcelable.Creator)LatLng.CREATOR);
            break;
          case 3:
            v7 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v9);
            break;
          case 4:
            v6 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v9);
            break;
          case 5:
            v1 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v9);
            break;
          case 6:
            v5 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v9);
            break;
          case 7:
            v2 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v9);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v9);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.maps.model.PolylineOptions(v8, v4, v7, v6, v1, v5, v2);
    }

    private static com.google.android.gms.maps.model.PolylineOptions[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.maps.model.PolylineOptions[p0];
    }

    /* bridge */ public Object createFromParcel(android.os.Parcel p0)
    {
      return _typed_createFromParcel(p0);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.maps.model.PolylineOptions[p0];
    }

}

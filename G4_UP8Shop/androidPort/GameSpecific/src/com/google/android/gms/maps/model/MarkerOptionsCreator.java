// Decompiled from classes.dex (SourceFile: MarkerOptionsCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

public class MarkerOptionsCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public MarkerOptionsCreator()
    {
      super();
    }

    static void a(com.google.android.gms.maps.model.MarkerOptions p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, (android.os.Parcelable)p0.c(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.d(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.e(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.b(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.f());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.g());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.h());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 9, p0.i());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 10, p0.j());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 11, p0.k());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 12, p0.l());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 13, p0.m());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 14, p0.n());
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.maps.model.MarkerOptions _typed_createFromParcel(
            android.os.Parcel p0)
    {
      int v1;
      int v2;
      com.google.android.gms.maps.model.LatLng v3;
      String v4;
      String v5;
      android.os.IBinder v6;
      float v7;
      float v8;
      boolean v9;
      boolean v10;
      boolean v11;
      float v12;
      float v13;
      float v14;
      float v15;
      int v16;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = 0;
      v3 = null;
      v4 = null;
      v5 = null;
      v6 = null;
      v7 = 0.0f;
      v8 = 0.0f;
      v9 = false;
      v10 = false;
      v11 = false;
      v12 = 0.0f;
      v13 = 0.5f;
      v14 = 0.0f;
      v15 = 1.0f;
      while ( p0.dataPosition() < v1 )
      {
        v16 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v16) )
        {
          case 1:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v16);
            break;
          case 2:
            v3 = (com.google.android.gms.maps.model.LatLng)com.google.android.gms.common.internal.safeparcel.a.a(p0, v16, (android.os.Parcelable.Creator)LatLng.CREATOR);
            break;
          case 3:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v16);
            break;
          case 4:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v16);
            break;
          case 5:
            v6 = com.google.android.gms.common.internal.safeparcel.a.p(p0, v16);
            break;
          case 6:
            v7 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v16);
            break;
          case 7:
            v8 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v16);
            break;
          case 8:
            v9 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v16);
            break;
          case 9:
            v10 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v16);
            break;
          case 10:
            v11 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v16);
            break;
          case 11:
            v12 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v16);
            break;
          case 12:
            v13 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v16);
            break;
          case 13:
            v14 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v16);
            break;
          case 14:
            v15 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v16);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v16);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.maps.model.MarkerOptions(v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15);
    }

    private static com.google.android.gms.maps.model.MarkerOptions[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.maps.model.MarkerOptions[p0];
    }

    /* bridge */ public Object createFromParcel(android.os.Parcel p0)
    {
      return _typed_createFromParcel(p0);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.maps.model.MarkerOptions[p0];
    }

}

// Decompiled from classes.dex (SourceFile: CameraPositionCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

public class CameraPositionCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public CameraPositionCreator()
    {
      super();
    }

    static void a(com.google.android.gms.maps.model.CameraPosition p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, (android.os.Parcelable)p0.a, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.b);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.c);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.d);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.maps.model.CameraPosition _typed_createFromParcel(
            android.os.Parcel p0)
    {
      float v1;
      int v2;
      int v3;
      com.google.android.gms.maps.model.LatLng v4;
      float v5;
      float v6;
      int v7;
      v1 = 0.0f;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      v5 = 0.0f;
      v6 = 0.0f;
      while ( p0.dataPosition() < v2 )
      {
        v7 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v7) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          case 2:
            v4 = (com.google.android.gms.maps.model.LatLng)com.google.android.gms.common.internal.safeparcel.a.a(p0, v7, (android.os.Parcelable.Creator)LatLng.CREATOR);
            break;
          case 3:
            v6 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v7);
            break;
          case 4:
            v5 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v7);
            break;
          case 5:
            v1 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v7);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v7);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.maps.model.CameraPosition(v3, v4, v6, v5, v1);
    }

    private static com.google.android.gms.maps.model.CameraPosition[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.maps.model.CameraPosition[p0];
    }

    /* bridge */ public Object createFromParcel(android.os.Parcel p0)
    {
      return _typed_createFromParcel(p0);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.maps.model.CameraPosition[p0];
    }

}

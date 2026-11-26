// Decompiled from classes.dex (SourceFile: LatLngCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

public class LatLngCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public LatLngCreator()
    {
      super();
    }

    static void a(com.google.android.gms.maps.model.LatLng p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.b);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.maps.model.LatLng _typed_createFromParcel(android.os.Parcel p0)
    {
      double v1;
      int v2;
      int v3;
      double v4;
      int v5;
      v1 = 0.0;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = 0.0;
      while ( p0.dataPosition() < v2 )
      {
        v5 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v5) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v5);
            break;
          case 2:
            v4 = com.google.android.gms.common.internal.safeparcel.a.m(p0, v5);
            break;
          case 3:
            v1 = com.google.android.gms.common.internal.safeparcel.a.m(p0, v5);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v5);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.maps.model.LatLng(v3, v4, v1);
    }

    private static com.google.android.gms.maps.model.LatLng[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.maps.model.LatLng[p0];
    }

    /* bridge */ public Object createFromParcel(android.os.Parcel p0)
    {
      return _typed_createFromParcel(p0);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.maps.model.LatLng[p0];
    }

}

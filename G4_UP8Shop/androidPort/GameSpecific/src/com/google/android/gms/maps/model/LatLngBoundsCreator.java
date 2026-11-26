// Decompiled from classes.dex (SourceFile: LatLngBoundsCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

public class LatLngBoundsCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public LatLngBoundsCreator()
    {
      super();
    }

    static void a(com.google.android.gms.maps.model.LatLngBounds p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, (android.os.Parcelable)p0.a, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, (android.os.Parcelable)p0.b, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.maps.model.LatLngBounds _typed_createFromParcel(android.os.Parcel p0)
    {
      int v1;
      com.google.android.gms.maps.model.LatLng v2;
      int v3;
      com.google.android.gms.maps.model.LatLng v4;
      int v5;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = null;
      v3 = 0;
      v4 = null;
      while ( p0.dataPosition() < v1 )
      {
        v5 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v5) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v5);
            break;
          case 2:
            v2 = (com.google.android.gms.maps.model.LatLng)com.google.android.gms.common.internal.safeparcel.a.a(p0, v5, (android.os.Parcelable.Creator)LatLng.CREATOR);
            break;
          case 3:
            v4 = (com.google.android.gms.maps.model.LatLng)com.google.android.gms.common.internal.safeparcel.a.a(p0, v5, (android.os.Parcelable.Creator)LatLng.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v5);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.maps.model.LatLngBounds(v3, v2, v4);
    }

    private static com.google.android.gms.maps.model.LatLngBounds[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.maps.model.LatLngBounds[p0];
    }

    /* bridge */ public Object createFromParcel(android.os.Parcel p0)
    {
      return _typed_createFromParcel(p0);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.maps.model.LatLngBounds[p0];
    }

}

// Decompiled from classes.dex (SourceFile: VisibleRegionCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

public class VisibleRegionCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public VisibleRegionCreator()
    {
      super();
    }

    static void a(com.google.android.gms.maps.model.VisibleRegion p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, (android.os.Parcelable)p0.a, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, (android.os.Parcelable)p0.b, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, (android.os.Parcelable)p0.c, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, (android.os.Parcelable)p0.d, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, (android.os.Parcelable)p0.e, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.maps.model.VisibleRegion _typed_createFromParcel(
            android.os.Parcel p0)
    {
      com.google.android.gms.maps.model.LatLngBounds v1;
      int v2;
      int v3;
      com.google.android.gms.maps.model.LatLng v4;
      com.google.android.gms.maps.model.LatLng v5;
      com.google.android.gms.maps.model.LatLng v6;
      com.google.android.gms.maps.model.LatLng v7;
      int v8;
      v1 = null;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      v5 = null;
      v6 = null;
      v7 = null;
      while ( p0.dataPosition() < v2 )
      {
        v8 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v8) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            break;
          case 2:
            v7 = (com.google.android.gms.maps.model.LatLng)com.google.android.gms.common.internal.safeparcel.a.a(p0, v8, (android.os.Parcelable.Creator)LatLng.CREATOR);
            break;
          case 3:
            v6 = (com.google.android.gms.maps.model.LatLng)com.google.android.gms.common.internal.safeparcel.a.a(p0, v8, (android.os.Parcelable.Creator)LatLng.CREATOR);
            break;
          case 4:
            v5 = (com.google.android.gms.maps.model.LatLng)com.google.android.gms.common.internal.safeparcel.a.a(p0, v8, (android.os.Parcelable.Creator)LatLng.CREATOR);
            break;
          case 5:
            v4 = (com.google.android.gms.maps.model.LatLng)com.google.android.gms.common.internal.safeparcel.a.a(p0, v8, (android.os.Parcelable.Creator)LatLng.CREATOR);
            break;
          case 6:
            v1 = (com.google.android.gms.maps.model.LatLngBounds)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                   v8,
                                                                   (android.os.Parcelable.Creator)LatLngBounds.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v8);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.maps.model.VisibleRegion(v3, v7, v6, v5, v4, v1);
    }

    private static com.google.android.gms.maps.model.VisibleRegion[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.maps.model.VisibleRegion[p0];
    }

    /* bridge */ public Object createFromParcel(android.os.Parcel p0)
    {
      return _typed_createFromParcel(p0);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.maps.model.VisibleRegion[p0];
    }

}

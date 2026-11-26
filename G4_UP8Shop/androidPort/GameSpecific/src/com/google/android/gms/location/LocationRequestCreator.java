// Decompiled from classes.dex (SourceFile: LocationRequestCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.location;

public class LocationRequestCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public LocationRequestCreator()
    {
      super();
    }

    static void a(com.google.android.gms.location.LocationRequest p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.e);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.f);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.g);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.h);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.i);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 6, p0.j);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.k);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.location.LocationRequest _typed_createFromParcel(
            android.os.Parcel p0)
    {
      boolean v1;
      int v2;
      int v3;
      long v4;
      long v5;
      long v6;
      int v7;
      float v8;
      int v9;
      int v10;
      v1 = false;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 102;
      v4 = 3600000;
      v5 = 600000;
      v6 = 0x7FFFFFFFFFFFFFFFL;
      v7 = 0x7FFFFFFF;
      v8 = 0.0f;
      v9 = 0;
      while ( p0.dataPosition() < v2 )
      {
        v10 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v10) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v10);
            break;
          case 2:
            v4 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v10);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v10);
            break;
          case 4:
            v1 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v10);
            break;
          case 5:
            v6 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v10);
            break;
          case 6:
            v7 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v10);
            break;
          case 7:
            v8 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v10);
            break;
          case 1000:
            v9 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v10);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v10);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.location.LocationRequest(v9, v3, v4, v5, v1, v6, v7, v8);
    }

    private static com.google.android.gms.location.LocationRequest[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.location.LocationRequest[p0];
    }

    /* bridge */ public Object createFromParcel(android.os.Parcel p0)
    {
      return _typed_createFromParcel(p0);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.location.LocationRequest[p0];
    }

}

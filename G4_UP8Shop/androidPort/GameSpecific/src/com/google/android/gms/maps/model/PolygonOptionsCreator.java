// Decompiled from classes.dex (SourceFile: PolygonOptionsCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

public class PolygonOptionsCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public PolygonOptionsCreator()
    {
      super();
    }

    static void a(com.google.android.gms.maps.model.PolygonOptions p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.b(p1, 2, p0.c(), false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 3, p0.b(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.d());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 5, p0.e());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 6, p0.f());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.g());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.h());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 9, p0.i());
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.maps.model.PolygonOptions[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.maps.model.PolygonOptions[p0];
    }

    public final com.google.android.gms.maps.model.PolygonOptions a(android.os.Parcel p0)
    {
      float v2;
      boolean v3;
      int v4;
      java.util.ArrayList v5;
      java.util.List v6;
      boolean v7;
      int v8;
      int v9;
      float v10;
      int v11;
      int v12;
      v2 = 0.0f;
      v3 = false;
      v4 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v5 = null;
      v6 = new java.util.ArrayList();
      v7 = false;
      v8 = 0;
      v9 = 0;
      v10 = 0.0f;
      v11 = 0;
      while ( p0.dataPosition() < v4 )
      {
        v12 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v12) )
        {
          case 1:
            v11 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v12);
            break;
          case 2:
            v5 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v12, (android.os.Parcelable.Creator)LatLng.CREATOR);
            break;
          case 3:
            com.google.android.gms.common.internal.safeparcel.a.a(p0, v12, v6, this.getClass().getClassLoader());
            break;
          case 4:
            v10 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v12);
            break;
          case 5:
            v9 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v12);
            break;
          case 6:
            v8 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v12);
            break;
          case 7:
            v2 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v12);
            break;
          case 8:
            v7 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v12);
            break;
          case 9:
            v3 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v12);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v12);
            break;
        }
      }
      if ( p0.dataPosition() != v4 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v4, p0);
      return new com.google.android.gms.maps.model.PolygonOptions(v11, v5, v6, v10, v9, v8, v2, v7, v3);
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      return this.a(p0);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.maps.model.PolygonOptions[p0];
    }

}

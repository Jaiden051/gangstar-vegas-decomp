// Decompiled from classes.dex (SourceFile: TileCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

public class TileCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public TileCreator()
    {
      super();
    }

    static void a(com.google.android.gms.maps.model.Tile p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 2, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 3, p0.b);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.c, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.maps.model.Tile _typed_createFromParcel(android.os.Parcel p0)
    {
      int v1;
      int v2;
      byte[] v3;
      int v4;
      int v5;
      int v6;
      v1 = 0;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = null;
      v4 = 0;
      v5 = 0;
      while ( p0.dataPosition() < v2 )
      {
        v6 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v6) )
        {
          case 1:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          case 2:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          case 3:
            v1 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          case 4:
            v3 = com.google.android.gms.common.internal.safeparcel.a.r(p0, v6);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v6);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.maps.model.Tile(v5, v4, v1, v3);
    }

    private static com.google.android.gms.maps.model.Tile[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.maps.model.Tile[p0];
    }

    /* bridge */ public Object createFromParcel(android.os.Parcel p0)
    {
      return _typed_createFromParcel(p0);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.maps.model.Tile[p0];
    }

}

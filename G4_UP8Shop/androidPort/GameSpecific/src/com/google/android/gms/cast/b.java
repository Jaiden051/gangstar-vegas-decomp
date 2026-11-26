// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

import com.google.android.gms.common.images.WebImage;
public class b implements android.os.Parcelable.Creator {
    // Methods
    public b()
    {
      super();
    }

    private static com.google.android.gms.cast.CastDevice[] P(int p0)
    {
      return new com.google.android.gms.cast.CastDevice[p0];
    }

    static void a(com.google.android.gms.cast.CastDevice p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.b(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.a, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.c(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.d(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.e(), false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 7, p0.f());
      com.google.android.gms.common.internal.safeparcel.b.b(p1, 8, p0.g(), false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 9, p0.h());
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.cast.CastDevice s(android.os.Parcel p0)
    {
      int v1;
      java.util.ArrayList v2;
      int v3;
      int v4;
      String v5;
      String v6;
      String v7;
      String v8;
      String v9;
      int v10;
      int v11;
      v1 = 0;
      v2 = null;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = 0;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = null;
      v9 = null;
      v10 = 0;
      while ( p0.dataPosition() < v3 )
      {
        v11 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v11) )
        {
          case 1:
            v10 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v11);
            break;
          case 2:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v11);
            break;
          case 3:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v11);
            break;
          case 4:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v11);
            break;
          case 5:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v11);
            break;
          case 6:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v11);
            break;
          case 7:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v11);
            break;
          case 8:
            v2 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v11, WebImage.CREATOR);
            break;
          case 9:
            v1 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v11);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v11);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.cast.CastDevice(v10, v9, v8, v7, v6, v5, v4, v2, v1);
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      java.util.ArrayList v3;
      int v4;
      int v5;
      String v6;
      String v7;
      String v8;
      String v9;
      String v10;
      int v11;
      int v12;
      v2 = 0;
      v3 = null;
      v4 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v5 = 0;
      v6 = null;
      v7 = null;
      v8 = null;
      v9 = null;
      v10 = null;
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
            v10 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v12);
            break;
          case 3:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v12);
            break;
          case 4:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v12);
            break;
          case 5:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v12);
            break;
          case 6:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v12);
            break;
          case 7:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v12);
            break;
          case 8:
            v3 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v12, WebImage.CREATOR);
            break;
          case 9:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v12);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v12);
            break;
        }
      }
      if ( p0.dataPosition() != v4 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v4, p0);
      return new com.google.android.gms.cast.CastDevice(v11, v10, v9, v8, v7, v6, v5, v3, v2);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.cast.CastDevice[p0];
    }

}

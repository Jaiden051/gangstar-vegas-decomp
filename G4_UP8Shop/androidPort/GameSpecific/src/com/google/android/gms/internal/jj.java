// Decompiled from classes.dex (SourceFile: jj.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class jj implements android.os.Parcelable.Creator {
    // Methods
    public jj()
    {
      super();
    }

    static void a(com.google.android.gms.internal.ji p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 1, p0.f(), false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.g());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.b());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.c());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.d());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.e());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 7, p0.h());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 8, p0.i());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 9, p0.j());
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.internal.ji bt(android.os.Parcel p0)
    {
      int v1;
      int v2;
      String v3;
      int v4;
      short v5;
      double v6;
      double v7;
      float v8;
      long v9;
      int v10;
      int v11;
      int v12;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = 0;
      v3 = null;
      v4 = 0;
      v5 = 0;
      v6 = 0.0;
      v7 = 0.0;
      v8 = 0.0f;
      v9 = 0;
      v10 = 0;
      v11 = -1;
      while ( p0.dataPosition() < v1 )
      {
        v12 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v12) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v12);
            break;
          case 2:
            v9 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v12);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.f(p0, v12);
            break;
          case 4:
            v6 = com.google.android.gms.common.internal.safeparcel.a.m(p0, v12);
            break;
          case 5:
            v7 = com.google.android.gms.common.internal.safeparcel.a.m(p0, v12);
            break;
          case 6:
            v8 = com.google.android.gms.common.internal.safeparcel.a.l(p0, v12);
            break;
          case 7:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v12);
            break;
          case 8:
            v10 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v12);
            break;
          case 9:
            v11 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v12);
            break;
          case 1000:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v12);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v12);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.internal.ji(v2, v3, v4, v5, v6, v7, v8, v9, v10, v11);
    }

    private static com.google.android.gms.internal.ji[] cO(int p0)
    {
      return new com.google.android.gms.internal.ji[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      return bt(p0);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.ji[p0];
    }

}

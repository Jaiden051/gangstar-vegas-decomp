// Decompiled from classes.dex (SourceFile: dw.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class dw implements android.os.Parcelable.Creator {
    // Methods
    public dw()
    {
      super();
    }

    static void a(com.google.android.gms.internal.dv p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.b, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.c, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.d, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 5, p0.e);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.f, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.g);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.h);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 9, p0.i);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 10, p0.j, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 11, p0.k);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 12, p0.l);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 13, p0.m, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 14, p0.n);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 15, p0.o, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 19, p0.q, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 18, p0.p);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 21, p0.r, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.internal.dv i(android.os.Parcel p0)
    {
      int v1;
      int v2;
      String v3;
      String v4;
      java.util.ArrayList v5;
      int v6;
      java.util.ArrayList v7;
      long v8;
      boolean v9;
      long v10;
      java.util.ArrayList v11;
      long v12;
      int v13;
      String v14;
      long v15;
      String v16;
      boolean v17;
      String v18;
      String v19;
      int v20;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = 0;
      v3 = null;
      v4 = null;
      v5 = null;
      v6 = 0;
      v7 = null;
      v8 = 0;
      v9 = false;
      v10 = 0;
      v11 = null;
      v12 = 0;
      v13 = 0;
      v14 = null;
      v15 = 0;
      v16 = null;
      v17 = false;
      v18 = null;
      v19 = null;
      while ( p0.dataPosition() < v1 )
      {
        v20 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v20) )
        {
          case 1:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v20);
            break;
          case 2:
            v3 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v20);
            break;
          case 3:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v20);
            break;
          case 4:
            v5 = com.google.android.gms.common.internal.safeparcel.a.B(p0, v20);
            break;
          case 5:
            v6 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v20);
            break;
          case 6:
            v7 = com.google.android.gms.common.internal.safeparcel.a.B(p0, v20);
            break;
          case 7:
            v8 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v20);
            break;
          case 8:
            v9 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v20);
            break;
          case 9:
            v10 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v20);
            break;
          case 10:
            v11 = com.google.android.gms.common.internal.safeparcel.a.B(p0, v20);
            break;
          case 11:
            v12 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v20);
            break;
          case 12:
            v13 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v20);
            break;
          case 13:
            v14 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v20);
            break;
          case 14:
            v15 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v20);
            break;
          case 15:
            v16 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v20);
            break;
          case 18:
            v17 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v20);
            break;
          case 19:
            v18 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v20);
            break;
          case 21:
            v19 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v20);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v20);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.internal.dv(v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19);
    }

    private static com.google.android.gms.internal.dv[] n(int p0)
    {
      return new com.google.android.gms.internal.dv[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      return i(p0);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.dv[p0];
    }

}

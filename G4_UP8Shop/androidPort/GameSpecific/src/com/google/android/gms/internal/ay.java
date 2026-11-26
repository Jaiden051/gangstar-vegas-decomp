// Decompiled from classes.dex (SourceFile: ay.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class ay implements android.os.Parcelable.Creator {
    // Methods
    public ay()
    {
      super();
    }

    static void a(com.google.android.gms.internal.ax p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 2, p0.b);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 3, p0.c);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 4, p0.d);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 5, p0.e);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 6, p0.f);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 7, p0.g);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 8, p0.h);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 9, p0.i);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 10, p0.j, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 11, p0.k);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 12, p0.l, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 13, p0.m);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 14, p0.n);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 15, p0.o, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.internal.ax d(android.os.Parcel p0)
    {
      int v1;
      int v2;
      int v3;
      int v4;
      int v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      String v11;
      int v12;
      String v13;
      int v14;
      int v15;
      String v16;
      int v17;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = 0;
      v3 = 0;
      v4 = 0;
      v5 = 0;
      v6 = 0;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = null;
      v12 = 0;
      v13 = null;
      v14 = 0;
      v15 = 0;
      v16 = null;
      while ( p0.dataPosition() < v1 )
      {
        v17 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v17) )
        {
          case 1:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v17);
            break;
          case 2:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v17);
            break;
          case 3:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v17);
            break;
          case 4:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v17);
            break;
          case 5:
            v6 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v17);
            break;
          case 6:
            v7 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v17);
            break;
          case 7:
            v8 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v17);
            break;
          case 8:
            v9 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v17);
            break;
          case 9:
            v10 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v17);
            break;
          case 10:
            v11 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v17);
            break;
          case 11:
            v12 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v17);
            break;
          case 12:
            v13 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v17);
            break;
          case 13:
            v14 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v17);
            break;
          case 14:
            v15 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v17);
            break;
          case 15:
            v16 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v17);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v17);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.internal.ax(v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16);
    }

    private static com.google.android.gms.internal.ax[] f(int p0)
    {
      return new com.google.android.gms.internal.ax[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      int v3;
      int v4;
      int v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int v11;
      String v12;
      int v13;
      String v14;
      int v15;
      int v16;
      String v17;
      int v18;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = 0;
      v5 = 0;
      v6 = 0;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v12 = null;
      v13 = 0;
      v14 = null;
      v15 = 0;
      v16 = 0;
      v17 = null;
      while ( p0.dataPosition() < v2 )
      {
        v18 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v18) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v18);
            break;
          case 2:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v18);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v18);
            break;
          case 4:
            v6 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v18);
            break;
          case 5:
            v7 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v18);
            break;
          case 6:
            v8 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v18);
            break;
          case 7:
            v9 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v18);
            break;
          case 8:
            v10 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v18);
            break;
          case 9:
            v11 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v18);
            break;
          case 10:
            v12 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v18);
            break;
          case 11:
            v13 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v18);
            break;
          case 12:
            v14 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v18);
            break;
          case 13:
            v15 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v18);
            break;
          case 14:
            v16 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v18);
            break;
          case 15:
            v17 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v18);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v18);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.internal.ax(v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.ax[p0];
    }

}

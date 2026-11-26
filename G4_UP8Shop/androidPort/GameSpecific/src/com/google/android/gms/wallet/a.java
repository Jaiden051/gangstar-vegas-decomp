// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

public class a implements android.os.Parcelable.Creator {
    // Methods
    public a()
    {
      super();
    }

    static void a(com.google.android.gms.wallet.Address p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.a, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.b, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.c, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.d, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.e, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.f, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.g, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 9, p0.h, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 10, p0.i, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 11, p0.j);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 12, p0.k, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.wallet.Address bQ(android.os.Parcel p0)
    {
      boolean v1;
      String v2;
      int v3;
      String v4;
      String v5;
      String v6;
      String v7;
      String v8;
      String v9;
      String v10;
      String v11;
      String v12;
      int v13;
      int v14;
      v1 = false;
      v2 = null;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = null;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = null;
      v9 = null;
      v10 = null;
      v11 = null;
      v12 = null;
      v13 = 0;
      while ( p0.dataPosition() < v3 )
      {
        v14 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v14) )
        {
          case 1:
            v13 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v14);
            break;
          case 2:
            v12 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          case 3:
            v11 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          case 4:
            v10 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          case 5:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          case 6:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          case 7:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          case 8:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          case 9:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          case 10:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          case 11:
            v1 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v14);
            break;
          case 12:
            v2 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v14);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.wallet.Address(v13, v12, v11, v10, v9, v8, v7, v6, v5, v4, v1, v2);
    }

    private static com.google.android.gms.wallet.Address[] dw(int p0)
    {
      return new com.google.android.gms.wallet.Address[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      int v3;
      String v4;
      String v5;
      String v6;
      String v7;
      String v8;
      String v9;
      String v10;
      String v11;
      String v12;
      boolean v13;
      String v14;
      int v15;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = null;
      v9 = null;
      v10 = null;
      v11 = null;
      v12 = null;
      v13 = false;
      v14 = null;
      while ( p0.dataPosition() < v2 )
      {
        v15 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v15) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v15);
            break;
          case 2:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          case 4:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          case 5:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          case 6:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          case 7:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          case 8:
            v10 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          case 9:
            v11 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          case 10:
            v12 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          case 11:
            v13 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v15);
            break;
          case 12:
            v14 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v15);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.wallet.Address(v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.wallet.Address[p0];
    }

}

// Decompiled from classes.dex (SourceFile: j.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

import com.google.android.gms.internal.ih;
import com.google.android.gms.maps.model.LatLng;
public class j implements android.os.Parcelable.Creator {
    // Methods
    public j()
    {
      super();
    }

    static void a(com.google.android.gms.wallet.LoyaltyWalletObject p0, android.os.Parcel p1, int p2)
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
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 11, p0.j, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 12, p0.k);
      com.google.android.gms.common.internal.safeparcel.b.b(p1, 13, p0.l, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 14, (android.os.Parcelable)p0.m, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.b(p1, 15, p0.n, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 17, p0.p, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 16, p0.o, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 19, p0.r);
      com.google.android.gms.common.internal.safeparcel.b.b(p1, 18, p0.q, false);
      com.google.android.gms.common.internal.safeparcel.b.b(p1, 21, p0.t, false);
      com.google.android.gms.common.internal.safeparcel.b.b(p1, 20, p0.s, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 23, (android.os.Parcelable)p0.v, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.b(p1, 22, p0.u, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.wallet.LoyaltyWalletObject bY(android.os.Parcel p0)
    {
      int v1;
      int v2;
      String v3;
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
      java.util.ArrayList v14;
      com.google.android.gms.wallet.wobs.l v15;
      java.util.ArrayList v16;
      String v17;
      String v18;
      java.util.ArrayList v19;
      boolean v20;
      java.util.ArrayList v21;
      java.util.ArrayList v22;
      java.util.ArrayList v23;
      com.google.android.gms.wallet.wobs.f v24;
      int v25;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = 0;
      v3 = null;
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
      v14 = ih.fV();
      v15 = null;
      v16 = ih.fV();
      v17 = null;
      v18 = null;
      v19 = ih.fV();
      v20 = false;
      v21 = ih.fV();
      v22 = ih.fV();
      v23 = ih.fV();
      v24 = null;
      while ( p0.dataPosition() < v1 )
      {
        v25 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v25) )
        {
          case 1:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v25);
            break;
          case 2:
            v3 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v25);
            break;
          case 3:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v25);
            break;
          case 4:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v25);
            break;
          case 5:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v25);
            break;
          case 6:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v25);
            break;
          case 7:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v25);
            break;
          case 8:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v25);
            break;
          case 9:
            v10 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v25);
            break;
          case 10:
            v11 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v25);
            break;
          case 11:
            v12 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v25);
            break;
          case 12:
            v13 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v25);
            break;
          case 13:
            v14 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v25, com.google.android.gms.wallet.wobs.p.CREATOR);
            break;
          case 14:
            v15 = (com.google.android.gms.wallet.wobs.l)com.google.android.gms.common.internal.safeparcel.a.a(p0, v25, com.google.android.gms.wallet.wobs.l.CREATOR);
            break;
          case 15:
            v16 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v25, (android.os.Parcelable.Creator)LatLng.CREATOR);
            break;
          case 16:
            v17 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v25);
            break;
          case 17:
            v18 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v25);
            break;
          case 18:
            v19 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v25, com.google.android.gms.wallet.wobs.d.CREATOR);
            break;
          case 19:
            v20 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v25);
            break;
          case 20:
            v21 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v25, com.google.android.gms.wallet.wobs.n.CREATOR);
            break;
          case 21:
            v22 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v25, com.google.android.gms.wallet.wobs.j.CREATOR);
            break;
          case 22:
            v23 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v25, com.google.android.gms.wallet.wobs.n.CREATOR);
            break;
          case 23:
            v24 = (com.google.android.gms.wallet.wobs.f)com.google.android.gms.common.internal.safeparcel.a.a(p0, v25, com.google.android.gms.wallet.wobs.f.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v25);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.wallet.LoyaltyWalletObject(v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24);
    }

    private static com.google.android.gms.wallet.LoyaltyWalletObject[] dE(int p0)
    {
      return new com.google.android.gms.wallet.LoyaltyWalletObject[p0];
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
      String v13;
      int v14;
      java.util.ArrayList v15;
      com.google.android.gms.wallet.wobs.l v16;
      java.util.ArrayList v17;
      String v18;
      String v19;
      java.util.ArrayList v20;
      boolean v21;
      java.util.ArrayList v22;
      java.util.ArrayList v23;
      java.util.ArrayList v24;
      com.google.android.gms.wallet.wobs.f v25;
      int v26;
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
      v13 = null;
      v14 = 0;
      v15 = ih.fV();
      v16 = null;
      v17 = ih.fV();
      v18 = null;
      v19 = null;
      v20 = ih.fV();
      v21 = false;
      v22 = ih.fV();
      v23 = ih.fV();
      v24 = ih.fV();
      v25 = null;
      while ( p0.dataPosition() < v2 )
      {
        v26 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v26) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v26);
            break;
          case 2:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v26);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v26);
            break;
          case 4:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v26);
            break;
          case 5:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v26);
            break;
          case 6:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v26);
            break;
          case 7:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v26);
            break;
          case 8:
            v10 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v26);
            break;
          case 9:
            v11 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v26);
            break;
          case 10:
            v12 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v26);
            break;
          case 11:
            v13 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v26);
            break;
          case 12:
            v14 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v26);
            break;
          case 13:
            v15 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v26, com.google.android.gms.wallet.wobs.p.CREATOR);
            break;
          case 14:
            v16 = (com.google.android.gms.wallet.wobs.l)com.google.android.gms.common.internal.safeparcel.a.a(p0, v26, com.google.android.gms.wallet.wobs.l.CREATOR);
            break;
          case 15:
            v17 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v26, (android.os.Parcelable.Creator)LatLng.CREATOR);
            break;
          case 16:
            v18 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v26);
            break;
          case 17:
            v19 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v26);
            break;
          case 18:
            v20 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v26, com.google.android.gms.wallet.wobs.d.CREATOR);
            break;
          case 19:
            v21 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v26);
            break;
          case 20:
            v22 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v26, com.google.android.gms.wallet.wobs.n.CREATOR);
            break;
          case 21:
            v23 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v26, com.google.android.gms.wallet.wobs.j.CREATOR);
            break;
          case 22:
            v24 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v26, com.google.android.gms.wallet.wobs.n.CREATOR);
            break;
          case 23:
            v25 = (com.google.android.gms.wallet.wobs.f)com.google.android.gms.common.internal.safeparcel.a.a(p0, v26, com.google.android.gms.wallet.wobs.f.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v26);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.wallet.LoyaltyWalletObject(v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.wallet.LoyaltyWalletObject[p0];
    }

}

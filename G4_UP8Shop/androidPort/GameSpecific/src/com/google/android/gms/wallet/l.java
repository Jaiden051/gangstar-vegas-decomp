// Decompiled from classes.dex (SourceFile: l.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

public class l implements android.os.Parcelable.Creator {
    // Methods
    public l()
    {
      super();
    }

    static void a(com.google.android.gms.wallet.MaskedWalletRequest p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.a, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.b);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.c);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.d);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.e, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.f, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.g, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 9, (android.os.Parcelable)p0.h, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 10, p0.i);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 11, p0.j);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 12, p0.k, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 13, p0.l);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 14, p0.m);
      com.google.android.gms.common.internal.safeparcel.b.b(p1, 15, p0.n, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.wallet.MaskedWalletRequest ca(android.os.Parcel p0)
    {
      int v1;
      int v2;
      String v3;
      boolean v4;
      boolean v5;
      boolean v6;
      String v7;
      String v8;
      String v9;
      com.google.android.gms.wallet.Cart v10;
      boolean v11;
      boolean v12;
      com.google.android.gms.wallet.CountrySpecification[] v13;
      boolean v14;
      boolean v15;
      java.util.ArrayList v16;
      int v17;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = 0;
      v3 = null;
      v4 = false;
      v5 = false;
      v6 = false;
      v7 = null;
      v8 = null;
      v9 = null;
      v10 = null;
      v11 = false;
      v12 = false;
      v13 = null;
      v14 = true;
      v15 = true;
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
            v3 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v17);
            break;
          case 3:
            v4 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v17);
            break;
          case 4:
            v5 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v17);
            break;
          case 5:
            v6 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v17);
            break;
          case 6:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v17);
            break;
          case 7:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v17);
            break;
          case 8:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v17);
            break;
          case 9:
            v10 = (com.google.android.gms.wallet.Cart)com.google.android.gms.common.internal.safeparcel.a.a(p0, v17, Cart.CREATOR);
            break;
          case 10:
            v11 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v17);
            break;
          case 11:
            v12 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v17);
            break;
          case 12:
            v13 = (com.google.android.gms.wallet.CountrySpecification[])com.google.android.gms.common.internal.safeparcel.a.b(p0, v17, CountrySpecification.CREATOR);
            break;
          case 13:
            v14 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v17);
            break;
          case 14:
            v15 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v17);
            break;
          case 15:
            v16 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v17, CountrySpecification.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v17);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.wallet.MaskedWalletRequest(v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16);
    }

    private static com.google.android.gms.wallet.MaskedWalletRequest[] dG(int p0)
    {
      return new com.google.android.gms.wallet.MaskedWalletRequest[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      int v3;
      String v4;
      boolean v5;
      boolean v6;
      boolean v7;
      String v8;
      String v9;
      String v10;
      com.google.android.gms.wallet.Cart v11;
      boolean v12;
      boolean v13;
      com.google.android.gms.wallet.CountrySpecification[] v14;
      boolean v15;
      boolean v16;
      java.util.ArrayList v17;
      int v18;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      v5 = false;
      v6 = false;
      v7 = false;
      v8 = null;
      v9 = null;
      v10 = null;
      v11 = null;
      v12 = false;
      v13 = false;
      v14 = null;
      v15 = true;
      v16 = true;
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
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v18);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v18);
            break;
          case 4:
            v6 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v18);
            break;
          case 5:
            v7 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v18);
            break;
          case 6:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v18);
            break;
          case 7:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v18);
            break;
          case 8:
            v10 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v18);
            break;
          case 9:
            v11 = (com.google.android.gms.wallet.Cart)com.google.android.gms.common.internal.safeparcel.a.a(p0, v18, Cart.CREATOR);
            break;
          case 10:
            v12 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v18);
            break;
          case 11:
            v13 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v18);
            break;
          case 12:
            v14 = (com.google.android.gms.wallet.CountrySpecification[])com.google.android.gms.common.internal.safeparcel.a.b(p0, v18, CountrySpecification.CREATOR);
            break;
          case 13:
            v15 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v18);
            break;
          case 14:
            v16 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v18);
            break;
          case 15:
            v17 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v18, CountrySpecification.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v18);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.wallet.MaskedWalletRequest(v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.wallet.MaskedWalletRequest[p0];
    }

}

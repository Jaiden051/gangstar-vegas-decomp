// Decompiled from classes.dex (SourceFile: f.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

import com.google.android.gms.identity.intents.model.UserAddress;
public class f implements android.os.Parcelable.Creator {
    // Methods
    public f()
    {
      super();
    }

    static void a(com.google.android.gms.wallet.FullWallet p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.a, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.b, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, (android.os.Parcelable)p0.c, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.d, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, (android.os.Parcelable)p0.e, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, (android.os.Parcelable)p0.f, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.g, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 9, (android.os.Parcelable)p0.h, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 10, (android.os.Parcelable)p0.i, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 11, p0.j, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.wallet.FullWallet bU(android.os.Parcel p0)
    {
      com.google.android.gms.wallet.InstrumentInfo[] v1;
      int v2;
      int v3;
      com.google.android.gms.identity.intents.model.UserAddress v4;
      com.google.android.gms.identity.intents.model.UserAddress v5;
      String[] v6;
      com.google.android.gms.wallet.Address v7;
      com.google.android.gms.wallet.Address v8;
      String v9;
      com.google.android.gms.wallet.ProxyCard v10;
      String v11;
      String v12;
      int v13;
      v1 = null;
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
      while ( p0.dataPosition() < v2 )
      {
        v13 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v13) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v13);
            break;
          case 2:
            v12 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v13);
            break;
          case 3:
            v11 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v13);
            break;
          case 4:
            v10 = (com.google.android.gms.wallet.ProxyCard)com.google.android.gms.common.internal.safeparcel.a.a(p0, v13, ProxyCard.CREATOR);
            break;
          case 5:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v13);
            break;
          case 6:
            v8 = (com.google.android.gms.wallet.Address)com.google.android.gms.common.internal.safeparcel.a.a(p0, v13, Address.CREATOR);
            break;
          case 7:
            v7 = (com.google.android.gms.wallet.Address)com.google.android.gms.common.internal.safeparcel.a.a(p0, v13, Address.CREATOR);
            break;
          case 8:
            v6 = com.google.android.gms.common.internal.safeparcel.a.A(p0, v13);
            break;
          case 9:
            v5 = (com.google.android.gms.identity.intents.model.UserAddress)com.google.android.gms.common.internal.safeparcel.a.a(p0, v13, UserAddress.CREATOR);
            break;
          case 10:
            v4 = (com.google.android.gms.identity.intents.model.UserAddress)com.google.android.gms.common.internal.safeparcel.a.a(p0, v13, UserAddress.CREATOR);
            break;
          case 11:
            v1 = (com.google.android.gms.wallet.InstrumentInfo[])com.google.android.gms.common.internal.safeparcel.a.b(p0, v13, InstrumentInfo.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v13);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.wallet.FullWallet(v3, v12, v11, v10, v9, v8, v7, v6, v5, v4, v1);
    }

    private static com.google.android.gms.wallet.FullWallet[] dA(int p0)
    {
      return new com.google.android.gms.wallet.FullWallet[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      com.google.android.gms.wallet.InstrumentInfo[] v2;
      int v3;
      int v4;
      com.google.android.gms.identity.intents.model.UserAddress v5;
      com.google.android.gms.identity.intents.model.UserAddress v6;
      String[] v7;
      com.google.android.gms.wallet.Address v8;
      com.google.android.gms.wallet.Address v9;
      String v10;
      com.google.android.gms.wallet.ProxyCard v11;
      String v12;
      String v13;
      int v14;
      v2 = null;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = 0;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = null;
      v9 = null;
      v10 = null;
      v11 = null;
      v12 = null;
      v13 = null;
      while ( p0.dataPosition() < v3 )
      {
        v14 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v14) )
        {
          case 1:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v14);
            break;
          case 2:
            v13 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          case 3:
            v12 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          case 4:
            v11 = (com.google.android.gms.wallet.ProxyCard)com.google.android.gms.common.internal.safeparcel.a.a(p0, v14, ProxyCard.CREATOR);
            break;
          case 5:
            v10 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          case 6:
            v9 = (com.google.android.gms.wallet.Address)com.google.android.gms.common.internal.safeparcel.a.a(p0, v14, Address.CREATOR);
            break;
          case 7:
            v8 = (com.google.android.gms.wallet.Address)com.google.android.gms.common.internal.safeparcel.a.a(p0, v14, Address.CREATOR);
            break;
          case 8:
            v7 = com.google.android.gms.common.internal.safeparcel.a.A(p0, v14);
            break;
          case 9:
            v6 = (com.google.android.gms.identity.intents.model.UserAddress)com.google.android.gms.common.internal.safeparcel.a.a(p0, v14, UserAddress.CREATOR);
            break;
          case 10:
            v5 = (com.google.android.gms.identity.intents.model.UserAddress)com.google.android.gms.common.internal.safeparcel.a.a(p0, v14, UserAddress.CREATOR);
            break;
          case 11:
            v2 = (com.google.android.gms.wallet.InstrumentInfo[])com.google.android.gms.common.internal.safeparcel.a.b(p0, v14, InstrumentInfo.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v14);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.wallet.FullWallet(v4, v13, v12, v11, v10, v9, v8, v7, v6, v5, v2);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.wallet.FullWallet[p0];
    }

}

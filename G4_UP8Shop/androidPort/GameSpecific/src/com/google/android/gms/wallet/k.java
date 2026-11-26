// Decompiled from classes.dex (SourceFile: k.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet;

import com.google.android.gms.identity.intents.model.UserAddress;
public class k implements android.os.Parcelable.Creator {
    // Methods
    public k()
    {
      super();
    }

    static void a(com.google.android.gms.wallet.MaskedWallet p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.a, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.b, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.c, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.d, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, (android.os.Parcelable)p0.e, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, (android.os.Parcelable)p0.f, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.g, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 9, p0.h, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 10, (android.os.Parcelable)p0.i, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 11, (android.os.Parcelable)p0.j, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 12, p0.k, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.wallet.MaskedWallet bZ(android.os.Parcel p0)
    {
      com.google.android.gms.wallet.InstrumentInfo[] v1;
      int v2;
      int v3;
      com.google.android.gms.identity.intents.model.UserAddress v4;
      com.google.android.gms.identity.intents.model.UserAddress v5;
      com.google.android.gms.wallet.OfferWalletObject[] v6;
      com.google.android.gms.wallet.LoyaltyWalletObject[] v7;
      com.google.android.gms.wallet.Address v8;
      com.google.android.gms.wallet.Address v9;
      String v10;
      String[] v11;
      String v12;
      String v13;
      int v14;
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
      v13 = null;
      while ( p0.dataPosition() < v2 )
      {
        v14 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v14) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v14);
            break;
          case 2:
            v13 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          case 3:
            v12 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          case 4:
            v11 = com.google.android.gms.common.internal.safeparcel.a.A(p0, v14);
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
            v7 = (com.google.android.gms.wallet.LoyaltyWalletObject[])com.google.android.gms.common.internal.safeparcel.a.b(p0, v14, LoyaltyWalletObject.CREATOR);
            break;
          case 9:
            v6 = (com.google.android.gms.wallet.OfferWalletObject[])com.google.android.gms.common.internal.safeparcel.a.b(p0, v14, OfferWalletObject.CREATOR);
            break;
          case 10:
            v5 = (com.google.android.gms.identity.intents.model.UserAddress)com.google.android.gms.common.internal.safeparcel.a.a(p0, v14, UserAddress.CREATOR);
            break;
          case 11:
            v4 = (com.google.android.gms.identity.intents.model.UserAddress)com.google.android.gms.common.internal.safeparcel.a.a(p0, v14, UserAddress.CREATOR);
            break;
          case 12:
            v1 = (com.google.android.gms.wallet.InstrumentInfo[])com.google.android.gms.common.internal.safeparcel.a.b(p0, v14, InstrumentInfo.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v14);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.wallet.MaskedWallet(v3, v13, v12, v11, v10, v9, v8, v7, v6, v5, v4, v1);
    }

    private static com.google.android.gms.wallet.MaskedWallet[] dF(int p0)
    {
      return new com.google.android.gms.wallet.MaskedWallet[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      int v3;
      String v4;
      String v5;
      String[] v6;
      String v7;
      com.google.android.gms.wallet.Address v8;
      com.google.android.gms.wallet.Address v9;
      com.google.android.gms.wallet.LoyaltyWalletObject[] v10;
      com.google.android.gms.wallet.OfferWalletObject[] v11;
      com.google.android.gms.identity.intents.model.UserAddress v12;
      com.google.android.gms.identity.intents.model.UserAddress v13;
      com.google.android.gms.wallet.InstrumentInfo[] v14;
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
      v13 = null;
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
            v6 = com.google.android.gms.common.internal.safeparcel.a.A(p0, v15);
            break;
          case 5:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          case 6:
            v8 = (com.google.android.gms.wallet.Address)com.google.android.gms.common.internal.safeparcel.a.a(p0, v15, Address.CREATOR);
            break;
          case 7:
            v9 = (com.google.android.gms.wallet.Address)com.google.android.gms.common.internal.safeparcel.a.a(p0, v15, Address.CREATOR);
            break;
          case 8:
            v10 = (com.google.android.gms.wallet.LoyaltyWalletObject[])com.google.android.gms.common.internal.safeparcel.a.b(p0, v15, LoyaltyWalletObject.CREATOR);
            break;
          case 9:
            v11 = (com.google.android.gms.wallet.OfferWalletObject[])com.google.android.gms.common.internal.safeparcel.a.b(p0, v15, OfferWalletObject.CREATOR);
            break;
          case 10:
            v12 = (com.google.android.gms.identity.intents.model.UserAddress)com.google.android.gms.common.internal.safeparcel.a.a(p0, v15, UserAddress.CREATOR);
            break;
          case 11:
            v13 = (com.google.android.gms.identity.intents.model.UserAddress)com.google.android.gms.common.internal.safeparcel.a.a(p0, v15, UserAddress.CREATOR);
            break;
          case 12:
            v14 = (com.google.android.gms.wallet.InstrumentInfo[])com.google.android.gms.common.internal.safeparcel.a.b(p0, v15, InstrumentInfo.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v15);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.wallet.MaskedWallet(v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.wallet.MaskedWallet[p0];
    }

}

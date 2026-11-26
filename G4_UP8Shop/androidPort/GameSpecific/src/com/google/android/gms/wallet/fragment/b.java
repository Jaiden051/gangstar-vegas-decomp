// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet.fragment;

public class b implements android.os.Parcelable.Creator {
    // Methods
    public b()
    {
      super();
    }

    static void a(com.google.android.gms.wallet.fragment.WalletFragmentOptions p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 2, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 3, p0.b());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, (android.os.Parcelable)p0.c(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 5, p0.d());
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.wallet.fragment.WalletFragmentOptions ch(android.os.Parcel p0)
    {
      int v1;
      int v2;
      int v3;
      com.google.android.gms.wallet.fragment.WalletFragmentStyle v4;
      int v5;
      int v6;
      int v7;
      v1 = 1;
      v2 = 0;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = null;
      v5 = 1;
      v6 = 0;
      while ( p0.dataPosition() < v3 )
      {
        v7 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v7) )
        {
          case 1:
            v6 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          case 2:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          case 3:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          case 4:
            v4 = (com.google.android.gms.wallet.fragment.WalletFragmentStyle)com.google.android.gms.common.internal.safeparcel.a.a(p0, v7, WalletFragmentStyle.CREATOR);
            break;
          case 5:
            v1 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v7);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.wallet.fragment.WalletFragmentOptions(v6, v5, v2, v4, v1);
    }

    private static com.google.android.gms.wallet.fragment.WalletFragmentOptions[] dO(int p0)
    {
      return new com.google.android.gms.wallet.fragment.WalletFragmentOptions[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      int v3;
      int v4;
      com.google.android.gms.wallet.fragment.WalletFragmentStyle v5;
      int v6;
      int v7;
      int v8;
      v2 = 1;
      v3 = 0;
      v4 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v5 = null;
      v6 = 1;
      v7 = 0;
      while ( p0.dataPosition() < v4 )
      {
        v8 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v8) )
        {
          case 1:
            v7 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            break;
          case 2:
            v6 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            break;
          case 3:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            break;
          case 4:
            v5 = (com.google.android.gms.wallet.fragment.WalletFragmentStyle)com.google.android.gms.common.internal.safeparcel.a.a(p0, v8, WalletFragmentStyle.CREATOR);
            break;
          case 5:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v8);
            break;
        }
      }
      if ( p0.dataPosition() != v4 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v4, p0);
      return new com.google.android.gms.wallet.fragment.WalletFragmentOptions(v7, v6, v3, v5, v2);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.wallet.fragment.WalletFragmentOptions[p0];
    }

}

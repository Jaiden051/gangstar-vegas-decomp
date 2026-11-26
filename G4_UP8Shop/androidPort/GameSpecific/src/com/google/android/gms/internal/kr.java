// Decompiled from classes.dex (SourceFile: kr.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class kr implements android.os.Parcelable.Creator {
    // Methods
    public kr()
    {
      super();
    }

    static void a(com.google.android.gms.internal.kq p0, android.os.Parcel p1, int p2)
    {
      int v3;
      java.util.Set v4;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      v4 = p0.d();
      if ( v4.contains(Integer.valueOf(1)) )
        com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.e());
      if ( v4.contains(Integer.valueOf(2)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.f(), true);
      if ( v4.contains(Integer.valueOf(4)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, (android.os.Parcelable)p0.k(), p2, true);
      if ( v4.contains(Integer.valueOf(5)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.m(), true);
      if ( v4.contains(Integer.valueOf(6)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, (android.os.Parcelable)p0.p(), p2, true);
      if ( v4.contains(Integer.valueOf(7)) )
        com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.r(), true);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.internal.kq bF(android.os.Parcel p0)
    {
      String v1;
      int v2;
      java.util.Set v3;
      int v4;
      com.google.android.gms.internal.ko v5;
      String v6;
      com.google.android.gms.internal.ko v7;
      String v8;
      int v9;
      com.google.android.gms.internal.ko v10;
      com.google.android.gms.internal.ko v11;
      v1 = null;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = new java.util.HashSet();
      v4 = 0;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = null;
      while ( p0.dataPosition() < v2 )
      {
        v9 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v9) )
        {
          case 1:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v9);
            v3.add(Integer.valueOf(1));
            break;
          case 2:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v9);
            v3.add(Integer.valueOf(2));
            break;
          case 4:
            v10 = (com.google.android.gms.internal.ko)com.google.android.gms.common.internal.safeparcel.a.a(p0, v9, (android.os.Parcelable.Creator)ko.CREATOR);
            v3.add(Integer.valueOf(4));
            v7 = v10;
            break;
          case 5:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v9);
            v3.add(Integer.valueOf(5));
            break;
          case 6:
            v11 = (com.google.android.gms.internal.ko)com.google.android.gms.common.internal.safeparcel.a.a(p0, v9, (android.os.Parcelable.Creator)ko.CREATOR);
            v3.add(Integer.valueOf(6));
            v5 = v11;
            break;
          case 7:
            v1 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v9);
            v3.add(Integer.valueOf(7));
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v9);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.internal.kq(v3, v4, v8, v7, v6, v5, v1);
    }

    private static com.google.android.gms.internal.kq[] dc(int p0)
    {
      return new com.google.android.gms.internal.kq[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      return bF(p0);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.kq[p0];
    }

}

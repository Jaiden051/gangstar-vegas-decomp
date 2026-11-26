// Decompiled from classes.dex (SourceFile: ag.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public class ag implements android.os.Parcelable.Creator {
    // Methods
    public ag()
    {
      super();
    }

    static void a(com.google.android.gms.wearable.internal.af p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 2, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.b(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.c(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.d(), false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.wearable.internal.af cE(android.os.Parcel p0)
    {
      int v1;
      String v2;
      int v3;
      byte[] v4;
      String v5;
      int v6;
      int v7;
      v1 = 0;
      v2 = null;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = null;
      v5 = null;
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
            v1 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v7);
            break;
          case 4:
            v4 = com.google.android.gms.common.internal.safeparcel.a.r(p0, v7);
            break;
          case 5:
            v2 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v7);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v7);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.wearable.internal.af(v6, v1, v5, v4, v2);
    }

    private static com.google.android.gms.wearable.internal.af[] en(int p0)
    {
      return new com.google.android.gms.wearable.internal.af[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      String v3;
      int v4;
      byte[] v5;
      String v6;
      int v7;
      int v8;
      v2 = 0;
      v3 = null;
      v4 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v5 = null;
      v6 = null;
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
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            break;
          case 3:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v8);
            break;
          case 4:
            v5 = com.google.android.gms.common.internal.safeparcel.a.r(p0, v8);
            break;
          case 5:
            v3 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v8);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v8);
            break;
        }
      }
      if ( p0.dataPosition() != v4 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v4, p0);
      return new com.google.android.gms.wearable.internal.af(v7, v2, v6, v5, v3);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.wearable.internal.af[p0];
    }

}

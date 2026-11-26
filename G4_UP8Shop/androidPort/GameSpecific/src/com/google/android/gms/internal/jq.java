// Decompiled from classes.dex (SourceFile: jq.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class jq implements android.os.Parcelable.Creator {
    // Methods
    public jq()
    {
      super();
    }

    static void a(com.google.android.gms.internal.jp p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.a(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.b(), false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.internal.jp bw(android.os.Parcel p0)
    {
      String v1;
      int v2;
      int v3;
      String v4;
      int v5;
      v1 = null;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      while ( p0.dataPosition() < v2 )
      {
        v5 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v5) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v5);
            break;
          case 2:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v5);
            break;
          case 3:
            v1 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v5);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v5);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.internal.jp(v3, v4, v1);
    }

    private static com.google.android.gms.internal.jp[] cR(int p0)
    {
      return new com.google.android.gms.internal.jp[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      return bw(p0);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.jp[p0];
    }

}

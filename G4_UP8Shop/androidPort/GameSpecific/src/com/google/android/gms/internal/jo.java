// Decompiled from classes.dex (SourceFile: jo.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class jo implements android.os.Parcelable.Creator {
    // Methods
    public jo()
    {
      super();
    }

    static void a(com.google.android.gms.internal.jn p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.b(p1, 1, p0.b, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.a(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.b());
      com.google.android.gms.common.internal.safeparcel.b.b(p1, 4, p0.c, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.c(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.d, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.internal.jn bv(android.os.Parcel p0)
    {
      boolean v1;
      java.util.ArrayList v2;
      int v3;
      String v4;
      java.util.ArrayList v5;
      String v6;
      java.util.ArrayList v7;
      int v8;
      int v9;
      v1 = false;
      v2 = null;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = null;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = 0;
      while ( p0.dataPosition() < v3 )
      {
        v9 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v9) )
        {
          case 1:
            v7 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v9, (android.os.Parcelable.Creator)jt.CREATOR);
            break;
          case 2:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v9);
            break;
          case 3:
            v1 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v9);
            break;
          case 4:
            v5 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v9, (android.os.Parcelable.Creator)jx.CREATOR);
            break;
          case 5:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v9);
            break;
          case 6:
            v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0, v9);
            break;
          case 1000:
            v8 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v9);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v9);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.internal.jn(v8, v7, v6, v1, v5, v4, v2);
    }

    private static com.google.android.gms.internal.jn[] cQ(int p0)
    {
      return new com.google.android.gms.internal.jn[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      return bv(p0);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.jn[p0];
    }

}

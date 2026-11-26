// Decompiled from classes.dex (SourceFile: an.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class an implements android.os.Parcelable.Creator {
    // Methods
    public an()
    {
      super();
    }

    static void a(com.google.android.gms.internal.am p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.b, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 3, p0.c);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 4, p0.d);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.e);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 6, p0.f);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 7, p0.g);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.h, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.internal.am c(android.os.Parcel p0)
    {
      com.google.android.gms.internal.am[] v1;
      int v2;
      int v3;
      int v4;
      boolean v5;
      int v6;
      int v7;
      String v8;
      int v9;
      int v10;
      v1 = null;
      v2 = 0;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = 0;
      v5 = false;
      v6 = 0;
      v7 = 0;
      v8 = null;
      v9 = 0;
      while ( p0.dataPosition() < v3 )
      {
        v10 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v10) )
        {
          case 1:
            v9 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v10);
            break;
          case 2:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v10);
            break;
          case 3:
            v7 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v10);
            break;
          case 4:
            v6 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v10);
            break;
          case 5:
            v5 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v10);
            break;
          case 6:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v10);
            break;
          case 7:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v10);
            break;
          case 8:
            v1 = (com.google.android.gms.internal.am[])com.google.android.gms.common.internal.safeparcel.a.b(p0, v10, (android.os.Parcelable.Creator)am.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v10);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.internal.am(v9, v8, v7, v6, v5, v4, v2, v1);
    }

    private static com.google.android.gms.internal.am[] d(int p0)
    {
      return new com.google.android.gms.internal.am[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      return c(p0);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.am[p0];
    }

}

// Decompiled from classes.dex (SourceFile: ak.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.location.Location;
public class ak implements android.os.Parcelable.Creator {
    // Methods
    public ak()
    {
      super();
    }

    static void a(com.google.android.gms.internal.aj p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.b);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.c, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 4, p0.d);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.e, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.f);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 7, p0.g);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.h);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 9, p0.i, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 10, (android.os.Parcelable)p0.j, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 11, p0.k, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 12, p0.l, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 13, p0.m, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.internal.aj b(android.os.Parcel p0)
    {
      int v1;
      int v2;
      long v3;
      android.os.Bundle v4;
      int v5;
      java.util.ArrayList v6;
      boolean v7;
      int v8;
      boolean v9;
      String v10;
      com.google.android.gms.internal.ax v11;
      android.location.Location v12;
      String v13;
      android.os.Bundle v14;
      int v15;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = 0;
      v3 = 0;
      v4 = null;
      v5 = 0;
      v6 = null;
      v7 = false;
      v8 = 0;
      v9 = false;
      v10 = null;
      v11 = null;
      v12 = null;
      v13 = null;
      v14 = null;
      while ( p0.dataPosition() < v1 )
      {
        v15 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v15) )
        {
          case 1:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v15);
            break;
          case 2:
            v3 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v15);
            break;
          case 3:
            v4 = com.google.android.gms.common.internal.safeparcel.a.q(p0, v15);
            break;
          case 4:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v15);
            break;
          case 5:
            v6 = com.google.android.gms.common.internal.safeparcel.a.B(p0, v15);
            break;
          case 6:
            v7 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v15);
            break;
          case 7:
            v8 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v15);
            break;
          case 8:
            v9 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v15);
            break;
          case 9:
            v10 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          case 10:
            v11 = (com.google.android.gms.internal.ax)com.google.android.gms.common.internal.safeparcel.a.a(p0, v15, (android.os.Parcelable.Creator)ax.CREATOR);
            break;
          case 11:
            v12 = (android.location.Location)com.google.android.gms.common.internal.safeparcel.a.a(p0, v15, Location.CREATOR);
            break;
          case 12:
            v13 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          case 13:
            v14 = com.google.android.gms.common.internal.safeparcel.a.q(p0, v15);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v15);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.internal.aj(v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14);
    }

    private static com.google.android.gms.internal.aj[] c(int p0)
    {
      return new com.google.android.gms.internal.aj[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      return b(p0);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.aj[p0];
    }

}

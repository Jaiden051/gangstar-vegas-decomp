// Decompiled from classes.dex (SourceFile: du.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
public class du implements android.os.Parcelable.Creator {
    // Methods
    public du()
    {
      super();
    }

    static void a(com.google.android.gms.internal.dt p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.b, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, (android.os.Parcelable)p0.c, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, (android.os.Parcelable)p0.d, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.e, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.f, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.g, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.h, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 9, p0.i, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 10, p0.j, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 11, (android.os.Parcelable)p0.k, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 12, p0.l, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.internal.dt h(android.os.Parcel p0)
    {
      android.os.Bundle v1;
      int v2;
      int v3;
      com.google.android.gms.internal.ew v4;
      String v5;
      String v6;
      String v7;
      android.content.pm.PackageInfo v8;
      android.content.pm.ApplicationInfo v9;
      String v10;
      com.google.android.gms.internal.am v11;
      com.google.android.gms.internal.aj v12;
      android.os.Bundle v13;
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
            v13 = com.google.android.gms.common.internal.safeparcel.a.q(p0, v14);
            break;
          case 3:
            v12 = (com.google.android.gms.internal.aj)com.google.android.gms.common.internal.safeparcel.a.a(p0, v14, (android.os.Parcelable.Creator)aj.CREATOR);
            break;
          case 4:
            v11 = (com.google.android.gms.internal.am)com.google.android.gms.common.internal.safeparcel.a.a(p0, v14, (android.os.Parcelable.Creator)am.CREATOR);
            break;
          case 5:
            v10 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          case 6:
            v9 = (android.content.pm.ApplicationInfo)com.google.android.gms.common.internal.safeparcel.a.a(p0, v14, ApplicationInfo.CREATOR);
            break;
          case 7:
            v8 = (android.content.pm.PackageInfo)com.google.android.gms.common.internal.safeparcel.a.a(p0, v14, PackageInfo.CREATOR);
            break;
          case 8:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          case 9:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          case 10:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v14);
            break;
          case 11:
            v4 = (com.google.android.gms.internal.ew)com.google.android.gms.common.internal.safeparcel.a.a(p0, v14, (android.os.Parcelable.Creator)ew.CREATOR);
            break;
          case 12:
            v1 = com.google.android.gms.common.internal.safeparcel.a.q(p0, v14);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v14);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.internal.dt(v3, v13, v12, v11, v10, v9, v8, v7, v6, v5, v4, v1);
    }

    private static com.google.android.gms.internal.dt[] m(int p0)
    {
      return new com.google.android.gms.internal.dt[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      return h(p0);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.dt[p0];
    }

}

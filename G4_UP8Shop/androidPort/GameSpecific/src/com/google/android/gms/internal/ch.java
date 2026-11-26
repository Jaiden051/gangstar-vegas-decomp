// Decompiled from classes.dex (SourceFile: ch.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class ch implements android.os.Parcelable.Creator {
    // Methods
    public ch()
    {
      super();
    }

    static void a(com.google.android.gms.internal.ci p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, (android.os.Parcelable)p0.b, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.a(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.b(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.c(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.d(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.g, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.h);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 9, p0.i, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 10, p0.f(), false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 11, p0.k);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 12, p0.l);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 13, p0.m, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 14, (android.os.Parcelable)p0.n, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 15, p0.e(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 17, (android.os.Parcelable)p0.q, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 16, p0.p, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.internal.ci f(android.os.Parcel p0)
    {
      int v1;
      int v2;
      com.google.android.gms.internal.cf v3;
      android.os.IBinder v4;
      android.os.IBinder v5;
      android.os.IBinder v6;
      android.os.IBinder v7;
      String v8;
      boolean v9;
      String v10;
      android.os.IBinder v11;
      int v12;
      int v13;
      String v14;
      com.google.android.gms.internal.ew v15;
      android.os.IBinder v16;
      String v17;
      com.google.android.gms.internal.w v18;
      int v19;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = 0;
      v3 = null;
      v4 = null;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = null;
      v9 = false;
      v10 = null;
      v11 = null;
      v12 = 0;
      v13 = 0;
      v14 = null;
      v15 = null;
      v16 = null;
      v17 = null;
      v18 = null;
      while ( p0.dataPosition() < v1 )
      {
        v19 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v19) )
        {
          case 1:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v19);
            break;
          case 2:
            v3 = (com.google.android.gms.internal.cf)com.google.android.gms.common.internal.safeparcel.a.a(p0, v19, (android.os.Parcelable.Creator)cf.CREATOR);
            break;
          case 3:
            v4 = com.google.android.gms.common.internal.safeparcel.a.p(p0, v19);
            break;
          case 4:
            v5 = com.google.android.gms.common.internal.safeparcel.a.p(p0, v19);
            break;
          case 5:
            v6 = com.google.android.gms.common.internal.safeparcel.a.p(p0, v19);
            break;
          case 6:
            v7 = com.google.android.gms.common.internal.safeparcel.a.p(p0, v19);
            break;
          case 7:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v19);
            break;
          case 8:
            v9 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v19);
            break;
          case 9:
            v10 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v19);
            break;
          case 10:
            v11 = com.google.android.gms.common.internal.safeparcel.a.p(p0, v19);
            break;
          case 11:
            v12 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v19);
            break;
          case 12:
            v13 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v19);
            break;
          case 13:
            v14 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v19);
            break;
          case 14:
            v15 = (com.google.android.gms.internal.ew)com.google.android.gms.common.internal.safeparcel.a.a(p0, v19, (android.os.Parcelable.Creator)ew.CREATOR);
            break;
          case 15:
            v16 = com.google.android.gms.common.internal.safeparcel.a.p(p0, v19);
            break;
          case 16:
            v17 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v19);
            break;
          case 17:
            v18 = (com.google.android.gms.internal.w)com.google.android.gms.common.internal.safeparcel.a.a(p0, v19, (android.os.Parcelable.Creator)w.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v19);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.internal.ci(v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18);
    }

    private static com.google.android.gms.internal.ci[] j(int p0)
    {
      return new com.google.android.gms.internal.ci[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      int v3;
      com.google.android.gms.internal.cf v4;
      android.os.IBinder v5;
      android.os.IBinder v6;
      android.os.IBinder v7;
      android.os.IBinder v8;
      String v9;
      boolean v10;
      String v11;
      android.os.IBinder v12;
      int v13;
      int v14;
      String v15;
      com.google.android.gms.internal.ew v16;
      android.os.IBinder v17;
      String v18;
      com.google.android.gms.internal.w v19;
      int v20;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = null;
      v9 = null;
      v10 = false;
      v11 = null;
      v12 = null;
      v13 = 0;
      v14 = 0;
      v15 = null;
      v16 = null;
      v17 = null;
      v18 = null;
      v19 = null;
      while ( p0.dataPosition() < v2 )
      {
        v20 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v20) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v20);
            break;
          case 2:
            v4 = (com.google.android.gms.internal.cf)com.google.android.gms.common.internal.safeparcel.a.a(p0, v20, (android.os.Parcelable.Creator)cf.CREATOR);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.p(p0, v20);
            break;
          case 4:
            v6 = com.google.android.gms.common.internal.safeparcel.a.p(p0, v20);
            break;
          case 5:
            v7 = com.google.android.gms.common.internal.safeparcel.a.p(p0, v20);
            break;
          case 6:
            v8 = com.google.android.gms.common.internal.safeparcel.a.p(p0, v20);
            break;
          case 7:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v20);
            break;
          case 8:
            v10 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v20);
            break;
          case 9:
            v11 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v20);
            break;
          case 10:
            v12 = com.google.android.gms.common.internal.safeparcel.a.p(p0, v20);
            break;
          case 11:
            v13 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v20);
            break;
          case 12:
            v14 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v20);
            break;
          case 13:
            v15 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v20);
            break;
          case 14:
            v16 = (com.google.android.gms.internal.ew)com.google.android.gms.common.internal.safeparcel.a.a(p0, v20, (android.os.Parcelable.Creator)ew.CREATOR);
            break;
          case 15:
            v17 = com.google.android.gms.common.internal.safeparcel.a.p(p0, v20);
            break;
          case 16:
            v18 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v20);
            break;
          case 17:
            v19 = (com.google.android.gms.internal.w)com.google.android.gms.common.internal.safeparcel.a.a(p0, v20, (android.os.Parcelable.Creator)w.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v20);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.internal.ci(v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.ci[p0];
    }

}

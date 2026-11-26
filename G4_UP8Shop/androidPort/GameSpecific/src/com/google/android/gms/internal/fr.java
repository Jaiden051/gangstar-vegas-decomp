// Decompiled from classes.dex (SourceFile: fr.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class fr implements android.os.Parcelable.Creator {
    // Methods
    public fr()
    {
      super();
    }

    private static com.google.android.gms.internal.fq[] J(int p0)
    {
      return new com.google.android.gms.internal.fq[p0];
    }

    static void a(com.google.android.gms.internal.fq p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 1, p0.b, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.c, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.d);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 4, p0.e);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.f);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.g, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.h, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.i, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 11, p0.j, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.internal.fq p(android.os.Parcel p0)
    {
      boolean v1;
      String v2;
      int v3;
      int v4;
      int[] v5;
      com.google.android.gms.internal.fn[] v6;
      String v7;
      boolean v8;
      String v9;
      String v10;
      int v11;
      int v12;
      v1 = false;
      v2 = null;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = 1;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = false;
      v9 = null;
      v10 = null;
      v11 = 0;
      while ( p0.dataPosition() < v3 )
      {
        v12 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v12) )
        {
          case 1:
            v10 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v12);
            break;
          case 2:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v12);
            break;
          case 3:
            v8 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v12);
            break;
          case 4:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v12);
            break;
          case 5:
            v1 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v12);
            break;
          case 6:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v12);
            break;
          case 7:
            v6 = (com.google.android.gms.internal.fn[])com.google.android.gms.common.internal.safeparcel.a.b(p0, v12, (android.os.Parcelable.Creator)fn.CREATOR);
            break;
          case 8:
            v5 = com.google.android.gms.common.internal.safeparcel.a.u(p0, v12);
            break;
          case 11:
            v2 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v12);
            break;
          case 1000:
            v11 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v12);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v12);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.internal.fq(v11, v10, v9, v8, v4, v1, v7, v6, v5, v2);
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      boolean v2;
      String v3;
      int v4;
      int v5;
      int[] v6;
      com.google.android.gms.internal.fn[] v7;
      String v8;
      boolean v9;
      String v10;
      String v11;
      int v12;
      int v13;
      v2 = false;
      v3 = null;
      v4 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v5 = 1;
      v6 = null;
      v7 = null;
      v8 = null;
      v9 = false;
      v10 = null;
      v11 = null;
      v12 = 0;
      while ( p0.dataPosition() < v4 )
      {
        v13 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v13) )
        {
          case 1:
            v11 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v13);
            break;
          case 2:
            v10 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v13);
            break;
          case 3:
            v9 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v13);
            break;
          case 4:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v13);
            break;
          case 5:
            v2 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v13);
            break;
          case 6:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v13);
            break;
          case 7:
            v7 = (com.google.android.gms.internal.fn[])com.google.android.gms.common.internal.safeparcel.a.b(p0, v13, (android.os.Parcelable.Creator)fn.CREATOR);
            break;
          case 8:
            v6 = com.google.android.gms.common.internal.safeparcel.a.u(p0, v13);
            break;
          case 11:
            v3 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v13);
            break;
          case 1000:
            v12 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v13);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v13);
            break;
        }
      }
      if ( p0.dataPosition() != v4 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v4, p0);
      return new com.google.android.gms.internal.fq(v12, v11, v10, v9, v5, v2, v8, v7, v6, v3);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.fq[p0];
    }

}

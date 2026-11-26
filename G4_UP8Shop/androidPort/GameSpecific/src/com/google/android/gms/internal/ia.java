// Decompiled from classes.dex (SourceFile: ia.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class ia implements android.os.Parcelable.Creator {
    // Methods
    public ia()
    {
      super();
    }

    private static com.google.android.gms.internal.hz$a H(android.os.Parcel p0)
    {
      com.google.android.gms.internal.hu v1;
      int v2;
      int v3;
      String v4;
      String v5;
      boolean v6;
      int v7;
      boolean v8;
      int v9;
      int v10;
      int v11;
      v1 = null;
      v2 = 0;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = null;
      v5 = null;
      v6 = false;
      v7 = 0;
      v8 = false;
      v9 = 0;
      v10 = 0;
      while ( p0.dataPosition() < v3 )
      {
        v11 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v11) )
        {
          case 1:
            v10 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v11);
            break;
          case 2:
            v9 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v11);
            break;
          case 3:
            v8 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v11);
            break;
          case 4:
            v7 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v11);
            break;
          case 5:
            v6 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v11);
            break;
          case 6:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v11);
            break;
          case 7:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v11);
            break;
          case 8:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v11);
            break;
          case 9:
            v1 = (com.google.android.gms.internal.hu)com.google.android.gms.common.internal.safeparcel.a.a(p0, v11, (android.os.Parcelable.Creator)hu.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v11);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.internal.hz$a(v10, v9, v8, v7, v6, v5, v2, v4, v1);
    }

    static void a(com.google.android.gms.internal.hz$a p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.b());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 2, p0.c());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.d());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 4, p0.e());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.f());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.g(), false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 7, p0.h());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.j(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 9, (android.os.Parcelable)p0.l(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.internal.hz$a[] aw(int p0)
    {
      return new com.google.android.gms.internal.hz$a[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      com.google.android.gms.internal.hu v2;
      int v3;
      int v4;
      String v5;
      String v6;
      boolean v7;
      int v8;
      boolean v9;
      int v10;
      int v11;
      int v12;
      v2 = null;
      v3 = 0;
      v4 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v5 = null;
      v6 = null;
      v7 = false;
      v8 = 0;
      v9 = false;
      v10 = 0;
      v11 = 0;
      while ( p0.dataPosition() < v4 )
      {
        v12 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v12) )
        {
          case 1:
            v11 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v12);
            break;
          case 2:
            v10 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v12);
            break;
          case 3:
            v9 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v12);
            break;
          case 4:
            v8 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v12);
            break;
          case 5:
            v7 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v12);
            break;
          case 6:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v12);
            break;
          case 7:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v12);
            break;
          case 8:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v12);
            break;
          case 9:
            v2 = (com.google.android.gms.internal.hu)com.google.android.gms.common.internal.safeparcel.a.a(p0, v12, (android.os.Parcelable.Creator)hu.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v12);
            break;
        }
      }
      if ( p0.dataPosition() != v4 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v4, p0);
      return new com.google.android.gms.internal.hz$a(v11, v10, v9, v8, v7, v6, v3, v5, v2);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.hz$a[p0];
    }

}

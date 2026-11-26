// Decompiled from classes.dex (SourceFile: ft.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class ft implements android.os.Parcelable.Creator {
    // Methods
    public ft()
    {
      super();
    }

    private static com.google.android.gms.internal.fs[] K(int p0)
    {
      return new com.google.android.gms.internal.fs[p0];
    }

    static void a(com.google.android.gms.internal.fs p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 1, (android.os.Parcelable)p0.b, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.c);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 3, p0.d);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.e, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, (android.os.Parcelable)p0.f, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.internal.fs q(android.os.Parcel p0)
    {
      int v1;
      com.google.android.gms.internal.fh v2;
      int v3;
      long v4;
      String v5;
      com.google.android.gms.internal.fj v6;
      int v7;
      int v8;
      v1 = 0;
      v2 = null;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = 0;
      v5 = null;
      v6 = null;
      v7 = 0;
      while ( p0.dataPosition() < v3 )
      {
        v8 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v8) )
        {
          case 1:
            v6 = (com.google.android.gms.internal.fj)com.google.android.gms.common.internal.safeparcel.a.a(p0, v8, (android.os.Parcelable.Creator)fj.CREATOR);
            break;
          case 2:
            v4 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v8);
            break;
          case 3:
            v1 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            break;
          case 4:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v8);
            break;
          case 5:
            v2 = (com.google.android.gms.internal.fh)com.google.android.gms.common.internal.safeparcel.a.a(p0, v8, (android.os.Parcelable.Creator)fh.CREATOR);
            break;
          case 1000:
            v7 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v8);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.internal.fs(v7, v6, v4, v1, v5, v2);
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      com.google.android.gms.internal.fh v3;
      int v4;
      long v5;
      String v6;
      com.google.android.gms.internal.fj v7;
      int v8;
      int v9;
      v2 = 0;
      v3 = null;
      v4 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v5 = 0;
      v6 = null;
      v7 = null;
      v8 = 0;
      while ( p0.dataPosition() < v4 )
      {
        v9 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v9) )
        {
          case 1:
            v7 = (com.google.android.gms.internal.fj)com.google.android.gms.common.internal.safeparcel.a.a(p0, v9, (android.os.Parcelable.Creator)fj.CREATOR);
            break;
          case 2:
            v5 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v9);
            break;
          case 3:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v9);
            break;
          case 4:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v9);
            break;
          case 5:
            v3 = (com.google.android.gms.internal.fh)com.google.android.gms.common.internal.safeparcel.a.a(p0, v9, (android.os.Parcelable.Creator)fh.CREATOR);
            break;
          case 1000:
            v8 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v9);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v9);
            break;
        }
      }
      if ( p0.dataPosition() != v4 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v4, p0);
      return new com.google.android.gms.internal.fs(v8, v7, v5, v2, v6, v3);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.fs[p0];
    }

}

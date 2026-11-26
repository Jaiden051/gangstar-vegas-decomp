// Decompiled from classes.dex (SourceFile: fm.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class fm implements android.os.Parcelable.Creator {
    // Methods
    public fm()
    {
      super();
    }

    private static com.google.android.gms.internal.fl[] F(int p0)
    {
      return new com.google.android.gms.internal.fl[p0];
    }

    static void a(com.google.android.gms.internal.fl p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 1, p0.c, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.b);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, (android.os.Parcelable)p0.d, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 4, p0.e);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.f, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.internal.fl n(android.os.Parcel p0)
    {
      byte[] v1;
      int v2;
      int v3;
      int v4;
      com.google.android.gms.internal.fq v5;
      String v6;
      int v7;
      v1 = null;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = -1;
      v5 = null;
      v6 = null;
      while ( p0.dataPosition() < v2 )
      {
        v7 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v7) )
        {
          case 1:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v7);
            break;
          case 3:
            v5 = (com.google.android.gms.internal.fq)com.google.android.gms.common.internal.safeparcel.a.a(p0, v7, (android.os.Parcelable.Creator)fq.CREATOR);
            break;
          case 4:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          case 5:
            v1 = com.google.android.gms.common.internal.safeparcel.a.r(p0, v7);
            break;
          case 1000:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v7);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.internal.fl(v3, v6, v5, v4, v1);
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      byte[] v2;
      int v3;
      int v4;
      int v5;
      com.google.android.gms.internal.fq v6;
      String v7;
      int v8;
      v2 = null;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = 0;
      v5 = -1;
      v6 = null;
      v7 = null;
      while ( p0.dataPosition() < v3 )
      {
        v8 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v8) )
        {
          case 1:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v8);
            break;
          case 3:
            v6 = (com.google.android.gms.internal.fq)com.google.android.gms.common.internal.safeparcel.a.a(p0, v8, (android.os.Parcelable.Creator)fq.CREATOR);
            break;
          case 4:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            break;
          case 5:
            v2 = com.google.android.gms.common.internal.safeparcel.a.r(p0, v8);
            break;
          case 1000:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v8);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.internal.fl(v4, v7, v6, v5, v2);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.fl[p0];
    }

}

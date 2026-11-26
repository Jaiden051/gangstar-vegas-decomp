// Decompiled from classes.dex (SourceFile: fi.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class fi implements android.os.Parcelable.Creator {
    // Methods
    public fi()
    {
      super();
    }

    private static com.google.android.gms.internal.fh[] D(int p0)
    {
      return new com.google.android.gms.internal.fh[p0];
    }

    static void a(com.google.android.gms.internal.fh p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 1, p0.b, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.c, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.d);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.internal.fh l(android.os.Parcel p0)
    {
      int v1;
      String v2;
      com.google.android.gms.internal.fl[] v3;
      int v4;
      boolean v5;
      int v6;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = null;
      v3 = null;
      v4 = 0;
      v5 = false;
      while ( p0.dataPosition() < v1 )
      {
        v6 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v6) )
        {
          case 1:
            v3 = (com.google.android.gms.internal.fl[])com.google.android.gms.common.internal.safeparcel.a.b(p0, v6, (android.os.Parcelable.Creator)fl.CREATOR);
            break;
          case 2:
            v2 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v6);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v6);
            break;
          case 1000:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v6);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.internal.fh(v4, v3, v2, v5);
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      String v3;
      com.google.android.gms.internal.fl[] v4;
      int v5;
      boolean v6;
      int v7;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = null;
      v4 = null;
      v5 = 0;
      v6 = false;
      while ( p0.dataPosition() < v2 )
      {
        v7 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v7) )
        {
          case 1:
            v4 = (com.google.android.gms.internal.fl[])com.google.android.gms.common.internal.safeparcel.a.b(p0, v7, (android.os.Parcelable.Creator)fl.CREATOR);
            break;
          case 2:
            v3 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v7);
            break;
          case 3:
            v6 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v7);
            break;
          case 1000:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v7);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.internal.fh(v5, v4, v3, v6);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.fh[p0];
    }

}

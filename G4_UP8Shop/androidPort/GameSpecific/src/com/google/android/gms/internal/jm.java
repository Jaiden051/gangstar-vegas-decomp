// Decompiled from classes.dex (SourceFile: jm.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class jm implements android.os.Parcelable.Creator {
    // Methods
    public jm()
    {
      super();
    }

    static void a(com.google.android.gms.internal.jl p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.b());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 2, p0.c());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, (android.os.Parcelable)p0.d(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.internal.jl bu(android.os.Parcel p0)
    {
      int v1;
      int v2;
      int v3;
      com.google.android.gms.internal.jn v4;
      int v5;
      int v6;
      v1 = 0;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = -1;
      v4 = null;
      v5 = 0;
      while ( p0.dataPosition() < v2 )
      {
        v6 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v6) )
        {
          case 1:
            v1 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          case 2:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          case 3:
            v4 = (com.google.android.gms.internal.jn)com.google.android.gms.common.internal.safeparcel.a.a(p0, v6, (android.os.Parcelable.Creator)jn.CREATOR);
            break;
          case 1000:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v6);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.internal.jl(v5, v1, v3, v4);
    }

    private static com.google.android.gms.internal.jl[] cP(int p0)
    {
      return new com.google.android.gms.internal.jl[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      return bu(p0);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.jl[p0];
    }

}

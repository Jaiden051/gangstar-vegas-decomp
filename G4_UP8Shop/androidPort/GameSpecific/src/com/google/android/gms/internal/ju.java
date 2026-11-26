// Decompiled from classes.dex (SourceFile: ju.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class ju implements android.os.Parcelable.Creator {
    // Methods
    public ju()
    {
      super();
    }

    static void a(com.google.android.gms.internal.jt p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 1, p0.bx, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.bw);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.internal.jt by(android.os.Parcel p0)
    {
      int v1;
      int v2;
      String v3;
      int v4;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = 0;
      v3 = null;
      while ( p0.dataPosition() < v1 )
      {
        v4 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v4) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v4);
            break;
          case 1000:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v4);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v4);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.internal.jt(v2, v3);
    }

    private static com.google.android.gms.internal.jt[] cT(int p0)
    {
      return new com.google.android.gms.internal.jt[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      int v3;
      String v4;
      int v5;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      while ( p0.dataPosition() < v2 )
      {
        v5 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v5) )
        {
          case 1:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v5);
            break;
          case 1000:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v5);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v5);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.internal.jt(v3, v4);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.jt[p0];
    }

}

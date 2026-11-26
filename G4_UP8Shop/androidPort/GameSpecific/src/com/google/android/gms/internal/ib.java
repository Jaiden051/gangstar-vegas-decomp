// Decompiled from classes.dex (SourceFile: ib.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class ib implements android.os.Parcelable.Creator {
    // Methods
    public ib()
    {
      super();
    }

    private static com.google.android.gms.internal.ic$b I(android.os.Parcel p0)
    {
      com.google.android.gms.internal.hz$a v1;
      int v2;
      int v3;
      String v4;
      int v5;
      v1 = null;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      while ( p0.dataPosition() < v2 )
      {
        v5 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v5) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v5);
            break;
          case 2:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v5);
            break;
          case 3:
            v1 = (com.google.android.gms.internal.hz$a)com.google.android.gms.common.internal.safeparcel.a.a(p0, v5, (android.os.Parcelable.Creator)hz$a.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v5);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.internal.ic$b(v3, v4, v1);
    }

    static void a(com.google.android.gms.internal.ic$b p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.b, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, (android.os.Parcelable)p0.c, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.internal.ic$b[] ax(int p0)
    {
      return new com.google.android.gms.internal.ic$b[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      com.google.android.gms.internal.hz$a v2;
      int v3;
      int v4;
      String v5;
      int v6;
      v2 = null;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = 0;
      v5 = null;
      while ( p0.dataPosition() < v3 )
      {
        v6 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v6) )
        {
          case 1:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          case 2:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v6);
            break;
          case 3:
            v2 = (com.google.android.gms.internal.hz$a)com.google.android.gms.common.internal.safeparcel.a.a(p0, v6, (android.os.Parcelable.Creator)hz$a.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v6);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.internal.ic$b(v4, v5, v2);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.ic$b[p0];
    }

}

// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.location;

public class c implements android.os.Parcelable.Creator {
    // Methods
    public c()
    {
      super();
    }

    static void a(com.google.android.gms.location.b p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 2, p0.b);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.c);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    public static com.google.android.gms.location.b bs(android.os.Parcel p0)
    {
      int v1;
      int v2;
      int v3;
      long v4;
      int v5;
      int v6;
      v1 = 1;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = 0;
      v5 = 1;
      while ( p0.dataPosition() < v2 )
      {
        v6 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v6) )
        {
          case 1:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          case 2:
            v1 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          case 3:
            v4 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v6);
            break;
          case 1000:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v6);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.location.b(v3, v5, v1, v4);
    }

    private static com.google.android.gms.location.b[] cL(int p0)
    {
      return new com.google.android.gms.location.b[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      return bs(p0);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.location.b[p0];
    }

}

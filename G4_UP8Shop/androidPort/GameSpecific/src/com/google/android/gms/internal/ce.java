// Decompiled from classes.dex (SourceFile: ce.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class ce implements android.os.Parcelable.Creator {
    // Methods
    public ce()
    {
      super();
    }

    static void a(com.google.android.gms.internal.cf p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.b, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.c, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.d, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.e, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.f, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.g, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.h, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.internal.cf e(android.os.Parcel p0)
    {
      String v1;
      int v2;
      int v3;
      String v4;
      String v5;
      String v6;
      String v7;
      String v8;
      String v9;
      int v10;
      v1 = null;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = null;
      v9 = null;
      while ( p0.dataPosition() < v2 )
      {
        v10 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v10) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v10);
            break;
          case 2:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v10);
            break;
          case 3:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v10);
            break;
          case 4:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v10);
            break;
          case 5:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v10);
            break;
          case 6:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v10);
            break;
          case 7:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v10);
            break;
          case 8:
            v1 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v10);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v10);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.internal.cf(v3, v9, v8, v7, v6, v5, v4, v1);
    }

    private static com.google.android.gms.internal.cf[] i(int p0)
    {
      return new com.google.android.gms.internal.cf[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      String v2;
      int v3;
      int v4;
      String v5;
      String v6;
      String v7;
      String v8;
      String v9;
      String v10;
      int v11;
      v2 = null;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = 0;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = null;
      v9 = null;
      v10 = null;
      while ( p0.dataPosition() < v3 )
      {
        v11 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v11) )
        {
          case 1:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v11);
            break;
          case 2:
            v10 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v11);
            break;
          case 3:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v11);
            break;
          case 4:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v11);
            break;
          case 5:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v11);
            break;
          case 6:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v11);
            break;
          case 7:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v11);
            break;
          case 8:
            v2 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v11);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v11);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.internal.cf(v4, v10, v9, v8, v7, v6, v5, v2);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.cf[p0];
    }

}

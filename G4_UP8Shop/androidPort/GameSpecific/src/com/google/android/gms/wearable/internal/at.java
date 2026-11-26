// Decompiled from classes.dex (SourceFile: at.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public class at implements android.os.Parcelable.Creator {
    // Methods
    public at()
    {
      super();
    }

    static void a(com.google.android.gms.wearable.internal.as p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 2, p0.b);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.c);
      com.google.android.gms.common.internal.safeparcel.b.b(p1, 4, p0.d, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.wearable.internal.as cK(android.os.Parcel p0)
    {
      int v1;
      int v2;
      long v3;
      java.util.ArrayList v4;
      int v5;
      int v6;
      v1 = 0;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      v5 = 0;
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
            v3 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v6);
            break;
          case 4:
            v4 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v6, ak.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v6);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.wearable.internal.as(v5, v1, v3, v4);
    }

    private static com.google.android.gms.wearable.internal.as[] et(int p0)
    {
      return new com.google.android.gms.wearable.internal.as[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      int v3;
      long v4;
      java.util.ArrayList v5;
      int v6;
      int v7;
      v2 = 0;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = 0;
      v5 = null;
      v6 = 0;
      while ( p0.dataPosition() < v3 )
      {
        v7 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v7) )
        {
          case 1:
            v6 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          case 2:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          case 3:
            v4 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v7);
            break;
          case 4:
            v5 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v7, ak.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v7);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.wearable.internal.as(v6, v2, v4, v5);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.wearable.internal.as[p0];
    }

}

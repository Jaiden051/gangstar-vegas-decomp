// Decompiled from classes.dex (SourceFile: cq.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class cq implements android.os.Parcelable.Creator {
    // Methods
    public cq()
    {
      super();
    }

    static void a(com.google.android.gms.internal.cr p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.a(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.b(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.c(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.d(), false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.internal.cr g(android.os.Parcel p0)
    {
      android.os.IBinder v1;
      int v2;
      int v3;
      android.os.IBinder v4;
      android.os.IBinder v5;
      android.os.IBinder v6;
      int v7;
      v1 = null;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      v5 = null;
      v6 = null;
      while ( p0.dataPosition() < v2 )
      {
        v7 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v7) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          case 2:
            v6 = com.google.android.gms.common.internal.safeparcel.a.p(p0, v7);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.p(p0, v7);
            break;
          case 4:
            v4 = com.google.android.gms.common.internal.safeparcel.a.p(p0, v7);
            break;
          case 5:
            v1 = com.google.android.gms.common.internal.safeparcel.a.p(p0, v7);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v7);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.internal.cr(v3, v6, v5, v4, v1);
    }

    private static com.google.android.gms.internal.cr[] k(int p0)
    {
      return new com.google.android.gms.internal.cr[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      android.os.IBinder v2;
      int v3;
      int v4;
      android.os.IBinder v5;
      android.os.IBinder v6;
      android.os.IBinder v7;
      int v8;
      v2 = null;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = 0;
      v5 = null;
      v6 = null;
      v7 = null;
      while ( p0.dataPosition() < v3 )
      {
        v8 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v8) )
        {
          case 1:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            break;
          case 2:
            v7 = com.google.android.gms.common.internal.safeparcel.a.p(p0, v8);
            break;
          case 3:
            v6 = com.google.android.gms.common.internal.safeparcel.a.p(p0, v8);
            break;
          case 4:
            v5 = com.google.android.gms.common.internal.safeparcel.a.p(p0, v8);
            break;
          case 5:
            v2 = com.google.android.gms.common.internal.safeparcel.a.p(p0, v8);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v8);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.internal.cr(v4, v7, v6, v5, v2);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.internal.cr[p0];
    }

}

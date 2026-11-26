// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive;

public class e implements android.os.Parcelable.Creator {
    // Methods
    public e()
    {
      super();
    }

    private static com.google.android.gms.drive.StorageStats O(android.os.Parcel p0)
    {
      int v1;
      long v2;
      int v3;
      long v4;
      long v5;
      long v6;
      int v7;
      int v8;
      v1 = 0;
      v2 = 0;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = 0;
      v5 = 0;
      v6 = 0;
      v7 = 0;
      while ( p0.dataPosition() < v3 )
      {
        v8 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v8) )
        {
          case 1:
            v7 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            break;
          case 2:
            v6 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v8);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v8);
            break;
          case 4:
            v4 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v8);
            break;
          case 5:
            v2 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v8);
            break;
          case 6:
            v1 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v8);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.drive.StorageStats(v7, v6, v5, v4, v2, v1);
    }

    static void a(com.google.android.gms.drive.StorageStats p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.b);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.c);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.d);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.e);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 6, p0.f);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.drive.StorageStats[] aI(int p0)
    {
      return new com.google.android.gms.drive.StorageStats[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      long v3;
      int v4;
      long v5;
      long v6;
      long v7;
      int v8;
      int v9;
      v2 = 0;
      v3 = 0;
      v4 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v5 = 0;
      v6 = 0;
      v7 = 0;
      v8 = 0;
      while ( p0.dataPosition() < v4 )
      {
        v9 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v9) )
        {
          case 1:
            v8 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v9);
            break;
          case 2:
            v7 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v9);
            break;
          case 3:
            v6 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v9);
            break;
          case 4:
            v5 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v9);
            break;
          case 5:
            v3 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v9);
            break;
          case 6:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v9);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v9);
            break;
        }
      }
      if ( p0.dataPosition() != v4 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v4, p0);
      return new com.google.android.gms.drive.StorageStats(v8, v7, v6, v5, v3, v2);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.drive.StorageStats[p0];
    }

}

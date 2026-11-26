// Decompiled from classes.dex (SourceFile: aq.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

public class aq implements android.os.Parcelable.Creator {
    // Methods
    public aq()
    {
      super();
    }

    static void a(com.google.android.gms.drive.internal.OnSyncMoreResponse p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.b);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.drive.internal.OnSyncMoreResponse ar(android.os.Parcel p0)
    {
      boolean v1;
      int v2;
      int v3;
      int v4;
      v1 = false;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      while ( p0.dataPosition() < v2 )
      {
        v4 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v4) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v4);
            break;
          case 2:
            v1 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v4);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v4);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.drive.internal.OnSyncMoreResponse(v3, v1);
    }

    private static com.google.android.gms.drive.internal.OnSyncMoreResponse[] bn(int p0)
    {
      return new com.google.android.gms.drive.internal.OnSyncMoreResponse[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      boolean v2;
      int v3;
      int v4;
      int v5;
      v2 = false;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = 0;
      while ( p0.dataPosition() < v3 )
      {
        v5 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v5) )
        {
          case 1:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v5);
            break;
          case 2:
            v2 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v5);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v5);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.drive.internal.OnSyncMoreResponse(v4, v2);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.drive.internal.OnSyncMoreResponse[p0];
    }

}

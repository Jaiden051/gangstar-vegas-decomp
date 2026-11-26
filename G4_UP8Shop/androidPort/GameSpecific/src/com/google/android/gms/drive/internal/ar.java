// Decompiled from classes.dex (SourceFile: ar.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import com.google.android.gms.drive.DriveId;
public class ar implements android.os.Parcelable.Creator {
    // Methods
    public ar()
    {
      super();
    }

    static void a(com.google.android.gms.drive.internal.OpenContentsRequest p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, (android.os.Parcelable)p0.b, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 3, p0.c);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.drive.internal.OpenContentsRequest as(android.os.Parcel p0)
    {
      int v1;
      com.google.android.gms.drive.DriveId v2;
      int v3;
      int v4;
      int v5;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = null;
      v3 = 0;
      v4 = 0;
      while ( p0.dataPosition() < v1 )
      {
        v5 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v5) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v5);
            break;
          case 2:
            v2 = (com.google.android.gms.drive.DriveId)com.google.android.gms.common.internal.safeparcel.a.a(p0, v5, DriveId.CREATOR);
            break;
          case 3:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v5);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v5);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.drive.internal.OpenContentsRequest(v3, v2, v4);
    }

    private static com.google.android.gms.drive.internal.OpenContentsRequest[] bo(int p0)
    {
      return new com.google.android.gms.drive.internal.OpenContentsRequest[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      com.google.android.gms.drive.DriveId v3;
      int v4;
      int v5;
      int v6;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = null;
      v4 = 0;
      v5 = 0;
      while ( p0.dataPosition() < v2 )
      {
        v6 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v6) )
        {
          case 1:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          case 2:
            v3 = (com.google.android.gms.drive.DriveId)com.google.android.gms.common.internal.safeparcel.a.a(p0, v6, DriveId.CREATOR);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v6);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.drive.internal.OpenContentsRequest(v4, v3, v5);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.drive.internal.OpenContentsRequest[p0];
    }

}

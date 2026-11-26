// Decompiled from classes.dex (SourceFile: as.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import com.google.android.gms.drive.DriveId;
public class as implements android.os.Parcelable.Creator {
    // Methods
    public as()
    {
      super();
    }

    static void a(com.google.android.gms.drive.internal.OpenFileIntentSenderRequest p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.b, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.c, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, (android.os.Parcelable)p0.d, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.drive.internal.OpenFileIntentSenderRequest at(android.os.Parcel p0)
    {
      com.google.android.gms.drive.DriveId v1;
      int v2;
      String v3;
      int v4;
      String[] v5;
      int v6;
      v1 = null;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = null;
      v4 = 0;
      v5 = null;
      while ( p0.dataPosition() < v2 )
      {
        v6 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v6) )
        {
          case 1:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          case 2:
            v3 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v6);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.A(p0, v6);
            break;
          case 4:
            v1 = (com.google.android.gms.drive.DriveId)com.google.android.gms.common.internal.safeparcel.a.a(p0, v6, DriveId.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v6);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.drive.internal.OpenFileIntentSenderRequest(v4, v3, v5, v1);
    }

    private static com.google.android.gms.drive.internal.OpenFileIntentSenderRequest[] bp(int p0)
    {
      return new com.google.android.gms.drive.internal.OpenFileIntentSenderRequest[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      com.google.android.gms.drive.DriveId v2;
      int v3;
      String v4;
      int v5;
      String[] v6;
      int v7;
      v2 = null;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = null;
      v5 = 0;
      v6 = null;
      while ( p0.dataPosition() < v3 )
      {
        v7 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v7) )
        {
          case 1:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          case 2:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v7);
            break;
          case 3:
            v6 = com.google.android.gms.common.internal.safeparcel.a.A(p0, v7);
            break;
          case 4:
            v2 = (com.google.android.gms.drive.DriveId)com.google.android.gms.common.internal.safeparcel.a.a(p0, v7, DriveId.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v7);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.drive.internal.OpenFileIntentSenderRequest(v5, v4, v6, v2);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.drive.internal.OpenFileIntentSenderRequest[p0];
    }

}

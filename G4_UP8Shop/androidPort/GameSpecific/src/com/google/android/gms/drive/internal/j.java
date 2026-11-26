// Decompiled from classes.dex (SourceFile: j.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import com.google.android.gms.drive.Contents;
import com.google.android.gms.drive.DriveId;
import com.google.android.gms.drive.metadata.internal.MetadataBundle;
public class j implements android.os.Parcelable.Creator {
    // Methods
    public j()
    {
      super();
    }

    private static com.google.android.gms.drive.internal.CreateFileRequest Y(android.os.Parcel p0)
    {
      boolean v1;
      String v2;
      int v3;
      Integer v4;
      com.google.android.gms.drive.Contents v5;
      com.google.android.gms.drive.metadata.internal.MetadataBundle v6;
      com.google.android.gms.drive.DriveId v7;
      int v8;
      int v9;
      v1 = false;
      v2 = null;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = null;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = 0;
      while ( p0.dataPosition() < v3 )
      {
        v9 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v9) )
        {
          case 1:
            v8 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v9);
            break;
          case 2:
            v7 = (com.google.android.gms.drive.DriveId)com.google.android.gms.common.internal.safeparcel.a.a(p0, v9, DriveId.CREATOR);
            break;
          case 3:
            v6 = (com.google.android.gms.drive.metadata.internal.MetadataBundle)com.google.android.gms.common.internal.safeparcel.a.a(p0, v9, MetadataBundle.CREATOR);
            break;
          case 4:
            v5 = (com.google.android.gms.drive.Contents)com.google.android.gms.common.internal.safeparcel.a.a(p0, v9, Contents.CREATOR);
            break;
          case 5:
            v4 = com.google.android.gms.common.internal.safeparcel.a.h(p0, v9);
            break;
          case 6:
            v1 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v9);
            break;
          case 7:
            v2 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v9);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v9);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.drive.internal.CreateFileRequest(v8, v7, v6, v5, v4, v1, v2);
    }

    static void a(com.google.android.gms.drive.internal.CreateFileRequest p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, (android.os.Parcelable)p0.b, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, (android.os.Parcelable)p0.c, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, (android.os.Parcelable)p0.d, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.e, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.f);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.g, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.drive.internal.CreateFileRequest[] aU(int p0)
    {
      return new com.google.android.gms.drive.internal.CreateFileRequest[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      boolean v2;
      String v3;
      int v4;
      Integer v5;
      com.google.android.gms.drive.Contents v6;
      com.google.android.gms.drive.metadata.internal.MetadataBundle v7;
      com.google.android.gms.drive.DriveId v8;
      int v9;
      int v10;
      v2 = false;
      v3 = null;
      v4 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = null;
      v9 = 0;
      while ( p0.dataPosition() < v4 )
      {
        v10 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v10) )
        {
          case 1:
            v9 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v10);
            break;
          case 2:
            v8 = (com.google.android.gms.drive.DriveId)com.google.android.gms.common.internal.safeparcel.a.a(p0, v10, DriveId.CREATOR);
            break;
          case 3:
            v7 = (com.google.android.gms.drive.metadata.internal.MetadataBundle)com.google.android.gms.common.internal.safeparcel.a.a(p0, v10, MetadataBundle.CREATOR);
            break;
          case 4:
            v6 = (com.google.android.gms.drive.Contents)com.google.android.gms.common.internal.safeparcel.a.a(p0, v10, Contents.CREATOR);
            break;
          case 5:
            v5 = com.google.android.gms.common.internal.safeparcel.a.h(p0, v10);
            break;
          case 6:
            v2 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v10);
            break;
          case 7:
            v3 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v10);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v10);
            break;
        }
      }
      if ( p0.dataPosition() != v4 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v4, p0);
      return new com.google.android.gms.drive.internal.CreateFileRequest(v9, v8, v7, v6, v5, v2, v3);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.drive.internal.CreateFileRequest[p0];
    }

}

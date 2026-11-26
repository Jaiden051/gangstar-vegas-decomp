// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.events;

import android.os.ParcelFileDescriptor;
import com.google.android.gms.drive.DriveId;
import com.google.android.gms.drive.metadata.internal.MetadataBundle;
public class c implements android.os.Parcelable.Creator {
    // Methods
    public c()
    {
      super();
    }

    private static com.google.android.gms.drive.events.FileConflictEvent Q(android.os.Parcel p0)
    {
      java.util.ArrayList v1;
      int v2;
      int v3;
      com.google.android.gms.drive.metadata.internal.MetadataBundle v4;
      android.os.ParcelFileDescriptor v5;
      android.os.ParcelFileDescriptor v6;
      String v7;
      com.google.android.gms.drive.DriveId v8;
      int v9;
      v1 = null;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = null;
      while ( p0.dataPosition() < v2 )
      {
        v9 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v9) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v9);
            break;
          case 2:
            v8 = (com.google.android.gms.drive.DriveId)com.google.android.gms.common.internal.safeparcel.a.a(p0, v9, DriveId.CREATOR);
            break;
          case 3:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v9);
            break;
          case 4:
            v6 = (android.os.ParcelFileDescriptor)com.google.android.gms.common.internal.safeparcel.a.a(p0, v9, ParcelFileDescriptor.CREATOR);
            break;
          case 5:
            v5 = (android.os.ParcelFileDescriptor)com.google.android.gms.common.internal.safeparcel.a.a(p0, v9, ParcelFileDescriptor.CREATOR);
            break;
          case 6:
            v4 = (com.google.android.gms.drive.metadata.internal.MetadataBundle)com.google.android.gms.common.internal.safeparcel.a.a(p0, v9, MetadataBundle.CREATOR);
            break;
          case 7:
            v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0, v9);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v9);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.drive.events.FileConflictEvent(v3, v8, v7, v6, v5, v4, v1);
    }

    static void a(com.google.android.gms.drive.events.FileConflictEvent p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, (android.os.Parcelable)p0.b, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.c, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.e, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.f, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, (android.os.Parcelable)p0.g, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.h, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.drive.events.FileConflictEvent[] aL(int p0)
    {
      return new com.google.android.gms.drive.events.FileConflictEvent[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      java.util.ArrayList v2;
      int v3;
      int v4;
      com.google.android.gms.drive.metadata.internal.MetadataBundle v5;
      android.os.ParcelFileDescriptor v6;
      android.os.ParcelFileDescriptor v7;
      String v8;
      com.google.android.gms.drive.DriveId v9;
      int v10;
      v2 = null;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = 0;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = null;
      v9 = null;
      while ( p0.dataPosition() < v3 )
      {
        v10 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v10) )
        {
          case 1:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v10);
            break;
          case 2:
            v9 = (com.google.android.gms.drive.DriveId)com.google.android.gms.common.internal.safeparcel.a.a(p0, v10, DriveId.CREATOR);
            break;
          case 3:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v10);
            break;
          case 4:
            v7 = (android.os.ParcelFileDescriptor)com.google.android.gms.common.internal.safeparcel.a.a(p0, v10, ParcelFileDescriptor.CREATOR);
            break;
          case 5:
            v6 = (android.os.ParcelFileDescriptor)com.google.android.gms.common.internal.safeparcel.a.a(p0, v10, ParcelFileDescriptor.CREATOR);
            break;
          case 6:
            v5 = (com.google.android.gms.drive.metadata.internal.MetadataBundle)com.google.android.gms.common.internal.safeparcel.a.a(p0, v10, MetadataBundle.CREATOR);
            break;
          case 7:
            v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0, v10);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v10);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.drive.events.FileConflictEvent(v4, v9, v8, v7, v6, v5, v2);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.drive.events.FileConflictEvent[p0];
    }

}

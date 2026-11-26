// Decompiled from classes.dex (SourceFile: p.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.realtime.internal;

public class p implements android.os.Parcelable.Creator {
    // Methods
    public p()
    {
      super();
    }

    static void a(com.google.android.gms.drive.realtime.internal.ParcelableCollaborator p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.b);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.c);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.d, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.e, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.f, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.g, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.h, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.drive.realtime.internal.ParcelableCollaborator aR(android.os.Parcel p0)
    {
      boolean v1;
      String v2;
      int v3;
      String v4;
      String v5;
      String v6;
      String v7;
      boolean v8;
      int v9;
      int v10;
      v1 = false;
      v2 = null;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = null;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = false;
      v9 = 0;
      while ( p0.dataPosition() < v3 )
      {
        v10 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v10) )
        {
          case 1:
            v9 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v10);
            break;
          case 2:
            v8 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v10);
            break;
          case 3:
            v1 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v10);
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
            v2 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v10);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v10);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.drive.realtime.internal.ParcelableCollaborator(v9, v8, v1, v7, v6, v5, v4, v2);
    }

    private static com.google.android.gms.drive.realtime.internal.ParcelableCollaborator[] bO(int p0)
    {
      return new com.google.android.gms.drive.realtime.internal.ParcelableCollaborator[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      boolean v2;
      String v3;
      int v4;
      String v5;
      String v6;
      String v7;
      String v8;
      boolean v9;
      int v10;
      int v11;
      v2 = false;
      v3 = null;
      v4 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = null;
      v9 = false;
      v10 = 0;
      while ( p0.dataPosition() < v4 )
      {
        v11 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v11) )
        {
          case 1:
            v10 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v11);
            break;
          case 2:
            v9 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v11);
            break;
          case 3:
            v2 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v11);
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
            v3 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v11);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v11);
            break;
        }
      }
      if ( p0.dataPosition() != v4 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v4, p0);
      return new com.google.android.gms.drive.realtime.internal.ParcelableCollaborator(v10, v9, v2, v8, v7, v6, v5, v3);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.drive.realtime.internal.ParcelableCollaborator[p0];
    }

}

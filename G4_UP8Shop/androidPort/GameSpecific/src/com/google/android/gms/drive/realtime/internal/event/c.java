// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.realtime.internal.event;

public class c implements android.os.Parcelable.Creator {
    // Methods
    public c()
    {
      super();
    }

    static void a(
            com.google.android.gms.drive.realtime.internal.event.ParcelableObjectChangedEvent p0,
            android.os.Parcel p1,
            int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.b, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.c, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.d);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.e, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.f, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 7, p0.g);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 8, p0.h);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.drive.realtime.internal.event.ParcelableObjectChangedEvent aV(
            android.os.Parcel p0)
    {
      String v1;
      int v2;
      int v3;
      int v4;
      String v5;
      boolean v6;
      String v7;
      String v8;
      int v9;
      int v10;
      v1 = null;
      v2 = 0;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = 0;
      v5 = null;
      v6 = false;
      v7 = null;
      v8 = null;
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
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v10);
            break;
          case 3:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v10);
            break;
          case 4:
            v6 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v10);
            break;
          case 5:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v10);
            break;
          case 6:
            v1 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v10);
            break;
          case 7:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v10);
            break;
          case 8:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v10);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v10);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.drive.realtime.internal.event.ParcelableObjectChangedEvent(v9, v8, v7, v6, v5, v1, v4, v2);
    }

    private static com.google.android.gms.drive.realtime.internal.event.ParcelableObjectChangedEvent[] bS(int p0)
    {
      return new com.google.android.gms.drive.realtime.internal.event.ParcelableObjectChangedEvent[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      String v2;
      int v3;
      int v4;
      int v5;
      String v6;
      boolean v7;
      String v8;
      String v9;
      int v10;
      int v11;
      v2 = null;
      v3 = 0;
      v4 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v5 = 0;
      v6 = null;
      v7 = false;
      v8 = null;
      v9 = null;
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
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v11);
            break;
          case 3:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v11);
            break;
          case 4:
            v7 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v11);
            break;
          case 5:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v11);
            break;
          case 6:
            v2 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v11);
            break;
          case 7:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v11);
            break;
          case 8:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v11);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v11);
            break;
        }
      }
      if ( p0.dataPosition() != v4 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v4, p0);
      return new com.google.android.gms.drive.realtime.internal.event.ParcelableObjectChangedEvent(v10, v9, v8, v7, v6, v2, v5, v3);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.drive.realtime.internal.event.ParcelableObjectChangedEvent[p0];
    }

}

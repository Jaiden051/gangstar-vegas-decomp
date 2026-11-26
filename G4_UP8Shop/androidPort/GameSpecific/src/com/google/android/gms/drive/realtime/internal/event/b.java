// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.realtime.internal.event;

import com.google.android.gms.common.data.DataHolder;
public class b implements android.os.Parcelable.Creator {
    // Methods
    public b()
    {
      super();
    }

    static void a(
            com.google.android.gms.drive.realtime.internal.event.ParcelableEventList p0,
            android.os.Parcel p1,
            int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.b, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, (android.os.Parcelable)p0.c, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.d);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.e, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.drive.realtime.internal.event.ParcelableEventList aU(android.os.Parcel p0)
    {
      boolean v1;
      com.google.android.gms.drive.realtime.internal.event.ParcelableObjectChangedEvent[] v2;
      int v3;
      com.google.android.gms.common.data.DataHolder v4;
      com.google.android.gms.drive.realtime.internal.event.ParcelableEvent[] v5;
      int v6;
      int v7;
      v1 = false;
      v2 = null;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = null;
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
            v5 = (com.google.android.gms.drive.realtime.internal.event.ParcelableEvent[])com.google.android.gms.common.internal.safeparcel.a.b(p0,
                                                                                           v7,
                                                                                           ParcelableEvent.CREATOR);
            break;
          case 3:
            v4 = (com.google.android.gms.common.data.DataHolder)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                  v7,
                                                                  (android.os.Parcelable.Creator)DataHolder.CREATOR);
            break;
          case 4:
            v1 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v7);
            break;
          case 5:
            v2 = (com.google.android.gms.drive.realtime.internal.event.ParcelableObjectChangedEvent[])com.google.android.gms.common.internal.safeparcel.a.b(p0,
                                                                                                        v7,
                                                                                                        ParcelableObjectChangedEvent.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v7);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.drive.realtime.internal.event.ParcelableEventList(v6, v5, v4, v1, v2);
    }

    private static com.google.android.gms.drive.realtime.internal.event.ParcelableEventList[] bR(int p0)
    {
      return new com.google.android.gms.drive.realtime.internal.event.ParcelableEventList[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      boolean v2;
      com.google.android.gms.drive.realtime.internal.event.ParcelableObjectChangedEvent[] v3;
      int v4;
      com.google.android.gms.common.data.DataHolder v5;
      com.google.android.gms.drive.realtime.internal.event.ParcelableEvent[] v6;
      int v7;
      int v8;
      v2 = false;
      v3 = null;
      v4 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v5 = null;
      v6 = null;
      v7 = 0;
      while ( p0.dataPosition() < v4 )
      {
        v8 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v8) )
        {
          case 1:
            v7 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            break;
          case 2:
            v6 = (com.google.android.gms.drive.realtime.internal.event.ParcelableEvent[])com.google.android.gms.common.internal.safeparcel.a.b(p0,
                                                                                           v8,
                                                                                           ParcelableEvent.CREATOR);
            break;
          case 3:
            v5 = (com.google.android.gms.common.data.DataHolder)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                  v8,
                                                                  (android.os.Parcelable.Creator)DataHolder.CREATOR);
            break;
          case 4:
            v2 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v8);
            break;
          case 5:
            v3 = (com.google.android.gms.drive.realtime.internal.event.ParcelableObjectChangedEvent[])com.google.android.gms.common.internal.safeparcel.a.b(p0,
                                                                                                        v8,
                                                                                                        ParcelableObjectChangedEvent.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v8);
            break;
        }
      }
      if ( p0.dataPosition() != v4 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v4, p0);
      return new com.google.android.gms.drive.realtime.internal.event.ParcelableEventList(v7, v6, v5, v2, v3);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.drive.realtime.internal.event.ParcelableEventList[p0];
    }

}

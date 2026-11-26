// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.realtime.internal.event;

public class a implements android.os.Parcelable.Creator {
    // Methods
    public a()
    {
      super();
    }

    static void a(com.google.android.gms.drive.realtime.internal.event.ParcelableEvent p0, android.os.Parcel p1, int p2)
    {
      int v3; // RETVAL
    
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.b, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.c, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.d);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.e, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.f, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, (android.os.Parcelable)p0.g, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, (android.os.Parcelable)p0.h, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 9, (android.os.Parcelable)p0.i, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 10, (android.os.Parcelable)p0.j, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 11, (android.os.Parcelable)p0.k, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 12, (android.os.Parcelable)p0.l, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 13, (android.os.Parcelable)p0.m, p2, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.drive.realtime.internal.event.ParcelableEvent aT(android.os.Parcel p0)
    {
      int v1;
      int v2;
      String v3;
      String v4;
      boolean v5;
      String v6;
      String v7;
      com.google.android.gms.drive.realtime.internal.event.TextInsertedDetails v8;
      com.google.android.gms.drive.realtime.internal.event.TextDeletedDetails v9;
      com.google.android.gms.drive.realtime.internal.event.ValuesAddedDetails v10;
      com.google.android.gms.drive.realtime.internal.event.ValuesRemovedDetails v11;
      com.google.android.gms.drive.realtime.internal.event.ValuesSetDetails v12;
      com.google.android.gms.drive.realtime.internal.event.ValueChangedDetails v13;
      com.google.android.gms.drive.realtime.internal.event.ReferenceShiftedDetails v14;
      int v15;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = 0;
      v3 = null;
      v4 = null;
      v5 = false;
      v6 = null;
      v7 = null;
      v8 = null;
      v9 = null;
      v10 = null;
      v11 = null;
      v12 = null;
      v13 = null;
      v14 = null;
      while ( p0.dataPosition() < v1 )
      {
        v15 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v15) )
        {
          case 1:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v15);
            break;
          case 2:
            v3 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          case 3:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          case 4:
            v5 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v15);
            break;
          case 5:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          case 6:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          case 7:
            v8 = (com.google.android.gms.drive.realtime.internal.event.TextInsertedDetails)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                                             v15,
                                                                                             TextInsertedDetails.CREATOR);
            break;
          case 8:
            v9 = (com.google.android.gms.drive.realtime.internal.event.TextDeletedDetails)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                                            v15,
                                                                                            TextDeletedDetails.CREATOR);
            break;
          case 9:
            v10 = (com.google.android.gms.drive.realtime.internal.event.ValuesAddedDetails)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                                             v15,
                                                                                             ValuesAddedDetails.CREATOR);
            break;
          case 10:
            v11 = (com.google.android.gms.drive.realtime.internal.event.ValuesRemovedDetails)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                                               v15,
                                                                                               ValuesRemovedDetails.CREATOR);
            break;
          case 11:
            v12 = (com.google.android.gms.drive.realtime.internal.event.ValuesSetDetails)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                                           v15,
                                                                                           ValuesSetDetails.CREATOR);
            break;
          case 12:
            v13 = (com.google.android.gms.drive.realtime.internal.event.ValueChangedDetails)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                                              v15,
                                                                                              ValueChangedDetails.CREATOR);
            break;
          case 13:
            v14 = (com.google.android.gms.drive.realtime.internal.event.ReferenceShiftedDetails)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                                                  v15,
                                                                                                  ReferenceShiftedDetails.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v15);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.drive.realtime.internal.event.ParcelableEvent(v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14);
    }

    private static com.google.android.gms.drive.realtime.internal.event.ParcelableEvent[] bQ(int p0)
    {
      return new com.google.android.gms.drive.realtime.internal.event.ParcelableEvent[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      int v3;
      String v4;
      String v5;
      boolean v6;
      String v7;
      String v8;
      com.google.android.gms.drive.realtime.internal.event.TextInsertedDetails v9;
      com.google.android.gms.drive.realtime.internal.event.TextDeletedDetails v10;
      com.google.android.gms.drive.realtime.internal.event.ValuesAddedDetails v11;
      com.google.android.gms.drive.realtime.internal.event.ValuesRemovedDetails v12;
      com.google.android.gms.drive.realtime.internal.event.ValuesSetDetails v13;
      com.google.android.gms.drive.realtime.internal.event.ValueChangedDetails v14;
      com.google.android.gms.drive.realtime.internal.event.ReferenceShiftedDetails v15;
      int v16;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      v5 = null;
      v6 = false;
      v7 = null;
      v8 = null;
      v9 = null;
      v10 = null;
      v11 = null;
      v12 = null;
      v13 = null;
      v14 = null;
      v15 = null;
      while ( p0.dataPosition() < v2 )
      {
        v16 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v16) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v16);
            break;
          case 2:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v16);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v16);
            break;
          case 4:
            v6 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v16);
            break;
          case 5:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v16);
            break;
          case 6:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v16);
            break;
          case 7:
            v9 = (com.google.android.gms.drive.realtime.internal.event.TextInsertedDetails)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                                             v16,
                                                                                             TextInsertedDetails.CREATOR);
            break;
          case 8:
            v10 = (com.google.android.gms.drive.realtime.internal.event.TextDeletedDetails)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                                             v16,
                                                                                             TextDeletedDetails.CREATOR);
            break;
          case 9:
            v11 = (com.google.android.gms.drive.realtime.internal.event.ValuesAddedDetails)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                                             v16,
                                                                                             ValuesAddedDetails.CREATOR);
            break;
          case 10:
            v12 = (com.google.android.gms.drive.realtime.internal.event.ValuesRemovedDetails)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                                               v16,
                                                                                               ValuesRemovedDetails.CREATOR);
            break;
          case 11:
            v13 = (com.google.android.gms.drive.realtime.internal.event.ValuesSetDetails)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                                           v16,
                                                                                           ValuesSetDetails.CREATOR);
            break;
          case 12:
            v14 = (com.google.android.gms.drive.realtime.internal.event.ValueChangedDetails)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                                              v16,
                                                                                              ValueChangedDetails.CREATOR);
            break;
          case 13:
            v15 = (com.google.android.gms.drive.realtime.internal.event.ReferenceShiftedDetails)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                                                  v16,
                                                                                                  ReferenceShiftedDetails.CREATOR);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v16);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.drive.realtime.internal.event.ParcelableEvent(v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.drive.realtime.internal.event.ParcelableEvent[p0];
    }

}

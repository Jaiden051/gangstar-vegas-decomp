// Decompiled from classes.dex (SourceFile: RoomEntityCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer.realtime;

import com.google.android.gms.games.multiplayer.ParticipantEntity;
public class RoomEntityCreator implements android.os.Parcelable.Creator {
    // Methods
    public RoomEntityCreator()
    {
      super();
    }

    static void a(
            com.google.android.gms.games.multiplayer.realtime.RoomEntity p0,
            android.os.Parcel p1,
            int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 1, p0.a(), false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.m());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.b(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.c());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 4, p0.d());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.e(), false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 6, p0.f());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.q_(), false);
      com.google.android.gms.common.internal.safeparcel.b.b(p1, 8, p0.l(), false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 9, p0.j());
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.games.multiplayer.realtime.RoomEntity[] cA(int p0)
    {
      return new com.google.android.gms.games.multiplayer.realtime.RoomEntity[p0];
    }

    public com.google.android.gms.games.multiplayer.realtime.RoomEntity a(android.os.Parcel p0)
    {
      int v2;
      java.util.ArrayList v3;
      int v4;
      long v5;
      android.os.Bundle v6;
      int v7;
      String v8;
      int v9;
      String v10;
      String v11;
      int v12;
      int v13;
      v2 = 0;
      v3 = null;
      v4 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v5 = 0;
      v6 = null;
      v7 = 0;
      v8 = null;
      v9 = 0;
      v10 = null;
      v11 = null;
      v12 = 0;
      while ( p0.dataPosition() < v4 )
      {
        v13 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v13) )
        {
          case 1:
            v11 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v13);
            break;
          case 2:
            v10 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v13);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v13);
            break;
          case 4:
            v9 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v13);
            break;
          case 5:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v13);
            break;
          case 6:
            v7 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v13);
            break;
          case 7:
            v6 = com.google.android.gms.common.internal.safeparcel.a.q(p0, v13);
            break;
          case 8:
            v3 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v13, ParticipantEntity.CREATOR);
            break;
          case 9:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v13);
            break;
          case 1000:
            v12 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v13);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v13);
            break;
        }
      }
      if ( p0.dataPosition() != v4 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v4, p0);
      return new com.google.android.gms.games.multiplayer.realtime.RoomEntity(v12, v11, v10, v5, v9, v8, v7, v6, v3, v2);
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      return this.a(p0);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.games.multiplayer.realtime.RoomEntity[p0];
    }

}

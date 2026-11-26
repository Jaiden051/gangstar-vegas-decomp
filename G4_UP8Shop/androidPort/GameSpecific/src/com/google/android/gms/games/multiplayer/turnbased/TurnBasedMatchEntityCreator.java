// Decompiled from classes.dex (SourceFile: TurnBasedMatchEntityCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer.turnbased;

import com.google.android.gms.games.GameEntity;
import com.google.android.gms.games.multiplayer.ParticipantEntity;
public class TurnBasedMatchEntityCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public TurnBasedMatchEntityCreator()
    {
      super();
    }

    static void a(
            com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchEntity p0,
            android.os.Parcel p1,
            int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 1, (android.os.Parcelable)p0.a(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.b(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.c(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.d());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.k(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.m());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.n(), false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 8, p0.e());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 10, p0.j());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 11, p0.p());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 12, p0.o(), false);
      com.google.android.gms.common.internal.safeparcel.b.b(p1, 13, p0.l(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 14, p0.r(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 15, p0.s(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 17, p0.u(), false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 16, p0.t());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.A());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 19, p0.w());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 18, p0.f());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 21, p0.y(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 20, p0.v_(), false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchEntity _typed_createFromParcel(
            android.os.Parcel p0)
    {
      int v1;
      int v2;
      com.google.android.gms.games.GameEntity v3;
      String v4;
      String v5;
      long v6;
      String v7;
      long v8;
      String v9;
      int v10;
      int v11;
      int v12;
      byte[] v13;
      java.util.ArrayList v14;
      String v15;
      byte[] v16;
      int v17;
      android.os.Bundle v18;
      int v19;
      boolean v20;
      String v21;
      String v22;
      int v23;
      v1 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v2 = 0;
      v3 = null;
      v4 = null;
      v5 = null;
      v6 = 0;
      v7 = null;
      v8 = 0;
      v9 = null;
      v10 = 0;
      v11 = 0;
      v12 = 0;
      v13 = null;
      v14 = null;
      v15 = null;
      v16 = null;
      v17 = 0;
      v18 = null;
      v19 = 0;
      v20 = false;
      v21 = null;
      v22 = null;
      while ( p0.dataPosition() < v1 )
      {
        v23 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v23) )
        {
          case 1:
            v3 = (com.google.android.gms.games.GameEntity)com.google.android.gms.common.internal.safeparcel.a.a(p0, v23, GameEntity.CREATOR);
            break;
          case 2:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v23);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v23);
            break;
          case 4:
            v6 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v23);
            break;
          case 5:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v23);
            break;
          case 6:
            v8 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v23);
            break;
          case 7:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v23);
            break;
          case 8:
            v10 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v23);
            break;
          case 10:
            v11 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v23);
            break;
          case 11:
            v12 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v23);
            break;
          case 12:
            v13 = com.google.android.gms.common.internal.safeparcel.a.r(p0, v23);
            break;
          case 13:
            v14 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v23, ParticipantEntity.CREATOR);
            break;
          case 14:
            v15 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v23);
            break;
          case 15:
            v16 = com.google.android.gms.common.internal.safeparcel.a.r(p0, v23);
            break;
          case 16:
            v17 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v23);
            break;
          case 17:
            v18 = com.google.android.gms.common.internal.safeparcel.a.q(p0, v23);
            break;
          case 18:
            v19 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v23);
            break;
          case 19:
            v20 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v23);
            break;
          case 20:
            v21 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v23);
            break;
          case 21:
            v22 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v23);
            break;
          case 1000:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v23);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v23);
            break;
        }
      }
      if ( p0.dataPosition() != v1 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v1, p0);
      return new com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchEntity(v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22);
    }

    private static com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchEntity[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchEntity[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      int v2;
      int v3;
      com.google.android.gms.games.GameEntity v4;
      String v5;
      String v6;
      long v7;
      String v8;
      long v9;
      String v10;
      int v11;
      int v12;
      int v13;
      byte[] v14;
      java.util.ArrayList v15;
      String v16;
      byte[] v17;
      int v18;
      android.os.Bundle v19;
      int v20;
      boolean v21;
      String v22;
      String v23;
      int v24;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      v5 = null;
      v6 = null;
      v7 = 0;
      v8 = null;
      v9 = 0;
      v10 = null;
      v11 = 0;
      v12 = 0;
      v13 = 0;
      v14 = null;
      v15 = null;
      v16 = null;
      v17 = null;
      v18 = 0;
      v19 = null;
      v20 = 0;
      v21 = false;
      v22 = null;
      v23 = null;
      while ( p0.dataPosition() < v2 )
      {
        v24 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v24) )
        {
          case 1:
            v4 = (com.google.android.gms.games.GameEntity)com.google.android.gms.common.internal.safeparcel.a.a(p0, v24, GameEntity.CREATOR);
            break;
          case 2:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v24);
            break;
          case 3:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v24);
            break;
          case 4:
            v7 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v24);
            break;
          case 5:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v24);
            break;
          case 6:
            v9 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v24);
            break;
          case 7:
            v10 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v24);
            break;
          case 8:
            v11 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v24);
            break;
          case 10:
            v12 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v24);
            break;
          case 11:
            v13 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v24);
            break;
          case 12:
            v14 = com.google.android.gms.common.internal.safeparcel.a.r(p0, v24);
            break;
          case 13:
            v15 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v24, ParticipantEntity.CREATOR);
            break;
          case 14:
            v16 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v24);
            break;
          case 15:
            v17 = com.google.android.gms.common.internal.safeparcel.a.r(p0, v24);
            break;
          case 16:
            v18 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v24);
            break;
          case 17:
            v19 = com.google.android.gms.common.internal.safeparcel.a.q(p0, v24);
            break;
          case 18:
            v20 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v24);
            break;
          case 19:
            v21 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v24);
            break;
          case 20:
            v22 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v24);
            break;
          case 21:
            v23 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v24);
            break;
          case 1000:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v24);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v24);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchEntity(v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchEntity[p0];
    }

}

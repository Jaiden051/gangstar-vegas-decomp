// Decompiled from classes.dex (SourceFile: ExtendedGameEntityCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.game;

import com.google.android.gms.games.GameEntity;
import com.google.android.gms.games.snapshot.SnapshotMetadataEntity;
public class ExtendedGameEntityCreator implements android.os.Parcelable.Creator {
    // Methods
    public ExtendedGameEntityCreator()
    {
      super();
    }

    static void a(
            com.google.android.gms.games.internal.game.ExtendedGameEntity p0,
            android.os.Parcel p1,
            int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 1, (android.os.Parcelable)p0.o(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.n());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 2, p0.c());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.d());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 4, p0.e());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.f());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.k_());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.j(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.k());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 9, p0.l(), false);
      com.google.android.gms.common.internal.safeparcel.b.b(p1, 10, p0.b(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 11, (android.os.Parcelable)p0.m(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.games.internal.game.ExtendedGameEntity[] co(int p0)
    {
      return new com.google.android.gms.games.internal.game.ExtendedGameEntity[p0];
    }

    public com.google.android.gms.games.internal.game.ExtendedGameEntity a(android.os.Parcel p0)
    {
      int v2;
      int v3;
      com.google.android.gms.games.GameEntity v4;
      int v5;
      boolean v6;
      int v7;
      long v8;
      long v9;
      String v10;
      long v11;
      String v12;
      java.util.ArrayList v13;
      com.google.android.gms.games.snapshot.SnapshotMetadataEntity v14;
      int v15;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      v5 = 0;
      v6 = false;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = null;
      v11 = 0;
      v12 = null;
      v13 = null;
      v14 = null;
      while ( p0.dataPosition() < v2 )
      {
        v15 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v15) )
        {
          case 1:
            v4 = (com.google.android.gms.games.GameEntity)com.google.android.gms.common.internal.safeparcel.a.a(p0, v15, GameEntity.CREATOR);
            break;
          case 2:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v15);
            break;
          case 3:
            v6 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v15);
            break;
          case 4:
            v7 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v15);
            break;
          case 5:
            v8 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v15);
            break;
          case 6:
            v9 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v15);
            break;
          case 7:
            v10 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          case 8:
            v11 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v15);
            break;
          case 9:
            v12 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v15);
            break;
          case 10:
            v13 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v15, (android.os.Parcelable.Creator)GameBadgeEntity.CREATOR);
            break;
          case 11:
            v14 = (com.google.android.gms.games.snapshot.SnapshotMetadataEntity)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                                  v15,
                                                                                  (android.os.Parcelable.Creator)SnapshotMetadataEntity.CREATOR);
            break;
          case 1000:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v15);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v15);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.games.internal.game.ExtendedGameEntity(v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14);
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      return this.a(p0);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.games.internal.game.ExtendedGameEntity[p0];
    }

}

// Decompiled from classes.dex (SourceFile: InvitationEntityCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer;

import com.google.android.gms.games.GameEntity;
public class InvitationEntityCreator implements android.os.Parcelable.Creator {
    // Methods
    public InvitationEntityCreator()
    {
      super();
    }

    static void a(
            com.google.android.gms.games.multiplayer.InvitationEntity p0,
            android.os.Parcel p1,
            int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 1, (android.os.Parcelable)p0.c(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.d(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.f());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 4, p0.o_());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, (android.os.Parcelable)p0.e(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.b(p1, 6, p0.l(), false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 7, p0.j());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 8, p0.k());
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.games.multiplayer.InvitationEntity[] cx(int p0)
    {
      return new com.google.android.gms.games.multiplayer.InvitationEntity[p0];
    }

    public com.google.android.gms.games.multiplayer.InvitationEntity a(android.os.Parcel p0)
    {
      java.util.ArrayList v2;
      int v3;
      int v4;
      long v5;
      int v6;
      com.google.android.gms.games.multiplayer.ParticipantEntity v7;
      int v8;
      String v9;
      com.google.android.gms.games.GameEntity v10;
      int v11;
      int v12;
      v2 = null;
      v3 = 0;
      v4 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v5 = 0;
      v6 = 0;
      v7 = null;
      v8 = 0;
      v9 = null;
      v10 = null;
      v11 = 0;
      while ( p0.dataPosition() < v4 )
      {
        v12 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v12) )
        {
          case 1:
            v10 = (com.google.android.gms.games.GameEntity)com.google.android.gms.common.internal.safeparcel.a.a(p0, v12, GameEntity.CREATOR);
            break;
          case 2:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v12);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v12);
            break;
          case 4:
            v8 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v12);
            break;
          case 5:
            v7 = (com.google.android.gms.games.multiplayer.ParticipantEntity)com.google.android.gms.common.internal.safeparcel.a.a(p0, v12, ParticipantEntity.CREATOR);
            break;
          case 6:
            v2 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v12, ParticipantEntity.CREATOR);
            break;
          case 7:
            v6 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v12);
            break;
          case 8:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v12);
            break;
          case 1000:
            v11 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v12);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v12);
            break;
        }
      }
      if ( p0.dataPosition() != v4 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v4, p0);
      return new com.google.android.gms.games.multiplayer.InvitationEntity(v11, v10, v9, v5, v8, v7, v2, v6, v3);
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      return this.a(p0);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.games.multiplayer.InvitationEntity[p0];
    }

}

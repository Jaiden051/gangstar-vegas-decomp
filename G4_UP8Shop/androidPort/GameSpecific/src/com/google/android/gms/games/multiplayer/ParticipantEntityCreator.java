// Decompiled from classes.dex (SourceFile: ParticipantEntityCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer;

import android.net.Uri;
import com.google.android.gms.games.PlayerEntity;
public class ParticipantEntityCreator implements android.os.Parcelable.Creator {
    // Methods
    public ParticipantEntityCreator()
    {
      super();
    }

    static void a(
            com.google.android.gms.games.multiplayer.ParticipantEntity p0,
            android.os.Parcel p1,
            int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 1, p0.l(), false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.o());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.e(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.f(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.j(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 5, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.b(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.d());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, (android.os.Parcelable)p0.m(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 9, p0.c());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 10, (android.os.Parcelable)p0.n(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 11, p0.p_(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 12, p0.k(), false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.games.multiplayer.ParticipantEntity[] cy(int p0)
    {
      return new com.google.android.gms.games.multiplayer.ParticipantEntity[p0];
    }

    public com.google.android.gms.games.multiplayer.ParticipantEntity a(android.os.Parcel p0)
    {
      int v2;
      int v3;
      String v4;
      String v5;
      android.net.Uri v6;
      android.net.Uri v7;
      int v8;
      String v9;
      boolean v10;
      com.google.android.gms.games.PlayerEntity v11;
      int v12;
      com.google.android.gms.games.multiplayer.ParticipantResult v13;
      String v14;
      String v15;
      int v16;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = 0;
      v9 = null;
      v10 = false;
      v11 = null;
      v12 = 0;
      v13 = null;
      v14 = null;
      v15 = null;
      while ( p0.dataPosition() < v2 )
      {
        v16 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v16) )
        {
          case 1:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v16);
            break;
          case 2:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v16);
            break;
          case 3:
            v6 = (android.net.Uri)com.google.android.gms.common.internal.safeparcel.a.a(p0, v16, Uri.CREATOR);
            break;
          case 4:
            v7 = (android.net.Uri)com.google.android.gms.common.internal.safeparcel.a.a(p0, v16, Uri.CREATOR);
            break;
          case 5:
            v8 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v16);
            break;
          case 6:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v16);
            break;
          case 7:
            v10 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v16);
            break;
          case 8:
            v11 = (com.google.android.gms.games.PlayerEntity)com.google.android.gms.common.internal.safeparcel.a.a(p0, v16, PlayerEntity.CREATOR);
            break;
          case 9:
            v12 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v16);
            break;
          case 10:
            v13 = (com.google.android.gms.games.multiplayer.ParticipantResult)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                                v16,
                                                                                (android.os.Parcelable.Creator)ParticipantResult.CREATOR);
            break;
          case 11:
            v14 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v16);
            break;
          case 12:
            v15 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v16);
            break;
          case 1000:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v16);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v16);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.games.multiplayer.ParticipantEntity(v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15);
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      return this.a(p0);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.games.multiplayer.ParticipantEntity[p0];
    }

}

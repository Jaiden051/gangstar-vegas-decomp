// Decompiled from classes.dex (SourceFile: PlayerEntityCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games;

import android.net.Uri;
import com.google.android.gms.games.internal.player.MostRecentGameInfoEntity;
public class PlayerEntityCreator implements android.os.Parcelable.Creator {
    // Methods
    public PlayerEntityCreator()
    {
      super();
    }

    static void a(com.google.android.gms.games.PlayerEntity p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 1, p0.a(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.b(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.d(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.g_(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.k());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 6, p0.m());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.l());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.e(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 9, p0.j(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 14, p0.o(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 15, (android.os.Parcelable)p0.q(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 17, p0.n());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 16, (android.os.Parcelable)p0.p(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.r());
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.games.PlayerEntity[] cc(int p0)
    {
      return new com.google.android.gms.games.PlayerEntity[p0];
    }

    public com.google.android.gms.games.PlayerEntity a(android.os.Parcel p0)
    {
      int v2;
      int v3;
      String v4;
      String v5;
      android.net.Uri v6;
      android.net.Uri v7;
      long v8;
      int v9;
      long v10;
      String v11;
      String v12;
      String v13;
      com.google.android.gms.games.internal.player.MostRecentGameInfoEntity v14;
      com.google.android.gms.games.PlayerLevelInfo v15;
      boolean v16;
      int v17;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = null;
      v12 = null;
      v13 = null;
      v14 = null;
      v15 = null;
      v16 = false;
      while ( p0.dataPosition() < v2 )
      {
        v17 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v17) )
        {
          case 1:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v17);
            break;
          case 2:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v17);
            break;
          case 3:
            v6 = (android.net.Uri)com.google.android.gms.common.internal.safeparcel.a.a(p0, v17, Uri.CREATOR);
            break;
          case 4:
            v7 = (android.net.Uri)com.google.android.gms.common.internal.safeparcel.a.a(p0, v17, Uri.CREATOR);
            break;
          case 5:
            v8 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v17);
            break;
          case 6:
            v9 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v17);
            break;
          case 7:
            v10 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v17);
            break;
          case 8:
            v11 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v17);
            break;
          case 9:
            v12 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v17);
            break;
          case 14:
            v13 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v17);
            break;
          case 15:
            v14 = (com.google.android.gms.games.internal.player.MostRecentGameInfoEntity)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                                           v17,
                                                                                           (android.os.Parcelable.Creator)MostRecentGameInfoEntity.CREATOR);
            break;
          case 16:
            v15 = (com.google.android.gms.games.PlayerLevelInfo)com.google.android.gms.common.internal.safeparcel.a.a(p0,
                                                                  v17,
                                                                  (android.os.Parcelable.Creator)PlayerLevelInfo.CREATOR);
            break;
          case 17:
            v16 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v17);
            break;
          case 1000:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v17);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v17);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.games.PlayerEntity(v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16);
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      return this.a(p0);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.games.PlayerEntity[p0];
    }

}

// Decompiled from classes.dex (SourceFile: GameBadgeEntityCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.game;

import android.net.Uri;
public class GameBadgeEntityCreator implements android.os.Parcelable.Creator {
    // Methods
    public GameBadgeEntityCreator()
    {
      super();
    }

    static void a(
            com.google.android.gms.games.internal.game.GameBadgeEntity p0,
            android.os.Parcel p1,
            int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.e());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.b(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.c(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.d(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.games.internal.game.GameBadgeEntity[] cq(int p0)
    {
      return new com.google.android.gms.games.internal.game.GameBadgeEntity[p0];
    }

    public com.google.android.gms.games.internal.game.GameBadgeEntity a(android.os.Parcel p0)
    {
      int v2;
      android.net.Uri v3;
      int v4;
      String v5;
      String v6;
      int v7;
      int v8;
      v2 = 0;
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
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            break;
          case 2:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v8);
            break;
          case 3:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v8);
            break;
          case 4:
            v3 = (android.net.Uri)com.google.android.gms.common.internal.safeparcel.a.a(p0, v8, Uri.CREATOR);
            break;
          case 1000:
            v7 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v8);
            break;
        }
      }
      if ( p0.dataPosition() != v4 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v4, p0);
      return new com.google.android.gms.games.internal.game.GameBadgeEntity(v7, v2, v6, v5, v3);
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      return this.a(p0);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.games.internal.game.GameBadgeEntity[p0];
    }

}

// Decompiled from classes.dex (SourceFile: GameEntityCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games;

import android.net.Uri;
public class GameEntityCreator implements android.os.Parcelable.Creator {
    // Methods
    public GameEntityCreator()
    {
      super();
    }

    static void a(com.google.android.gms.games.GameEntity p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 1, p0.a(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.b(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.c(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, p0.d(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 5, p0.e(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 6, p0.f(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 7, p0.f_(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 8, p0.k(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 9, p0.m(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 10, p0.o());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 11, p0.r());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 12, p0.s(), false);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 13, p0.t());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 14, p0.u());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 15, p0.v());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 17, p0.x());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 16, p0.w());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.z());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 19, p0.l(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 18, p0.j(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 21, p0.p());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 20, p0.n(), false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 23, p0.y());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 22, p0.q());
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.games.GameEntity[] cb(int p0)
    {
      return new com.google.android.gms.games.GameEntity[p0];
    }

    public com.google.android.gms.games.GameEntity a(android.os.Parcel p0)
    {
      int v2;
      int v3;
      String v4;
      String v5;
      String v6;
      String v7;
      String v8;
      String v9;
      android.net.Uri v10;
      android.net.Uri v11;
      android.net.Uri v12;
      boolean v13;
      boolean v14;
      String v15;
      int v16;
      int v17;
      int v18;
      boolean v19;
      boolean v20;
      String v21;
      String v22;
      String v23;
      boolean v24;
      boolean v25;
      boolean v26;
      int v27;
      v2 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v3 = 0;
      v4 = null;
      v5 = null;
      v6 = null;
      v7 = null;
      v8 = null;
      v9 = null;
      v10 = null;
      v11 = null;
      v12 = null;
      v13 = false;
      v14 = false;
      v15 = null;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = false;
      v20 = false;
      v21 = null;
      v22 = null;
      v23 = null;
      v24 = false;
      v25 = false;
      v26 = false;
      while ( p0.dataPosition() < v2 )
      {
        v27 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v27) )
        {
          case 1:
            v4 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v27);
            break;
          case 2:
            v5 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v27);
            break;
          case 3:
            v6 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v27);
            break;
          case 4:
            v7 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v27);
            break;
          case 5:
            v8 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v27);
            break;
          case 6:
            v9 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v27);
            break;
          case 7:
            v10 = (android.net.Uri)com.google.android.gms.common.internal.safeparcel.a.a(p0, v27, Uri.CREATOR);
            break;
          case 8:
            v11 = (android.net.Uri)com.google.android.gms.common.internal.safeparcel.a.a(p0, v27, Uri.CREATOR);
            break;
          case 9:
            v12 = (android.net.Uri)com.google.android.gms.common.internal.safeparcel.a.a(p0, v27, Uri.CREATOR);
            break;
          case 10:
            v13 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v27);
            break;
          case 11:
            v14 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v27);
            break;
          case 12:
            v15 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v27);
            break;
          case 13:
            v16 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v27);
            break;
          case 14:
            v17 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v27);
            break;
          case 15:
            v18 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v27);
            break;
          case 16:
            v19 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v27);
            break;
          case 17:
            v20 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v27);
            break;
          case 18:
            v21 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v27);
            break;
          case 19:
            v22 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v27);
            break;
          case 20:
            v23 = com.google.android.gms.common.internal.safeparcel.a.o(p0, v27);
            break;
          case 21:
            v24 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v27);
            break;
          case 22:
            v25 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v27);
            break;
          case 23:
            v26 = com.google.android.gms.common.internal.safeparcel.a.c(p0, v27);
            break;
          case 1000:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v27);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v27);
            break;
        }
      }
      if ( p0.dataPosition() != v2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v2, p0);
      return new com.google.android.gms.games.GameEntity(v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26);
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      return this.a(p0);
    }

    /* synthetic */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.games.GameEntity[p0];
    }

}

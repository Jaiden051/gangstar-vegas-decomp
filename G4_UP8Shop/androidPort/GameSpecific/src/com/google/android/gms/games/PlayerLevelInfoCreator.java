// Decompiled from classes.dex (SourceFile: PlayerLevelInfoCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games;

public class PlayerLevelInfoCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public PlayerLevelInfoCreator()
    {
      super();
    }

    static void a(com.google.android.gms.games.PlayerLevelInfo p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 1, p0.b());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.c());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, (android.os.Parcelable)p0.d(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 4, (android.os.Parcelable)p0.e(), p2, false);
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.games.PlayerLevelInfo _typed_createFromParcel(
            android.os.Parcel p0)
    {
      long v1;
      com.google.android.gms.games.PlayerLevel v2;
      int v3;
      int v4;
      com.google.android.gms.games.PlayerLevel v5;
      long v6;
      int v7;
      v1 = 0;
      v2 = null;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = 0;
      v5 = null;
      v6 = 0;
      while ( p0.dataPosition() < v3 )
      {
        v7 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v7) )
        {
          case 1:
            v6 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v7);
            break;
          case 2:
            v1 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v7);
            break;
          case 3:
            v5 = (com.google.android.gms.games.PlayerLevel)com.google.android.gms.common.internal.safeparcel.a.a(p0, v7, (android.os.Parcelable.Creator)PlayerLevel.CREATOR);
            break;
          case 4:
            v2 = (com.google.android.gms.games.PlayerLevel)com.google.android.gms.common.internal.safeparcel.a.a(p0, v7, (android.os.Parcelable.Creator)PlayerLevel.CREATOR);
            break;
          case 1000:
            v4 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v7);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.games.PlayerLevelInfo(v4, v6, v1, v5, v2);
    }

    private static com.google.android.gms.games.PlayerLevelInfo[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.games.PlayerLevelInfo[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      long v2;
      com.google.android.gms.games.PlayerLevel v3;
      int v4;
      int v5;
      long v6;
      com.google.android.gms.games.PlayerLevel v7;
      int v8;
      v2 = 0;
      v3 = null;
      v4 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v5 = 0;
      v6 = 0;
      v7 = null;
      while ( p0.dataPosition() < v4 )
      {
        v8 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v8) )
        {
          case 1:
            v6 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v8);
            break;
          case 2:
            v2 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v8);
            break;
          case 3:
            v7 = (com.google.android.gms.games.PlayerLevel)com.google.android.gms.common.internal.safeparcel.a.a(p0, v8, (android.os.Parcelable.Creator)PlayerLevel.CREATOR);
            break;
          case 4:
            v3 = (com.google.android.gms.games.PlayerLevel)com.google.android.gms.common.internal.safeparcel.a.a(p0, v8, (android.os.Parcelable.Creator)PlayerLevel.CREATOR);
            break;
          case 1000:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v8);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v8);
            break;
        }
      }
      if ( p0.dataPosition() != v4 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v4, p0);
      return new com.google.android.gms.games.PlayerLevelInfo(v5, v6, v2, v7, v3);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.games.PlayerLevelInfo[p0];
    }

}

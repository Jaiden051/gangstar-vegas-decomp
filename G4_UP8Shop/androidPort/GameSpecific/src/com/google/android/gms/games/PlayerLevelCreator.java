// Decompiled from classes.dex (SourceFile: PlayerLevelCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games;

public class PlayerLevelCreator implements android.os.Parcelable.Creator {
    // Fields
    public static int a;

    // Methods
    public PlayerLevelCreator()
    {
      super();
    }

    static void a(com.google.android.gms.games.PlayerLevel p0, android.os.Parcel p1, int p2)
    {
      int v3;
      v3 = com.google.android.gms.common.internal.safeparcel.b.C(p1);
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1, p0.b());
      com.google.android.gms.common.internal.safeparcel.b.c(p1, 1000, p0.a());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 2, p0.c());
      com.google.android.gms.common.internal.safeparcel.b.a(p1, 3, p0.d());
      com.google.android.gms.common.internal.safeparcel.b.G(p1, v3);
    }

    private static com.google.android.gms.games.PlayerLevel _typed_createFromParcel(android.os.Parcel p0)
    {
      long v1;
      int v2;
      int v3;
      long v4;
      int v5;
      int v6;
      v1 = 0;
      v2 = 0;
      v3 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v4 = 0;
      v5 = 0;
      while ( p0.dataPosition() < v3 )
      {
        v6 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v6) )
        {
          case 1:
            v2 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          case 2:
            v4 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v6);
            break;
          case 3:
            v1 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v6);
            break;
          case 1000:
            v5 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v6);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v6);
            break;
        }
      }
      if ( p0.dataPosition() != v3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v3, p0);
      return new com.google.android.gms.games.PlayerLevel(v5, v2, v4, v1);
    }

    private static com.google.android.gms.games.PlayerLevel[] _typed_newArray(int p0)
    {
      return new com.google.android.gms.games.PlayerLevel[p0];
    }

    /* synthetic */ public Object createFromParcel(android.os.Parcel p0)
    {
      long v2;
      int v3;
      int v4;
      long v5;
      int v6;
      int v7;
      v2 = 0;
      v3 = 0;
      v4 = com.google.android.gms.common.internal.safeparcel.a.B(p0);
      v5 = 0;
      v6 = 0;
      while ( p0.dataPosition() < v4 )
      {
        v7 = com.google.android.gms.common.internal.safeparcel.a.A(p0);
        switch ( com.google.android.gms.common.internal.safeparcel.a.ar(v7) )
        {
          case 1:
            v3 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          case 2:
            v5 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v7);
            break;
          case 3:
            v2 = com.google.android.gms.common.internal.safeparcel.a.i(p0, v7);
            break;
          case 1000:
            v6 = com.google.android.gms.common.internal.safeparcel.a.g(p0, v7);
            break;
          default:
            com.google.android.gms.common.internal.safeparcel.a.b(p0, v7);
            break;
        }
      }
      if ( p0.dataPosition() != v4 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Overread allowed size end=" + v4, p0);
      return new com.google.android.gms.games.PlayerLevel(v6, v3, v5, v2);
    }

    /* bridge */ public Object[] newArray(int p0)
    {
      return new com.google.android.gms.games.PlayerLevel[p0];
    }

}

// Decompiled from classes.dex (SourceFile: LeaderboardCollection.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.constants;

public final class LeaderboardCollection {
    // Methods
    private LeaderboardCollection()
    {
      super();
    }

    public static String cm(int p0)
    {
      String v1;
      switch ( p0 )
      {
        case 0:
          v1 = "PUBLIC";
          break;
        case 1:
          v1 = "SOCIAL";
          break;
        default:
          throw new IllegalArgumentException("Unknown leaderboard collection: " + p0);
      }
      return v1;
    }

}

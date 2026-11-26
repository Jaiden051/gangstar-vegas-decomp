// Decompiled from classes.dex (SourceFile: TurnBasedMatchTurnStatus.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.constants;

import com.google.android.gms.games.internal.GamesLog;
public final class TurnBasedMatchTurnStatus {
    // Methods
    public TurnBasedMatchTurnStatus()
    {
      super();
    }

    public static String cm(int p0)
    {
      String v1;
      switch ( p0 )
      {
        case 0:
          v1 = "TURN_STATUS_INVITED";
          break;
        case 1:
          v1 = "TURN_STATUS_MY_TURN";
          break;
        case 2:
          v1 = "TURN_STATUS_THEIR_TURN";
          break;
        case 3:
          v1 = "TURN_STATUS_COMPLETE";
          break;
        default:
          GamesLog.k("MatchTurnStatus", "Unknown match turn status: " + p0);
          v1 = "TURN_STATUS_UNKNOWN";
          break;
      }
      return v1;
    }

}

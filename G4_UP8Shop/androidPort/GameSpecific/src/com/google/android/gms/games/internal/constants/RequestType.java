// Decompiled from classes.dex (SourceFile: RequestType.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.constants;

import com.google.android.gms.games.internal.GamesLog;
public final class RequestType {
    // Methods
    private RequestType()
    {
      super();
    }

    public static String cm(int p0)
    {
      String v1;
      switch ( p0 )
      {
        case 1:
          v1 = "GIFT";
          break;
        case 2:
          v1 = "WISH";
          break;
        default:
          GamesLog.k("RequestType", "Unknown request type: " + p0);
          v1 = "UNKNOWN_TYPE";
          break;
      }
      return v1;
    }

}

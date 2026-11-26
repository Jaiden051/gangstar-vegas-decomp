// Decompiled from classes.dex (SourceFile: MatchResult.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.constants;

public final class MatchResult {
    // Methods
    public MatchResult()
    {
      super();
    }

    public static boolean isValid(int p0)
    {
      boolean v1;
      switch ( p0 )
      {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
          v1 = true;
          break;
        default:
          v1 = false;
          break;
      }
      return v1;
    }

}

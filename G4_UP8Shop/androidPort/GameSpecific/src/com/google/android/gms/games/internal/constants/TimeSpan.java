// Decompiled from classes.dex (SourceFile: TimeSpan.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.constants;

public final class TimeSpan {
    // Methods
    private TimeSpan()
    {
      super();
      throw new AssertionError("Uninstantiable");
    }

    public static String cm(int p0)
    {
      String v1;
      switch ( p0 )
      {
        case 0:
          v1 = "DAILY";
          break;
        case 1:
          v1 = "WEEKLY";
          break;
        case 2:
          v1 = "ALL_TIME";
          break;
        default:
          throw new IllegalArgumentException("Unknown time span " + p0);
      }
      return v1;
    }

}

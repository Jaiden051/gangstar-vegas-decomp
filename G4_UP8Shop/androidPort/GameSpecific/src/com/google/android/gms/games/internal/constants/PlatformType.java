// Decompiled from classes.dex (SourceFile: PlatformType.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.constants;

public final class PlatformType {
    // Methods
    private PlatformType()
    {
      super();
    }

    public static String cm(int p0)
    {
      String v1;
      switch ( p0 )
      {
        case 0:
          v1 = "ANDROID";
          break;
        case 1:
          v1 = "IOS";
          break;
        case 2:
          v1 = "WEB_APP";
          break;
        default:
          throw new IllegalArgumentException("Unknown platform type: " + p0);
      }
      return v1;
    }

}

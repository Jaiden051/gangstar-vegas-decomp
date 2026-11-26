// Decompiled from classes.dex (SourceFile: MRAIDOrientationProperties.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.mraid.properties;

import java.util.Arrays;
public final class MRAIDOrientationProperties {
    // Fields
    public static int FORCE_ORIENTATION_LANDSCAPE;
    public static int FORCE_ORIENTATION_NONE;
    public static int FORCE_ORIENTATION_PORTRAIT;
    public boolean allowOrientationChange;
    public int forceOrientation;

    // Methods
    public MRAIDOrientationProperties()
    {
      this(true, 2);
    }

    public MRAIDOrientationProperties(boolean p0, int p1)
    {
      super();
      this.allowOrientationChange = p0;
      this.forceOrientation = p1;
    }

    public static int forceOrientationFromString(String p0)
    {
      String[] v1;
      int v2;
      v1 = new String[3];
      v1[0] = "portrait";
      v1[1] = "landscape";
      v1[2] = "none";
      v2 = Arrays.asList(v1).indexOf(p0);
      if ( v2 == -1 )
        return 2;
      return v2;
    }

    public final String forceOrientationString()
    {
      String v1;
      switch ( this.forceOrientation )
      {
        case 0:
          v1 = "portrait";
          break;
        case 1:
          v1 = "landscape";
          break;
        case 2:
          v1 = "none";
          break;
        default:
          v1 = "error";
          break;
      }
      return v1;
    }

}

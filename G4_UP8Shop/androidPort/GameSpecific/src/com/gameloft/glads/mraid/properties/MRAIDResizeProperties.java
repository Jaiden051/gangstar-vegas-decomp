// Decompiled from classes.dex (SourceFile: MRAIDResizeProperties.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.mraid.properties;

import java.util.Arrays;
public final class MRAIDResizeProperties {
    // Fields
    public static int CUSTOM_CLOSE_POSITION_BOTTOM_CENTER;
    public static int CUSTOM_CLOSE_POSITION_BOTTOM_LEFT;
    public static int CUSTOM_CLOSE_POSITION_BOTTOM_RIGHT;
    public static int CUSTOM_CLOSE_POSITION_CENTER;
    public static int CUSTOM_CLOSE_POSITION_TOP_CENTER;
    public static int CUSTOM_CLOSE_POSITION_TOP_LEFT;
    public static int CUSTOM_CLOSE_POSITION_TOP_RIGHT;
    public boolean allowOffscreen;
    public int customClosePosition;
    public int height;
    public int offsetX;
    public int offsetY;
    public int width;

    // Methods
    public MRAIDResizeProperties()
    {
      this(0, 0, 0, 0, 2, true);
    }

    public MRAIDResizeProperties(int p0, int p1, int p2, int p3, int p4, boolean p5)
    {
      super();
      this.width = p0;
      this.height = p1;
      this.offsetX = p2;
      this.offsetY = p3;
      this.customClosePosition = p4;
      this.allowOffscreen = p5;
    }

    public static int customClosePositionFromString(String p0)
    {
      String[] v1;
      int v2;
      v1 = new String[7];
      v1[0] = "top-left";
      v1[1] = "top-center";
      v1[2] = "top-right";
      v1[3] = "center";
      v1[4] = "bottom-left";
      v1[5] = "bottom-center";
      v1[6] = "bottom-right";
      v2 = Arrays.asList(v1).indexOf(p0);
      if ( v2 == -1 )
        return 2;
      return v2;
    }

}

// Decompiled from classes.dex (SourceFile: MRAIDParser.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.mraid.internal;

import java.util.Arrays;
public class MRAIDParser {
    // Fields
    private static java.lang.String TAG;

    // Methods
    public MRAIDParser()
    {
      super();
    }

    private boolean checkParamsForCommand(String p0, java.util.Map<String, String> p1)
    {
      boolean v3;
      v3 = true;
      if ( p0.equals("createCalendarEvent") )
        return p1.containsKey("eventJSON");
      if ( p0.equals("open") || p0.equals("playVideo") || p0.equals("storePicture") )
        return p1.containsKey("url");
      if ( p0.equals("setOrientationProperties") )
      {
        if ( !p1.containsKey("allowOrientationChange") || !p1.containsKey("forceOrientation") )
          return false;
      }
      else if ( p0.equals("setResizeProperties") )
      {
        if ( !p1.containsKey("width")
          || !p1.containsKey("height")
          || !p1.containsKey("offsetX")
          || !p1.containsKey("offsetY")
          || !p1.containsKey("customClosePosition")
          || !p1.containsKey("allowOffscreen") )
        {
          return false;
        }
      }
      else if ( p0.equals("useCustomClose") )
      {
        return p1.containsKey("useCustomClose");
      }
      return v3;
    }

    private boolean isValidCommand(String p0)
    {
      String[] v2;
      v2 = new String[10];
      v2[0] = "close";
      v2[1] = "createCalendarEvent";
      v2[2] = "expand";
      v2[3] = "open";
      v2[4] = "playVideo";
      v2[5] = "resize";
      v2[6] = "setOrientationProperties";
      v2[7] = "setResizeProperties";
      v2[8] = "storePicture";
      v2[9] = "useCustomClose";
      return Arrays.asList(v2).contains(p0);
    }

    public java.util.Map<String, String> parseCommandUrl(String p0)
    {
      String v2;
      java.util.Map v3;
      int v4; // RETVAL
      int v5;
      String v6;
      String[] v7;
      int v8;
      int i;
      String v10;
      int v11;
      java.util.HashMap v14;
      MRAIDLog.d("MRAIDParser", "parseCommandUrl " + p0);
      v2 = p0.substring(8);
      v3 = new java.util.HashMap();
      v4 = v2.indexOf(63);
      v5 = v4;
      if ( v4 == -1 )
      {
        v6 = v2;
      }
      else
      {
        v6 = v2.substring(0, v4);
        v7 = v2.substring(v5 + 1).split("&");
        v8 = v7.length;
        for ( i = 0; i < v8; ++i )
        {
          v10 = v7[i];
          v11 = v10.indexOf(61);
          v3.put(v10.substring(0, v11), v10.substring(v11 + 1));
        }
      }
      if ( this.isValidCommand(v6) )
      {
        if ( this.checkParamsForCommand(v6, v3) )
        {
          v14 = new java.util.HashMap();
          v14.put("command", v6);
          v14.putAll(v3);
          return v14;
        }
        else
        {
          MRAIDLog.w("command URL " + p0 + " is missing parameters");
          return null;
        }
      }
      else
      {
        MRAIDLog.w("command " + v6 + " is unknown");
        return null;
      }
    }

}

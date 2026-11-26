// Decompiled from classes.dex (SourceFile: DontDisturbPolicy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.PushNotification;

import java.util.Calendar;
public class DontDisturbPolicy {
    // Fields
    static boolean a;
    static int b;
    static int c;

    // Methods
    public DontDisturbPolicy()
    {
      super();
    }

    static boolean isDontDisturbEnable(android.content.Context p0)
    {
      return Prefs.isDontDisturbEnable(p0);
    }

    static boolean isDontDisturbeTime(android.content.Context p0)
    {
      java.util.Calendar Instance;
      int v2;
      boolean v3;
      v3 = false;
      if ( Prefs.isDontDisturbEnable(p0) )
      {
        Instance = Calendar.getInstance();
        v2 = Instance.get(12) + 60 * Instance.get(11);
        if ( v2 <= 480 || v2 >= 1380 )
          return true;
      }
      return v3;
    }

    static void setDontDisturbEnable(android.content.Context p0, boolean p1)
    {
      Prefs.setDontDisturbEnable(p0, p1);
    }

}

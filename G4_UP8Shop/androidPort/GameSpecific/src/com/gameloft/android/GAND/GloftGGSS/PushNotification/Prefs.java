// Decompiled from classes.dex (SourceFile: Prefs.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.PushNotification;

public final class Prefs {
    // Fields
    static java.lang.String a;
    static java.lang.String b;
    static java.lang.String c;
    static java.lang.String d;
    static java.lang.String e;
    static java.lang.String f;

    // Methods
    public Prefs()
    {
      super();
    }

    public static android.content.SharedPreferences get(android.content.Context p0)
    {
      return p0.getSharedPreferences("GLPN", 0);
    }

    public static int getDontDisturbEndTime(android.content.Context p0)
    {
      return get(p0).getInt("pn_dont_disturbe_end", 480);
    }

    public static int getDontDisturbStartTime(android.content.Context p0)
    {
      return get(p0).getInt("pn_dont_disturbe_start", 1380);
    }

    public static void init(android.content.Context p0)
    {
      android.content.SharedPreferences v1;
      android.content.SharedPreferences.Editor v2;
      v1 = get(p0);
      v2 = v1.edit();
      if ( !v1.contains("enablePushNotification") )
        v2.putBoolean("enablePushNotification", true);
      if ( !v1.contains("pn_local_enable") )
        v2.putBoolean("pn_local_enable", true);
      if ( !v1.contains("pn_remote_enable") )
        v2.putBoolean("pn_remote_enable", true);
      if ( !v1.contains("pn_dont_disturbe_enable") )
      {
        v2.putBoolean("pn_dont_disturbe_enable", true);
        v2.putInt("pn_dont_disturbe_start", 1380);
        v2.putInt("pn_dont_disturbe_end", 480);
      }
      v2.commit();
    }

    public static boolean isDontDisturbEnable(android.content.Context p0)
    {
      return get(p0).getBoolean("pn_dont_disturbe_enable", true);
    }

    public static boolean isEnableLocal(android.content.Context p0)
    {
      return get(p0).getBoolean("pn_local_enable", true);
    }

    public static boolean isEnableRemote(android.content.Context p0)
    {
      return get(p0).getBoolean("pn_remote_enable", true);
    }

    public static boolean isEnabled(android.content.Context p0)
    {
      return get(p0).getBoolean("enablePushNotification", true);
    }

    public static void setDontDisturbEnable(android.content.Context p0, boolean p1)
    {
      android.content.SharedPreferences.Editor v2;
      v2 = get(p0).edit();
      v2.putBoolean("pn_dont_disturbe_enable", p1);
      v2.commit();
    }

    public static void setEnabled(android.content.Context p0, boolean p1)
    {
      android.content.SharedPreferences.Editor v2;
      v2 = get(p0).edit();
      v2.putBoolean("enablePushNotification", p1);
      v2.commit();
    }

    public static void setEnabledLocal(android.content.Context p0, boolean p1)
    {
      android.content.SharedPreferences.Editor v2;
      v2 = get(p0).edit();
      v2.putBoolean("pn_local_enable", p1);
      v2.commit();
    }

    public static void setEnabledRemote(android.content.Context p0, boolean p1)
    {
      android.content.SharedPreferences.Editor v2;
      v2 = get(p0).edit();
      v2.putBoolean("pn_remote_enable", p1);
      v2.commit();
    }

}

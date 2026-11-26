// Decompiled from classes.dex (SourceFile: Tracker.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer.utils;

public class Tracker {
    // Fields
    public static java.lang.String a;
    public static java.lang.String b;
    public static java.lang.String c;
    public static java.lang.String d;
    public static java.lang.String e;
    public static java.lang.String f;
    public static java.lang.String g;
    public static java.lang.String h;
    public static java.lang.String i;
    public static java.lang.String j;
    public static int k;
    public static int l;
    public static int m;
    static com.gameloft.android.GAND.GloftGGSS.GLUtils.Device n;
    static com.gameloft.android.GAND.GloftGGSS.GLUtils.XPlayer o;
    public static boolean p;
    public static int q;
    public static int r;
    public static int s;
    public static int t;
    public static final java.lang.Object u;
    private static java.lang.String v;

    // Methods
    static
    {
      p = false;
      v = "";
      u = new Object();
    }

    public Tracker()
    {
      super();
    }

    public static void UnsupportedDeviceTracker()
    {
      sendInstallerTrackingOptions(0, 3, false, false, "");
    }

    /* synthetic */ static String access$000(int p0, int p1, boolean p2, boolean p3, String p4)
    {
      return getQryRequestType(p0, p1, p2, p3, p4);
    }

    /* synthetic */ static String access$100()
    {
      return v;
    }

    public static void downloadFinishTracker(int p0, boolean p1)
    {
      sendInstallerTrackingOptions(p0, 2, p1, false, "");
    }

    public static void downloadStartTracker(int p0, boolean p1)
    {
      sendInstallerTrackingOptions(p0, 1, p1, false, "");
    }

    private static String getQryRequestType(int p0, int p1, boolean p2, boolean p3, String p4)
    {
      String v5;
      StringBuilder v7; // RETVAL
      String v8;
      StringBuilder v9; // RETVAL
      String v10;
      String v11; // RETVAL
    
      v5 = "&action=";
      switch ( p1 )
      {
        case 0:
          v7 = new StringBuilder().append("&action=" + "Launchinstaller");
          if ( p0 == 1 )
            v8 = "A";
          else
            v8 = "B";
          v9 = new StringBuilder().append(v7.append(v8).toString());
          if ( p3 )
            v10 = "";
          else
            v10 = "NOWifi";
          return v9.append(v10).toString();
        case 1:
          v11 = "&action=" + "Downloadstart";
          if ( p0 == 1 )
            return v11 + "A";
          v9 = new StringBuilder().append(v11 + "B");
          if ( p2 )
            v10 = "3G";
          else
            v10 = "Wifi";
          return v9.append(v10).toString();
        case 2:
          v11 = "&action=" + "Downloadfinish";
          if ( p0 == 1 )
            return v11 + "A";
          v9 = new StringBuilder().append(v11 + "B");
          if ( p2 )
            v10 = "3G";
          else
            v10 = "Wifi";
          return v9.append(v10).toString();
        case 3:
          return "&action=" + "UnsupportedDevice";
        default:
          return v5;
      }
    }

    public static void launchInstallerTracker(int p0, boolean p1)
    {
      sendInstallerTrackingOptions(p0, 0, false, p1, "");
    }

    public static void sendInstallerTrackingOptions(int p0, int p1, boolean p2, boolean p3, String p4)
    {
      new com.gameloft.android.GAND.GloftGGSS.installer.utils.n(p0, p1, p2, p3, p4).start();
    }

    public static void setUserID(String p0)
    {
      v = p0;
    }

}

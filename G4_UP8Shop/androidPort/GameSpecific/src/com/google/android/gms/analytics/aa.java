// Decompiled from classes.dex (SourceFile: aa.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

public class aa {
    // Fields
    private static com.google.android.gms.analytics.GoogleAnalytics a;

    // Methods
    public static void A(String p0)
    {
      com.google.android.gms.analytics.Logger Logger; // RETVAL
    
      Logger = getLogger();
      if ( Logger != null )
        Logger.d(p0);
    }

    public static void B(String p0)
    {
      com.google.android.gms.analytics.Logger Logger; // RETVAL
    
      Logger = getLogger();
      if ( Logger != null )
        Logger.b(p0);
    }

    public static void C(String p0)
    {
      com.google.android.gms.analytics.Logger Logger; // RETVAL
    
      Logger = getLogger();
      if ( Logger != null )
        Logger.a(p0);
    }

    public static void D(String p0)
    {
      com.google.android.gms.analytics.Logger Logger; // RETVAL
    
      Logger = getLogger();
      if ( Logger != null )
        Logger.c(p0);
    }

    public static boolean dk()
    {
      boolean v0;
      v0 = false;
      if ( getLogger() != null )
        return getLogger().a() == 0;
      return v0;
    }

    private static com.google.android.gms.analytics.Logger getLogger()
    {
      if ( a != null )
        return a.c();
      a = GoogleAnalytics.dd();
      return null;
    }

}

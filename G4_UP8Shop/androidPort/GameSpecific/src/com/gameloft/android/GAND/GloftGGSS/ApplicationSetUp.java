// Decompiled from classes.dex (SourceFile: ApplicationSetUp.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

public class ApplicationSetUp extends android.content.BroadcastReceiver {
    // Fields
    public static java.lang.String a;
    public static java.lang.String b;
    public static java.lang.String c;
    public static java.lang.String d;

    // Methods
    static
    {
      a = "ApplicationSetUp";
      b = "GA_DEBUG";
      c = "true";
      d = "false";
    }

    public ApplicationSetUp()
    {
      super();
    }

    public void onReceive(android.content.Context p0, android.content.Intent p1)
    {
      android.os.Bundle Extras; // RETVAL
      String String;
      android.content.SharedPreferences.Editor v5;
      Extras = p1.getExtras();
      if ( Extras != null )
      {
        String = Extras.getString("GA_DEBUG");
        if ( String != null )
        {
          v5 = p0.getSharedPreferences(a, 0).edit();
          v5.putString("GA_DEBUG", String);
          v5.commit();
        }
      }
    }

}

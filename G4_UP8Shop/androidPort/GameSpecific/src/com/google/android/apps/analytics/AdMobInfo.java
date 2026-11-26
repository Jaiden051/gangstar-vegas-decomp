// Decompiled from classes.dex (SourceFile: AdMobInfo.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.apps.analytics;

public class AdMobInfo {
    // Fields
    private static final com.google.android.apps.analytics.AdMobInfo a;
    private int b;
    private java.util.Random c;

    // Methods
    static
    {
      a = new com.google.android.apps.analytics.AdMobInfo();
    }

    private AdMobInfo()
    {
      super();
      this.c = new java.util.Random();
    }

    private void a(int p0)
    {
      this.b = p0;
    }

    private String b()
    {
      String v1;
      com.google.android.apps.analytics.GoogleAnalyticsTracker Instance;
      String v4;
      String v5; // RETVAL
      Object[] v6;
      v1 = null;
      if ( this.b != 0 )
      {
        Instance = GoogleAnalyticsTracker.getInstance();
        v4 = Instance.c();
        v5 = Instance.d();
        if ( v4 != null && v5 != null )
        {
          v6 = new Object[3];
          v6[0] = v4;
          v6[1] = v5;
          v6[2] = Integer.valueOf(this.b);
          return String.format("A,%s,%s,%d", v6);
        }
      }
      return v1;
    }

    private int c()
    {
      return this.b;
    }

    public static com.google.android.apps.analytics.AdMobInfo getInstance()
    {
      return a;
    }

    public final int a()
    {
      this.b = this.c.nextInt();
      return this.b;
    }

}

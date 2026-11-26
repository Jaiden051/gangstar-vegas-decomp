// Decompiled from classes.dex (SourceFile: g.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

import android.content.pm.PackageInfo;
class g implements com.google.android.gms.analytics.m {
    // Fields
    private static com.google.android.gms.analytics.g e;
    private static java.lang.Object f;
    protected java.lang.String a;
    protected java.lang.String b;
    protected java.lang.String c;
    protected java.lang.String d;

    // Methods
    static
    {
      f = new Object();
    }

    protected g()
    {
      super();
    }

    private g(android.content.Context p0)
    {
      super();
      android.content.pm.PackageManager PackageManager;
      String c;
      String v4;
      android.content.pm.PackageInfo PackageInfo; // RETVAL
      android.content.pm.PackageInfo v6;
      PackageManager = p0.getPackageManager();
      this.c = p0.getPackageName();
      this.d = PackageManager.getInstallerPackageName(this.c);
      c = this.c;
      v4 = null;
      try
      {
        PackageInfo = PackageManager.getPackageInfo(p0.getPackageName(), 0);
        v6 = PackageInfo;
        if ( PackageInfo != null )
        {
          c = PackageManager.getApplicationLabel(PackageInfo.applicationInfo).toString();
          v4 = v6.versionName;
        }
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException e )
      {
        aa.A("Error retrieving package info: appName set to " + c);
      }
      this.a = c;
      this.b = v4;
    
    }

    public static boolean J(String p0)
    {
      return "&an".equals(p0) || "&av".equals(p0) || "&aid".equals(p0) || "&aiid".equals(p0);
    }

    public static com.google.android.gms.analytics.g cp()
    {
      return e;
    }

    public static void r(android.content.Context p0)
    {
      Object v1;
      v1 = f;
      synchronized ( v1 )
      {
        if ( e == null )
          e = new com.google.android.gms.analytics.g(p0);
      }
    }

    public final String a(String p0)
    {
      String v2;
      v2 = null;
      if ( p0 != null )
      {
        if ( p0.equals("&an") )
        {
          return this.a;
        }
        else if ( p0.equals("&av") )
        {
          return this.b;
        }
        else if ( p0.equals("&aid") )
        {
          return this.c;
        }
        else if ( p0.equals("&aiid") )
        {
          return this.d;
        }
      }
      return v2;
    }

}

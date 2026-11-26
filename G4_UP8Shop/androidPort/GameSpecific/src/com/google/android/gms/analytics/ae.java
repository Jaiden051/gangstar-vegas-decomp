// Decompiled from classes.dex (SourceFile: ae.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

class ae implements com.google.android.gms.analytics.m {
    // Fields
    private static com.google.android.gms.analytics.ae a;
    private static java.lang.Object b;
    private final android.content.Context c;

    // Methods
    static
    {
      b = new Object();
    }

    private ae(android.content.Context p0)
    {
      super();
      this.c = p0;
    }

    public static boolean J(String p0)
    {
      return "&sr".equals(p0);
    }

    private String a()
    {
      android.util.DisplayMetrics DisplayMetrics;
      DisplayMetrics = this.c.getResources().getDisplayMetrics();
      return DisplayMetrics.widthPixels + "x" + DisplayMetrics.heightPixels;
    }

    public static com.google.android.gms.analytics.ae dq()
    {
      Object v0;
      v0 = b;
      synchronized ( v0 )
      {
        return a;
      }
    }

    public static void r(android.content.Context p0)
    {
      Object v1;
      v1 = b;
      synchronized ( v1 )
      {
        if ( a == null )
          a = new com.google.android.gms.analytics.ae(p0);
      }
    }

    public final String a(String p0)
    {
      String v2;
      android.util.DisplayMetrics DisplayMetrics;
      v2 = null;
      if ( p0 != null && p0.equals("&sr") )
      {
        DisplayMetrics = this.c.getResources().getDisplayMetrics();
        return DisplayMetrics.widthPixels + "x" + DisplayMetrics.heightPixels;
      }
      return v2;
    }

}

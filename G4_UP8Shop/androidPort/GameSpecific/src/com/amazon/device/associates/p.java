// Decompiled from classes.dex (SourceFile: p.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.util.Log;
class p {
    // Fields
    private static boolean a;
    private static boolean b;

    // Methods
    static
    {
      a = true;
      b = false;
    }

    p()
    {
      super();
    }

    public static void a(String p0, String p1)
    {
      if ( a() && b )
        Log.d("AmazonMobileAssociates " + p0, p1);
    }

    public static void a(String p0, String p1, Object[] p2)
    {
      if ( a() && b )
        Log.d("AmazonMobileAssociates " + p0, String.format(p1, p2));
    }

    public static boolean a()
    {
      return a;
    }

    public static void b(String p0, String p1)
    {
      if ( a() )
        Log.e("AmazonMobileAssociates " + p0, p1);
    }

    public static void b(String p0, String p1, Object[] p2)
    {
      if ( a() )
        Log.e("AmazonMobileAssociates " + p0, String.format(p1, p2));
    }

    public static void c(String p0, String p1)
    {
      if ( a() && b )
        Log.i("AmazonMobileAssociates " + p0, p1);
    }

    public static void c(String p0, String p1, Object[] p2)
    {
      if ( a() && b )
        Log.i("AmazonMobileAssociates " + p0, String.format(p1, p2));
    }

    public static void d(String p0, String p1)
    {
      if ( a() )
        Log.w("AmazonMobileAssociates " + p0, p1);
    }

    public static void d(String p0, String p1, Object[] p2)
    {
      if ( a() )
        Log.w("AmazonMobileAssociates " + p0, String.format(p1, p2));
    }

}

// Decompiled from classes.dex (SourceFile: o.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

public final class o {
    // Methods
    private static String b(String p0, int p1)
    {
      if ( p1 > 0 )
        return p0 + p1;
      aa.A("index out of range for " + p0 + " (" + p1 + ")");
      return "";
    }

    static String s(int p0)
    {
      return b("&cd", p0);
    }

    static String t(int p0)
    {
      return b("&cm", p0);
    }

    public static String u(int p0)
    {
      return b("&pr", p0);
    }

    public static String v(int p0)
    {
      return b("&promo", p0);
    }

    public static String w(int p0)
    {
      return b("pi", p0);
    }

    public static String x(int p0)
    {
      return b("&il", p0);
    }

    public static String y(int p0)
    {
      return b("cd", p0);
    }

    public static String z(int p0)
    {
      return b("cm", p0);
    }

}

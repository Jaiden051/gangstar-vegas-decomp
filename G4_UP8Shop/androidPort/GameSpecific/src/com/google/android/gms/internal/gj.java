// Decompiled from classes.dex (SourceFile: gj.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.text.TextUtils;
public final class gj {
    // Methods
    public static <T> boolean a(T p0, T p1)
    {
      return p0 == null && p1 == null || p0 != null && p1 != null && p0.equals(p1);
    }

    public static void ak(String p0)
    {
      if ( TextUtils.isEmpty(p0) )
        throw new IllegalArgumentException("Namespace cannot be null or empty");
      if ( p0.length() > 128 )
        throw new IllegalArgumentException("Invalid namespace length");
      if ( !p0.startsWith("urn:x-cast:") )
        throw new IllegalArgumentException("Namespace must begin with the prefix \"urn:x-cast:\"");
      if ( p0.length() == 11 )
        throw new IllegalArgumentException("Namespace must begin with the prefix \"urn:x-cast:\" and have non-empty suffix");
    }

    public static String al(String p0)
    {
      return "urn:x-cast:" + p0;
    }

    public static long b(double p0)
    {
      return (long)(1000.0 * p0);
    }

    public static String b(java.util.Locale p0)
    {
      StringBuilder v1;
      String Country;
      String Variant;
      v1 = new StringBuilder(20);
      v1.append(p0.getLanguage());
      Country = p0.getCountry();
      if ( !TextUtils.isEmpty(Country) )
        v1.append('-').append(Country);
      Variant = p0.getVariant();
      if ( !TextUtils.isEmpty(Variant) )
        v1.append('-').append(Variant);
      return v1.toString();
    }

    public static double o(long p0)
    {
      return (double)p0 / 1000.0;
    }

}

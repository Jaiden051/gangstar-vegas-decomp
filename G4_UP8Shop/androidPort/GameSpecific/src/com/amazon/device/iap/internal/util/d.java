// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.util;

public class d {
    // Methods
    public d()
    {
      super();
    }

    public static void a(Object p0, String p1)
    {
      if ( p0 == null )
        throw new IllegalArgumentException(p1 + " must not be null");
    }

    public static void a(String p0, String p1)
    {
      if ( a(p0) )
        throw new IllegalArgumentException(p1 + " must not be null or empty");
    }

    public static void a(java.util.Collection<? extends Object> p0, String p1)
    {
      if ( p0.isEmpty() )
        throw new IllegalArgumentException(p1 + " must not be empty");
    }

    public static boolean a(String p0)
    {
      return p0 == null || p0.trim().length() == 0;
    }

}

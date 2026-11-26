// Decompiled from classes.dex (SourceFile: an.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class an {
    // Methods
    private an()
    {
      super();
    }

    public static void a(int p0, String p1)
    {
      if ( p0 <= 0 )
        throw new IllegalArgumentException(p1 + " must be positive");
    }

    public static void a(Object p0, String p1)
    {
      if ( p0 == null || p0 instanceof String && ((String)p0).length() == 0 )
        throw new IllegalArgumentException(p1 + " must not be null or empty");
    }

    public static void a(java.util.Collection<String> p0, String p1)
    {
      java.util.Iterator v2;
      String v3;
      if ( p0 == null || p0.isEmpty() )
        throw new IllegalArgumentException(p1 + " set must not be null or empty");
      v2 = p0.iterator();
      while ( v2.hasNext() )
      {
        v3 = (String)v2.next();
        if ( v3 == null || v3.length() == 0 )
          throw new IllegalArgumentException(p1 + " must not contains an empty string");
      }
    }

}

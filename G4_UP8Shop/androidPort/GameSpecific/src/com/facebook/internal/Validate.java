// Decompiled from classes.dex (SourceFile: Validate.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

public final class Validate {
    // Methods
    public Validate()
    {
      super();
    }

    public static void containsNoNullOrEmpty(java.util.Collection<String> p0, String p1)
    {
      java.util.Iterator v2;
      String v3;
      notNull(p0, p1);
      v2 = p0.iterator();
      while ( v2.hasNext() )
      {
        v3 = (String)v2.next();
        if ( v3 == null )
          throw new NullPointerException("Container '" + p1 + "' cannot contain null values");
        if ( v3.length() == 0 )
          throw new IllegalArgumentException("Container '" + p1 + "' cannot contain empty values");
      }
    }

    public static <T> void containsNoNulls(java.util.Collection<T> p0, String p1)
    {
      java.util.Iterator v2;
      notNull(p0, p1);
      v2 = p0.iterator();
      while ( v2.hasNext() )
      {
        if ( v2.next() == null )
          throw new NullPointerException("Container '" + p1 + "' cannot contain null values");
      }
    }

    public static <T> void notEmpty(java.util.Collection<T> p0, String p1)
    {
      if ( p0.isEmpty() )
        throw new IllegalArgumentException("Container '" + p1 + "' cannot be empty");
    }

    public static <T> void notEmptyAndContainsNoNulls(java.util.Collection<T> p0, String p1)
    {
      containsNoNulls(p0, p1);
      notEmpty(p0, p1);
    }

    public static void notNull(Object p0, String p1)
    {
      if ( p0 == null )
        throw new NullPointerException("Argument '" + p1 + "' cannot be null");
    }

    public static void notNullOrEmpty(String p0, String p1)
    {
      if ( Utility.isNullOrEmpty(p0) )
        throw new IllegalArgumentException("Argument '" + p1 + "' cannot be null or empty");
    }

    public static void oneOf(Object p0, String p1, Object[] p2)
    {
      int v3 = 0;
      int i = 0;
      Object v5 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v3 = p2.length;
            i = 0;
            _pc = 1;
            continue _sm;
          case 1:
            if ( i >= v3 )
            throw new IllegalArgumentException("Argument '" + p1 + "' was not one of the allowed values");
            v5 = p2[i];
            if ( !(v5 == null) ) { _pc = 2; continue _sm; }
            _pc = 4;
            continue _sm;
          case 2:
            if ( v5.equals(p0) )
            return;
            _pc = 3;
            continue _sm;
          case 3:
            ++i;
            _pc = 1;
            continue _sm;
          case 4:
            if ( p0 != null )
            { _pc = 3; continue _sm; }
            return;
        }
      }
}

}

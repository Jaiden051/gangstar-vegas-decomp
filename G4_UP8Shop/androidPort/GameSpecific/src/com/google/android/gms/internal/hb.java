// Decompiled from classes.dex (SourceFile: hb.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class hb implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    private static final java.lang.Object a;
    private static java.lang.ClassLoader b;
    private static java.lang.Integer c;
    private boolean d;

    // Methods
    static
    {
      a = new Object();
      b = null;
      c = null;
    }

    public hb()
    {
      super();
      this.d = false;
    }

    private static boolean a(Class<?> p0)
    {
      boolean v1;
      v1 = false;
      try
      {
        return "SAFE_PARCELABLE_NULL_STRING".equals(p0.getField("NULL").get(null));
      }
      catch ( NoSuchFieldException e )
      {
        return v1;
      }
      catch ( IllegalAccessException e )
      {
      }
      return v1;
    }

    protected static boolean aA(String p0)
    {
      ClassLoader v1; // RETVAL
    
      v1 = fk();
      if ( v1 != null )
      {
        try
        {
          return a(v1.loadClass(p0));
        }
        catch ( Exception e )
        {
          return false;
        }
      }
      else
      {
        return true;
      }
    }

    protected static ClassLoader fk()
    {
      Object v0;
      v0 = a;
      synchronized ( v0 )
      {
        return b;
      }
    }

    protected static Integer fl()
    {
      Object v0;
      v0 = a;
      synchronized ( v0 )
      {
        return c;
      }
    }

    protected final boolean A()
    {
      return this.d;
    }

}

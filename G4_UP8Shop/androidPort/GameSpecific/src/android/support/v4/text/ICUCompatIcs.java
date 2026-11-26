// Decompiled from classes.dex (SourceFile: ICUCompatIcs.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.text;

import android.util.Log;
class ICUCompatIcs {
    // Fields
    private static java.lang.String a;
    private static java.lang.reflect.Method b;
    private static java.lang.reflect.Method c;

    // Methods
    static
    {
      Class v0; // RETVAL
      Class v1;
      Class[] v2;
      Class[] v3;
      try
      {
        v0 = Class.forName("libcore.icu.ICU");
        v1 = v0;
        if ( v0 != null )
        {
          v2 = new Class[1];
          v2[0] = String.class;
          b = v0.getMethod("getScript", v2);
          v3 = new Class[1];
          v3[0] = String.class;
          c = v1.getMethod("addLikelySubtags", v3);
        }
      }
      catch ( Exception v4 )
      {
        Log.w("ICUCompatIcs", v4);
      }
    }

    ICUCompatIcs()
    {
      super();
    }

    public static String addLikelySubtags(String p0)
    {
      Object[] v1;
      try
      {
        if ( c == null )
          return p0;
        v1 = new Object[1];
        v1[0] = p0;
        return (String)c.invoke(null, v1);
      }
      catch ( IllegalAccessException v4 )
      {
        Log.w("ICUCompatIcs", v4);
        return p0;
      }
      catch ( java.lang.reflect.InvocationTargetException v5 )
      {
        Log.w("ICUCompatIcs", v5);
      }
      return p0;
    }

    public static String getScript(String p0)
    {
      Object[] v1;
      try
      {
        if ( b == null )
          return null;
        v1 = new Object[1];
        v1[0] = p0;
        return (String)b.invoke(null, v1);
      }
      catch ( IllegalAccessException v4 )
      {
        Log.w("ICUCompatIcs", v4);
        return null;
      }
      catch ( java.lang.reflect.InvocationTargetException v5 )
      {
        Log.w("ICUCompatIcs", v5);
      }
      return null;
    }

}

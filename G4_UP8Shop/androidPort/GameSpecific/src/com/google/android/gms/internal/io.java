// Decompiled from classes.dex (SourceFile: io.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.text.TextUtils;
import java.util.regex.Pattern;
public final class io {
    // Fields
    private static final java.util.regex.Pattern a;
    private static final java.util.regex.Pattern b;

    // Methods
    static
    {
      a = Pattern.compile("\\\\.");
      b = Pattern.compile("[\\\\\"/\b\f\n\r\t]");
    }

    public static String aK(String p0)
    {
      java.util.regex.Matcher v1;
      StringBuffer v2;
      if ( !TextUtils.isEmpty(p0) )
      {
        v1 = b.matcher(p0);
        v2 = null;
        while ( v1.find() )
        {
          if ( v2 == null )
            v2 = new StringBuffer();
          switch ( v1.group().charAt(0) )
          {
            case 8:
              v1.appendReplacement(v2, "\\\\b");
              break;
            case 9:
              v1.appendReplacement(v2, "\\\\t");
              break;
            case 0xA:
              v1.appendReplacement(v2, "\\\\n");
              break;
            case 0xC:
              v1.appendReplacement(v2, "\\\\f");
              break;
            case 0xD:
              v1.appendReplacement(v2, "\\\\r");
              break;
            case 0x22:
              v1.appendReplacement(v2, "\\\\\\\"");
              break;
            case 0x2F:
              v1.appendReplacement(v2, "\\\\/");
              break;
            case 0x5C:
              v1.appendReplacement(v2, "\\\\\\\\");
              break;
            default:
              continue;
          }
        }
        if ( v2 != null )
        {
          v1.appendTail(v2);
          return v2.toString();
        }
      }
      return p0;
    }

    public static boolean d(Object p0, Object p1)
    {
      boolean v2;
      org.json.JSONObject v3;
      org.json.JSONObject v4;
      java.util.Iterator v6;
      String v7;
      org.json.JSONArray v8;
      org.json.JSONArray v9;
      int v10;
      v2 = false;
      if ( p0 instanceof org.json.JSONObject && p1 instanceof org.json.JSONObject )
      {
        v3 = (org.json.JSONObject)p0;
        v4 = (org.json.JSONObject)p1;
        if ( v3.length() != v4.length() )
          return v2;
        v6 = v3.keys();
        try
        {
          while ( true )
          {
          if ( !v6.hasNext() )
            return true;
          v7 = (String)v6.next();
          if ( !v4.has(v7) )
            return v2;
          if ( true )
          {
            if ( !io.d(v3.get(v7), v4.get(v7)) )
              return v2;
            continue;
          }
          break;
        }
        }
        catch ( Throwable _ehEx )
        {
          if ( (_ehEx instanceof org.json.JSONException) )
      if ( _ehEx instanceof Error ) throw (Error)_ehEx;
      if ( _ehEx instanceof RuntimeException ) throw (RuntimeException)_ehEx;
}
        return v2;
      }
      if ( !(p0 instanceof org.json.JSONArray) || !(p1 instanceof org.json.JSONArray) )
        return p0.equals(p1);
      v8 = (org.json.JSONArray)p0;
      v9 = (org.json.JSONArray)p1;
      if ( v8.length() != v9.length() )
        return v2;
      v10 = 0;
      try
      {
        while ( true )
        {
        if ( v10 >= v8.length() )
          return true;
        if ( true )
        {
          if ( !io.d(v8.get(v10), v9.get(v10)) )
            return v2;
          ++v10;
          continue;
        }
        break;
      }
      }
      catch ( Throwable _ehEx )
      {
        if ( (_ehEx instanceof org.json.JSONException) )
      if ( _ehEx instanceof Error ) throw (Error)_ehEx;
      if ( _ehEx instanceof RuntimeException ) throw (RuntimeException)_ehEx;
}
      return v2;
    }

}

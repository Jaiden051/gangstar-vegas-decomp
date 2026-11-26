// Decompiled from classes.dex (SourceFile: gt.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.text.TextUtils;
import java.util.Calendar;
import java.util.GregorianCalendar;
import org.json.JSONObject;
public class gt {
    // Fields
    private static final com.google.android.gms.internal.go a;
    private static final java.lang.String[] b;
    private static final java.lang.String c;

    // Methods
    static
    {
      String[] v0;
      a = new com.google.android.gms.internal.go("MetadataUtils");
      v0 = new String[4];
      v0[0] = "Z";
      v0[1] = "+hh";
      v0[2] = "+hhmm";
      v0[3] = "+hh:mm";
      b = v0;
      c = "yyyyMMdd'T'HHmmss" + b[0];
    }

    public static String a(java.util.Calendar p0)
    {
      String v1;
      String v3;
      java.text.SimpleDateFormat v4;
      if ( p0 != null )
      {
        v3 = c;
        if ( p0.get(11) == 0 && p0.get(12) == 0 && p0.get(13) == 0 )
          v3 = "yyyyMMdd";
        v4 = new java.text.SimpleDateFormat(v3);
        v4.setTimeZone(p0.getTimeZone());
        v1 = v4.format(p0.getTime());
        if ( v1.endsWith("+0000") )
          return v1.replace("+0000", b[0]);
      }
      else
      {
        a.b("Calendar object cannot be null", new Object[0]);
        return null;
      }
      return v1;
    }

    public static void a(java.util.List<com.google.android.gms.common.images.WebImage> p0, org.json.JSONObject p1)
    {
      org.json.JSONArray JSONArray;
      int v3;
      int i;
      org.json.JSONObject JSONObject; // RETVAL
    
      try
      {
        p0.clear();
        JSONArray = p1.getJSONArray("images");
        v3 = JSONArray.length();
        for ( i = 0; ; ++i )
        {
          if ( i >= v3 )
            return;
          JSONObject = JSONArray.getJSONObject(i);
          try
          {
            p0.add(new com.google.android.gms.common.images.WebImage(JSONObject));
            continue;
          }
          catch ( IllegalArgumentException e )
          {
          }
        }
      }
      catch ( org.json.JSONException e )
      {
      }
    }

    public static void a(org.json.JSONObject p0, java.util.List<com.google.android.gms.common.images.WebImage> p1)
    {
      org.json.JSONArray v2;
      java.util.Iterator i;
      if ( p1 != null && !p1.isEmpty() )
      {
        v2 = new org.json.JSONArray();
        for ( i = p1.iterator(); i.hasNext(); v2.put(((com.google.android.gms.common.images.WebImage)i.next()).e()) )
          ;
        try
        {
          p0.put("images", v2);
        }
        catch ( org.json.JSONException e )
        {
        }
      }
    }

    public static java.util.Calendar aq(String p0)
    {
      String v3;
      String v4;
      String v5;
      java.util.Calendar Instance;
      Object[] v8;
      if ( TextUtils.isEmpty(p0) )
      {
        a.b("Input string is empty or null", new Object[0]);
        return null;
      }
      else
      {
        v3 = ar(p0);
        if ( TextUtils.isEmpty(v3) )
        {
          a.b("Invalid date format", new Object[0]);
          return null;
        }
        else
        {
          v4 = as(p0);
          v5 = "yyyyMMdd";
          if ( !TextUtils.isEmpty(v4) )
          {
            v3 = v3 + "T" + v4;
            if ( v4.length() == 6 )
              v5 = "yyyyMMdd'T'HHmmss";
            else
              v5 = c;
          }
          Instance = GregorianCalendar.getInstance();
          try
          {
            Instance.setTime(new java.text.SimpleDateFormat(v5).parse(v3));
            return Instance;
          }
          catch ( java.text.ParseException v7 )
          {
            v8 = new Object[1];
            v8[0] = v7.getMessage();
            a.b("Error parsing string: %s", v8);
            return null;
          }
        }
      }
    }

    private static String ar(String p0)
    {
      String v1;
      Object[] v4;
      v1 = null;
      if ( TextUtils.isEmpty(p0) )
      {
        a.b("Input string is empty or null", new Object[0]);
      }
      else
      {
        try
        {
          return p0.substring(0, 8);
        }
        catch ( IndexOutOfBoundsException v3 )
        {
          v4 = new Object[1];
          v4[0] = v3.getMessage();
          a.c("Error extracting the date: %s", v4);
        }
      }
      return v1;
    }

    private static String as(String p0)
    {
      String v1;
      String v3;
      Object[] v5;
      v1 = null;
      if ( TextUtils.isEmpty(p0) )
      {
        a.b("string is empty or null", new Object[0]);
        return v1;
      }
      if ( p0.indexOf(84) != 8 )
      {
        a.b("T delimeter is not found", new Object[0]);
        return v1;
      }
      try
      {
        v3 = p0.substring(9);
        if ( v3.length() == 6 )
        {
          return v3;
        }
        else
        {
          switch ( v3.charAt(6) )
          {
            case '+':
            case '-':
              if ( at(v3) )
                v1 = v3.replaceAll("([\\+\\-]\\d\\d):(\\d\\d)", "$1$2");
              break;
            case 'Z':
              if ( v3.length() == b[0].length() + 6 )
                v1 = v3.substring(0, v3.length() - 1) + "+0000";
              break;
            default:
              return v1;
          }
        }
        return v1;
      }
      catch ( IndexOutOfBoundsException v4 )
      {
        v5 = new Object[1];
        v5[0] = v4.getMessage();
        a.b("Error extracting the time substring: %s", v5);
      }
      return v1;
    }

    private static boolean at(String p0)
    {
      boolean v1;
      int v2;
      v1 = true;
      v2 = p0.length();
      if ( v2 != b[1].length() + 6 && v2 != b[2].length() + 6 )
        return v2 == b[3].length() + 6;
      return v1;
    }

}

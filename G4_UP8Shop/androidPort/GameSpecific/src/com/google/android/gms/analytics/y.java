// Decompiled from classes.dex (SourceFile: y.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

import android.text.TextUtils;
import java.net.URLEncoder;
class y {
    // Methods
    static String a(com.google.android.gms.analytics.x p0, long p1)
    {
      StringBuilder v2;
      long v3;
      v2 = new StringBuilder();
      v2.append(p0.a());
      if ( p0.c() > 0 )
      {
        v3 = p1 - p0.c();
        if ( v3 >= 0 )
          v2.append("&qt=").append(v3);
      }
      v2.append("&z=").append(p0.b());
      return v2.toString();
    }

    static String encode(String p0)
    {
      try
      {
        return URLEncoder.encode(p0, "UTF-8");
      }
      catch ( java.io.UnsupportedEncodingException e )
      {
        throw new AssertionError("URL encoding failed for: " + p0);
      }
    }

    static java.util.Map<String, String> u(java.util.Map<String, String> p0)
    {
      java.util.Map v1;
      java.util.Iterator v2;
      java.util.Map.Entry v3;
      String v4;
      v1 = new java.util.HashMap();
      v2 = p0.entrySet().iterator();
      while ( v2.hasNext() )
      {
        v3 = (java.util.Map.Entry)v2.next();
        if ( ((String)v3.getKey()).startsWith("&") && v3.getValue() != null )
        {
          v4 = ((String)v3.getKey()).substring(1);
          if ( !TextUtils.isEmpty(v4) )
            v1.put(v4, v3.getValue());
        }
      }
      return v1;
    }

}

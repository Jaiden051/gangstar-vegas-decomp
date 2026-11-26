// Decompiled from classes.dex (SourceFile: Utils.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.apps.analytics;

import android.net.Uri;
import android.util.Log;
class Utils {
    // Methods
    Utils()
    {
      super();
    }

    static String addQueueTimeParameter(String p0, long p1)
    {
      String QueryParameter; // RETVAL
    
      QueryParameter = Uri.parse(p0).getQueryParameter("utmht");
      if ( QueryParameter != null )
      {
        try
        {
          return p0 + "&utmqt=" + (p1 - Long.valueOf(Long.parseLong(QueryParameter)).longValue());
        }
        catch ( NumberFormatException v4 )
        {
          Log.e("GoogleAnalyticsTracker", "Error parsing utmht parameter: " + v4.toString());
        }
      }
      return p0;
    }

    static java.util.Map<String, String> parseURLParameters(String p0)
    {
      java.util.Map v1;
      String[] v2;
      int v3;
      int i;
      String[] v5; // RETVAL
    
      v1 = new java.util.HashMap();
      v2 = p0.split("&");
      v3 = v2.length;
      for ( i = 0; i < v3; ++i )
      {
        v5 = v2[i].split("=");
        if ( v5.length <= 1 )
        {
          if ( v5.length == 1 )
            v1.put(v5[0], null);
        }
        else
        {
          v1.put(v5[0], v5[1]);
        }
      }
      return v1;
    }

}

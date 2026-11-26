// Decompiled from classes.dex (SourceFile: AnalyticsParameterEncoder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.apps.analytics;

import java.net.URLEncoder;
public class AnalyticsParameterEncoder {
    // Methods
    private AnalyticsParameterEncoder()
    {
      super();
    }

    public static String encode(String p0)
    {
      return encode(p0, "UTF-8");
    }

    static String encode(String p0, String p1)
    {
      try
      {
        return URLEncoder.encode(p0, p1).replace("+", "%20");
      }
      catch ( java.io.UnsupportedEncodingException e )
      {
        throw new AssertionError("URL encoding failed for: " + p0);
      }
    }

}

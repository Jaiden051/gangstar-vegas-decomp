// Decompiled from classes.dex (SourceFile: au.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import java.net.URLEncoder;
public class au {
    // Methods
    public au()
    {
      super();
    }

    public static final String a(String p0)
    {
      if ( p0 != null )
      {
        try
        {
          return URLEncoder.encode(p0, "UTF-8").replace("+", "%20").replace("*", "%2A").replace("%7E", "~");
        }
        catch ( java.io.UnsupportedEncodingException e )
        {
        }
      }
      else
      {
        return null;
      }
      return p0;
    }

}

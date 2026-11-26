// Decompiled from classes.dex (SourceFile: MRAIDHtmlProcessor.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.mraid.internal;

import java.util.regex.Pattern;
public class MRAIDHtmlProcessor {
    // Methods
    public MRAIDHtmlProcessor()
    {
      super();
    }

    public static String processRawHtml(String p0)
    {
      int v1;
      int v2;
      StringBuffer v3;
      java.util.regex.Matcher v4;
      boolean v5;
      boolean v6;
      String Property; // RETVAL
      String v10;
      String v11;
      java.util.regex.Matcher j;
      java.util.regex.Matcher v13;
      int i;
      v1 = 1;
      v2 = 0;
      v3 = new StringBuffer(p0);
      v4 = Pattern.compile("<script\\s+[^>]*\\bsrc\\s*=\\s*([\\\"\\'])mraid\\.js\\1[^>]*>\\s*</script>\\n*", 2).matcher(v3);
      if ( v4.find() )
        v3.delete(v4.start(), v4.end());
      v5 = p0.indexOf("<html") != -1;
      v6 = p0.indexOf("<head") != -1;
      if ( p0.indexOf("<body") == -1 )
        v1 = 0;
      if ( !v5 && (v6 || v1 != 0) || v5 && v1 == 0 )
        return null;
      Property = System.getProperty("line.separator");
      v10 = Property;
      if ( v5 )
      {
        if ( !v6 )
        {
          v13 = Pattern.compile("<html[^>]*>", 2).matcher(v3);
          for ( i = 0; v13.find(i); i = v13.end() )
            v3.insert(v13.end(), v10 + "<head>" + v10 + "</head>");
        }
      }
      else
      {
        v3.insert(0, "<html>" + Property + "<head>" + Property + "</head>" + Property + "<body>" + Property);
        v3.append("</body>" + v10 + "</html>");
      }
      v11 = "<style>"
          + v10
          + "body { margin:0; padding:0; }"
          + v10
          + "*:not(input) { -webkit-touch-callout:none; -webkit-user-select:none; -webkit-text-size-adjust:none; }"
          + v10
          + "</style>";
      for ( j = Pattern.compile("<head[^>]*>", 2).matcher(v3); j.find(v2); v2 = j.end() )
        v3.insert(j.end(), v10
                         + "<meta name='viewport' content='width=device-width, initial-scale=1.0, minimum-scale=1.0, maximum-" +
                           "scale=1.0, user-scalable=no' />"
                         + v10
                         + v11);
      return v3.toString();
    }

}

// Decompiled from classes.dex (SourceFile: ip.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class ip {
    // Methods
    public static void a(StringBuilder p0, java.util.HashMap<String, String> p1)
    {
      java.util.Iterator v2;
      int v3;
      String v4;
      String v5;
      p0.append("{");
      v2 = p1.keySet().iterator();
      v3 = 1;
      while ( v2.hasNext() )
      {
        v4 = (String)v2.next();
        if ( v3 == 0 )
          p0.append(",");
        v5 = (String)p1.get(v4);
        p0.append("\"").append(v4).append("\":");
        if ( v5 != null )
          p0.append("\"").append(v5).append("\"");
        else
          p0.append("null");
        v3 = 0;
      }
      p0.append("}");
    }

}

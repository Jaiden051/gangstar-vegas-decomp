// Decompiled from classes.dex (SourceFile: fp.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class fp {
    // Fields
    private static final java.lang.String[] a;
    private static final java.util.Map b;

    // Methods
    static
    {
      int v0;
      String[] v1;
      v0 = 0;
      v1 = new String[9];
      v1[0] = "text1";
      v1[1] = "text2";
      v1[2] = "icon";
      v1[3] = "intent_action";
      v1[4] = "intent_data";
      v1[5] = "intent_data_id";
      v1[6] = "intent_extra_data";
      v1[7] = "suggest_large_icon";
      v1[8] = "intent_activity";
      a = v1;
      b = new java.util.HashMap(a.length);
      while ( v0 < a.length )
      {
        b.put(a[v0], Integer.valueOf(v0));
        ++v0;
      }
    }

    public static String H(int p0)
    {
      if ( p0 >= 0 && p0 < a.length )
        return a[p0];
      else
        return null;
    }

    public static int Y(String p0)
    {
      Integer v1;
      v1 = (Integer)b.get(p0);
      if ( v1 == null )
        throw new IllegalArgumentException("[" + p0 + "] is not a valid global search section name");
      return v1.intValue();
    }

    public static int dK()
    {
      return a.length;
    }

}

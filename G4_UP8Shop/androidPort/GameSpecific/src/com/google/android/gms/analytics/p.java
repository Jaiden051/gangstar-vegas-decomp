// Decompiled from classes.dex (SourceFile: p.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

import android.os.Build;
class p {
    // Methods
    static boolean N(String p0)
    {
      boolean v1;
      java.io.File v3;
      v1 = false;
      if ( version() >= 9 )
      {
        v3 = new java.io.File(p0);
        v3.setReadable(false, false);
        v3.setWritable(false, false);
        v3.setReadable(true, true);
        v3.setWritable(true, true);
        return true;
      }
      return v1;
    }

    public static int version()
    {
      try
      {
        return Integer.parseInt(Build.VERSION.SDK);
      }
      catch ( NumberFormatException e )
      {
        aa.A("Invalid version number: " + Build.VERSION.SDK);
        return 0;
      }
    }

}

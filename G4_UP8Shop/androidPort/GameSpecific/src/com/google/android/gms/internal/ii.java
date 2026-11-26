// Decompiled from classes.dex (SourceFile: ii.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.util.Base64;
public final class ii {
    // Methods
    public static String d(byte[] p0)
    {
      if ( p0 != null )
        return Base64.encodeToString(p0, 0);
      else
        return null;
    }

    public static String e(byte[] p0)
    {
      if ( p0 != null )
        return Base64.encodeToString(p0, 10);
      else
        return null;
    }

}

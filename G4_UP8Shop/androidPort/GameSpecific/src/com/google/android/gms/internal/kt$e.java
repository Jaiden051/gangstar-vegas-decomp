// Decompiled from classes.dex (SourceFile: kt$e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class kt$e {
    // Methods
    public static int bA(String p0)
    {
      if ( p0.equals("person") )
        return 0;
      if ( !p0.equals("page") )
        throw new IllegalArgumentException("Unknown objectType string: " + p0);
      return 1;
    }

}

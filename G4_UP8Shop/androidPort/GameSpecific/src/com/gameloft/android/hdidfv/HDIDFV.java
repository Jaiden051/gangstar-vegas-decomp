// Decompiled from classes.dex (SourceFile: HDIDFV.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.hdidfv;

public class HDIDFV {
    // Methods
    public HDIDFV()
    {
      super();
    }

    public static String getHDIDFV()
    {
      return getNHDIDFV();
    }

    public static String getHDIDFVVersion()
    {
      return getNHDIDFVVersion();
    }

    public static native java.lang.String getNHDIDFV();

    public static native java.lang.String getNHDIDFVVersion();

}

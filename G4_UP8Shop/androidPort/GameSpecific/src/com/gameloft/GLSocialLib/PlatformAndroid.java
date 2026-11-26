// Decompiled from classes.dex (SourceFile: PlatformAndroid.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib;

import java.util.concurrent.Executors;
public class PlatformAndroid {
    // Fields
    public static android.content.Context a;

    // Methods
    static
    {
      a = null;
    }

    public PlatformAndroid(android.content.Context p0)
    {
      super();
      a = p0;
    }

    public static byte[] GetDataFromURL(String p0)
    {
      java.util.concurrent.Callable v1;
      java.util.concurrent.ExecutorService v2;
      byte[] v3;
      v1 = (java.util.concurrent.Callable)new com.gameloft.GLSocialLib.b(p0);
      try
      {
        v2 = Executors.newSingleThreadExecutor();
        v3 = (byte[])v2.submit(v1).get();
        v2.shutdown();
        return (byte[])v3;
      }
      catch ( Exception e )
      {
        return null;
      }
    }

    public static native void nativeInit();

}

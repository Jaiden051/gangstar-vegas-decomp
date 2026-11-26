// Decompiled from classes.dex (SourceFile: EnvironmentCompatKitKat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.os;

import android.os.Environment;
class EnvironmentCompatKitKat {
    // Methods
    EnvironmentCompatKitKat()
    {
      super();
    }

    public static String getStorageState(java.io.File p0)
    {
      return Environment.getStorageState(p0);
    }

}

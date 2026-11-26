// Decompiled from classes.dex (SourceFile: EnvironmentCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.os;

import android.os.Build;
import android.os.Environment;
import android.util.Log;
public class EnvironmentCompat {
    // Fields
    public static java.lang.String MEDIA_UNKNOWN;
    private static java.lang.String TAG;

    // Methods
    public EnvironmentCompat()
    {
      super();
    }

    public static String getStorageState(java.io.File p0)
    {
      if ( Build.VERSION.SDK_INT < 19 )
      {
        try
        {
          if ( p0.getCanonicalPath().startsWith(Environment.getExternalStorageDirectory().getCanonicalPath()) )
            return Environment.getExternalStorageState();
          return "unknown";
        }
        catch ( java.io.IOException v3 )
        {
          Log.w("EnvironmentCompat", "Failed to resolve canonical path: " + v3);
        }
        return "unknown";
      }
      return EnvironmentCompatKitKat.getStorageState(p0);
    }

}

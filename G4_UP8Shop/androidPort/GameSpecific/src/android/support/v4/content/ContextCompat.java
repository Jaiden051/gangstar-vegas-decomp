// Decompiled from classes.dex (SourceFile: ContextCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

import android.os.Build;
import android.os.Environment;
public class ContextCompat {
    // Fields
    private static java.lang.String DIR_ANDROID;
    private static java.lang.String DIR_CACHE;
    private static java.lang.String DIR_DATA;
    private static java.lang.String DIR_FILES;
    private static java.lang.String DIR_OBB;

    // Methods
    public ContextCompat()
    {
      super();
    }

    private static java.io.File buildPath(java.io.File p0, String[] p1)
    {
      int v2;
      int i;
      String v5;
      java.io.File v6;
      v2 = p1.length;
      for ( i = 0; i < v2; ++i )
      {
        v5 = p1[i];
        if ( p0 != null )
        {
          if ( v5 != null )
            v6 = new java.io.File(p0, v5);
          else
            v6 = p0;
        }
        else
        {
          v6 = new java.io.File(v5);
        }
        p0 = v6;
      }
      return p0;
    }

    public static java.io.File[] getExternalCacheDirs(android.content.Context p0)
    {
      int v1;
      java.io.File ExternalCacheDir;
      java.io.File[] v5;
      java.io.File ExternalStorageDirectory;
      String[] v7;
      v1 = Build.VERSION.SDK_INT;
      if ( v1 >= 19 )
        return ContextCompatKitKat.getExternalCacheDirs(p0);
      if ( v1 < 8 )
      {
        ExternalStorageDirectory = Environment.getExternalStorageDirectory();
        v7 = new String[4];
        v7[0] = "Android";
        v7[1] = "data";
        v7[2] = p0.getPackageName();
        v7[3] = "cache";
        ExternalCacheDir = buildPath(ExternalStorageDirectory, v7);
      }
      else
      {
        ExternalCacheDir = ContextCompatFroyo.getExternalCacheDir(p0);
      }
      v5 = new java.io.File[1];
      v5[0] = ExternalCacheDir;
      return v5;
    }

    public static java.io.File[] getExternalFilesDirs(android.content.Context p0, String p1)
    {
      int v2;
      java.io.File ExternalFilesDir;
      java.io.File[] v6;
      java.io.File ExternalStorageDirectory;
      String[] v8;
      v2 = Build.VERSION.SDK_INT;
      if ( v2 >= 19 )
        return ContextCompatKitKat.getExternalFilesDirs(p0, p1);
      if ( v2 < 8 )
      {
        ExternalStorageDirectory = Environment.getExternalStorageDirectory();
        v8 = new String[5];
        v8[0] = "Android";
        v8[1] = "data";
        v8[2] = p0.getPackageName();
        v8[3] = "files";
        v8[4] = p1;
        ExternalFilesDir = buildPath(ExternalStorageDirectory, v8);
      }
      else
      {
        ExternalFilesDir = ContextCompatFroyo.getExternalFilesDir(p0, p1);
      }
      v6 = new java.io.File[1];
      v6[0] = ExternalFilesDir;
      return v6;
    }

    public static java.io.File[] getObbDirs(android.content.Context p0)
    {
      int v1;
      java.io.File ObbDir;
      java.io.File[] v5;
      java.io.File ExternalStorageDirectory;
      String[] v7;
      v1 = Build.VERSION.SDK_INT;
      if ( v1 >= 19 )
        return ContextCompatKitKat.getObbDirs(p0);
      if ( v1 < 11 )
      {
        ExternalStorageDirectory = Environment.getExternalStorageDirectory();
        v7 = new String[3];
        v7[0] = "Android";
        v7[1] = "obb";
        v7[2] = p0.getPackageName();
        ObbDir = buildPath(ExternalStorageDirectory, v7);
      }
      else
      {
        ObbDir = ContextCompatHoneycomb.getObbDir(p0);
      }
      v5 = new java.io.File[1];
      v5[0] = ObbDir;
      return v5;
    }

    public static boolean startActivities(android.content.Context p0, android.content.Intent[] p1)
    {
      return startActivities(p0, p1, null);
    }

    public static boolean startActivities(
            android.content.Context p0,
            android.content.Intent[] p1,
            android.os.Bundle p2)
    {
      boolean v3;
      int v4;
      v3 = true;
      v4 = Build.VERSION.SDK_INT;
      if ( v4 < 16 )
      {
        if ( v4 < 11 )
          return false;
        else
          ContextCompatHoneycomb.startActivities(p0, p1);
      }
      else
      {
        ContextCompatJellybean.startActivities(p0, p1, p2);
      }
      return v3;
    }

}

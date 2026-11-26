// Decompiled from classes.dex (SourceFile: ContextCompatKitKat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

class ContextCompatKitKat {
    // Methods
    ContextCompatKitKat()
    {
      super();
    }

    public static java.io.File[] getExternalCacheDirs(android.content.Context p0)
    {
      return p0.getExternalCacheDirs();
    }

    public static java.io.File[] getExternalFilesDirs(android.content.Context p0, String p1)
    {
      return p0.getExternalFilesDirs(p1);
    }

    public static java.io.File[] getObbDirs(android.content.Context p0)
    {
      return p0.getObbDirs();
    }

}

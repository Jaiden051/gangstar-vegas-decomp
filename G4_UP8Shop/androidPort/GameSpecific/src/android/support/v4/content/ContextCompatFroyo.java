// Decompiled from classes.dex (SourceFile: ContextCompatFroyo.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

class ContextCompatFroyo {
    // Methods
    ContextCompatFroyo()
    {
      super();
    }

    public static java.io.File getExternalCacheDir(android.content.Context p0)
    {
      return p0.getExternalCacheDir();
    }

    public static java.io.File getExternalFilesDir(android.content.Context p0, String p1)
    {
      return p0.getExternalFilesDir(p1);
    }

}

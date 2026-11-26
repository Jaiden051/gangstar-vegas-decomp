// Decompiled from classes.dex (SourceFile: ContextCompatHoneycomb.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

class ContextCompatHoneycomb {
    // Methods
    ContextCompatHoneycomb()
    {
      super();
    }

    public static java.io.File getObbDir(android.content.Context p0)
    {
      return p0.getObbDir();
    }

    static void startActivities(android.content.Context p0, android.content.Intent[] p1)
    {
      p0.startActivities(p1);
    }

}

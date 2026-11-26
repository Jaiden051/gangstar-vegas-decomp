// Decompiled from classes.dex (SourceFile: NavUtilsJB.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

class NavUtilsJB {
    // Methods
    NavUtilsJB()
    {
      super();
    }

    public static android.content.Intent getParentActivityIntent(android.app.Activity p0)
    {
      return p0.getParentActivityIntent();
    }

    public static String getParentActivityName(android.content.pm.ActivityInfo p0)
    {
      return p0.parentActivityName;
    }

    public static void navigateUpTo(android.app.Activity p0, android.content.Intent p1)
    {
      p0.navigateUpTo(p1);
    }

    public static boolean shouldUpRecreateTask(android.app.Activity p0, android.content.Intent p1)
    {
      return p0.shouldUpRecreateTask(p1);
    }

}

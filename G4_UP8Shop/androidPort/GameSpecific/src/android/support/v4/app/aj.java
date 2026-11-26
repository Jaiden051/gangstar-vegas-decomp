// Decompiled from classes.dex (SourceFile: aj.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

final class aj extends android.support.v4.app.ai {
    // Methods
    aj()
    {
      super();
    }

    private android.content.Intent b(android.app.Activity p0)
    {
      return super.a(p0);
    }

    public final android.content.Intent a(android.app.Activity p0)
    {
      android.content.Intent ParentActivityIntent;
      ParentActivityIntent = NavUtilsJB.getParentActivityIntent(p0);
      if ( ParentActivityIntent == null )
        return super.a(p0);
      return ParentActivityIntent;
    }

    public final String a(android.content.Context p0, android.content.pm.ActivityInfo p1)
    {
      String ParentActivityName;
      ParentActivityName = NavUtilsJB.getParentActivityName(p1);
      if ( ParentActivityName == null )
        return super.a(p0, p1);
      return ParentActivityName;
    }

    public final boolean a(android.app.Activity p0, android.content.Intent p1)
    {
      return NavUtilsJB.shouldUpRecreateTask(p0, p1);
    }

    public final void b(android.app.Activity p0, android.content.Intent p1)
    {
      NavUtilsJB.navigateUpTo(p0, p1);
    }

}

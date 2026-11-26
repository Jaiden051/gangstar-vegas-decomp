// Decompiled from classes.dex (SourceFile: NavUtils.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.os.Build;
import android.support.v4.content.IntentCompat;
public class NavUtils {
    // Fields
    public static java.lang.String a;
    private static java.lang.String b;
    private static final android.support.v4.app.ah c;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 16 )
        c = (android.support.v4.app.ah)new android.support.v4.app.ai();
      else
        c = (android.support.v4.app.ah)new android.support.v4.app.aj();
    }

    private NavUtils()
    {
      super();
    }

    public static android.content.Intent getParentActivityIntent(android.app.Activity p0)
    {
      return c.a(p0);
    }

    public static android.content.Intent getParentActivityIntent(
            android.content.Context p0,
            android.content.ComponentName p1) throws android.content.pm.PackageManager.NameNotFoundException
    {
      String ParentActivityName;
      android.content.ComponentName v5;
      ParentActivityName = getParentActivityName(p0, p1);
      if ( ParentActivityName == null )
        return null;
      v5 = new android.content.ComponentName(p1.getPackageName(), ParentActivityName);
      if ( getParentActivityName(p0, v5) != null )
        return new android.content.Intent().setComponent(v5);
      else
        return IntentCompat.makeMainActivity(v5);
    }

    public static android.content.Intent getParentActivityIntent(android.content.Context p0, Class<?> p1) throws android.content.pm.PackageManager.NameNotFoundException
    {
      String ParentActivityName; // RETVAL
      android.content.ComponentName v5;
      ParentActivityName = getParentActivityName(p0, new android.content.ComponentName(p0, p1));
      if ( ParentActivityName == null )
        return null;
      v5 = new android.content.ComponentName(p0, ParentActivityName);
      if ( getParentActivityName(p0, v5) != null )
        return new android.content.Intent().setComponent(v5);
      else
        return IntentCompat.makeMainActivity(v5);
    }

    public static String getParentActivityName(android.app.Activity p0)
    {
      try
      {
        return getParentActivityName(p0, p0.getComponentName());
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException v2 )
      {
        throw new IllegalArgumentException(v2);
      }
    }

    public static String getParentActivityName(android.content.Context p0, android.content.ComponentName p1) throws android.content.pm.PackageManager.NameNotFoundException
    {
      return c.a(p0, p0.getPackageManager().getActivityInfo(p1, 128));
    }

    public static void navigateUpFromSameTask(android.app.Activity p0)
    {
      android.content.Intent ParentActivityIntent; // RETVAL
    
      ParentActivityIntent = getParentActivityIntent(p0);
      if ( ParentActivityIntent == null )
        throw new IllegalArgumentException("Activity "
                                         + p0.getClass().getSimpleName()
                                         + " does not have a parent activity name specified. (Did you forget to add the andro" +
                                           "id.support.PARENT_ACTIVITY <meta-data> "
                                         + " element in your manifest?)");
      navigateUpTo(p0, ParentActivityIntent);
    }

    public static void navigateUpTo(android.app.Activity p0, android.content.Intent p1)
    {
      c.b(p0, p1);
    }

    public static boolean shouldUpRecreateTask(android.app.Activity p0, android.content.Intent p1)
    {
      return c.a(p0, p1);
    }

}

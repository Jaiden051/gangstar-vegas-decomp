// Decompiled from classes.dex (SourceFile: IntentCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

import android.os.Build;
public class IntentCompat {
    // Fields
    public static java.lang.String ACTION_EXTERNAL_APPLICATIONS_AVAILABLE;
    public static java.lang.String ACTION_EXTERNAL_APPLICATIONS_UNAVAILABLE;
    public static java.lang.String EXTRA_CHANGED_PACKAGE_LIST;
    public static java.lang.String EXTRA_CHANGED_UID_LIST;
    public static java.lang.String EXTRA_HTML_TEXT;
    public static int FLAG_ACTIVITY_CLEAR_TASK;
    public static int FLAG_ACTIVITY_TASK_ON_HOME;
    private static final android.support.v4.content.IntentCompat$IntentCompatImpl IMPL;

    // Methods
    static
    {
      int v0;
      v0 = Build.VERSION.SDK_INT;
      if ( v0 < 15 )
      {
        if ( v0 < 11 )
          IMPL = (android.support.v4.content.IntentCompat$IntentCompatImpl)new android.support.v4.content.IntentCompat$IntentCompatImplBase();
        else
          IMPL = (android.support.v4.content.IntentCompat$IntentCompatImpl)new android.support.v4.content.IntentCompat$IntentCompatImplHC();
      }
      else
      {
        IMPL = (android.support.v4.content.IntentCompat$IntentCompatImpl)new android.support.v4.content.IntentCompat$IntentCompatImplIcsMr1();
      }
    }

    private IntentCompat()
    {
      super();
    }

    public static android.content.Intent makeMainActivity(android.content.ComponentName p0)
    {
      return IMPL.makeMainActivity(p0);
    }

    public static android.content.Intent makeMainSelectorActivity(String p0, String p1)
    {
      return IMPL.makeMainSelectorActivity(p0, p1);
    }

    public static android.content.Intent makeRestartActivityTask(android.content.ComponentName p0)
    {
      return IMPL.makeRestartActivityTask(p0);
    }

}

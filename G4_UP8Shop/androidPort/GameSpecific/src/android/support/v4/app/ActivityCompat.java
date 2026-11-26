// Decompiled from classes.dex (SourceFile: ActivityCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.os.Build;
public class ActivityCompat extends android.support.v4.content.ContextCompat {
    // Methods
    public ActivityCompat()
    {
      super();
    }

    public static void finishAffinity(android.app.Activity p0)
    {
      if ( Build.VERSION.SDK_INT < 16 )
        p0.finish();
      else
        ActivityCompatJB.finishAffinity(p0);
    }

    public static boolean invalidateOptionsMenu(android.app.Activity p0)
    {
      if ( Build.VERSION.SDK_INT < 11 )
        return false;
      ActivityCompatHoneycomb.invalidateOptionsMenu(p0);
      return true;
    }

    public static void startActivity(
            android.app.Activity p0,
            android.content.Intent p1,
            android.os.Bundle p2)
    {
      if ( Build.VERSION.SDK_INT < 16 )
        p0.startActivity(p1);
      else
        ActivityCompatJB.startActivity(p0, p1, p2);
    }

    public static void startActivityForResult(
            android.app.Activity p0,
            android.content.Intent p1,
            int p2,
            android.os.Bundle p3)
    {
      if ( Build.VERSION.SDK_INT < 16 )
        p0.startActivityForResult(p1, p2);
      else
        ActivityCompatJB.startActivityForResult(p0, p1, p2, p3);
    }

}

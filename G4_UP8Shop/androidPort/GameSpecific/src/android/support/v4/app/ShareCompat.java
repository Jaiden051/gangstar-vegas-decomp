// Decompiled from classes.dex (SourceFile: ShareCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.os.Build;
public class ShareCompat {
    // Fields
    public static java.lang.String a;
    public static java.lang.String b;
    private static android.support.v4.app.ax c;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 16 )
      {
        if ( Build.VERSION.SDK_INT < 14 )
          c = (android.support.v4.app.ax)new android.support.v4.app.ShareCompat$ShareCompatImplBase();
        else
          c = (android.support.v4.app.ax)new android.support.v4.app.ay();
      }
      else
      {
        c = (android.support.v4.app.ax)new android.support.v4.app.az();
      }
    }

    public ShareCompat()
    {
      super();
    }

    /* synthetic */ static android.support.v4.app.ax access$000()
    {
      return c;
    }

    public static void configureMenuItem(
            android.view.Menu p0,
            int p1,
            android.support.v4.app.ShareCompat$IntentBuilder p2)
    {
      android.view.MenuItem Item; // RETVAL
    
      Item = p0.findItem(p1);
      if ( Item == null )
        throw new IllegalArgumentException("Could not find menu item with id " + p1 + " in the supplied menu");
      configureMenuItem(Item, p2);
    }

    public static void configureMenuItem(
            android.view.MenuItem p0,
            android.support.v4.app.ShareCompat$IntentBuilder p1)
    {
      c.a(p0, p1);
    }

    public static android.content.ComponentName getCallingActivity(android.app.Activity p0)
    {
      android.content.ComponentName CallingActivity;
      CallingActivity = p0.getCallingActivity();
      if ( CallingActivity == null )
        return (android.content.ComponentName)p0.getIntent().getParcelableExtra("android.support.v4.app.EXTRA_CALLING_ACTIVITY");
      return CallingActivity;
    }

    public static String getCallingPackage(android.app.Activity p0)
    {
      String CallingPackage;
      CallingPackage = p0.getCallingPackage();
      if ( CallingPackage == null )
        return p0.getIntent().getStringExtra("android.support.v4.app.EXTRA_CALLING_PACKAGE");
      return CallingPackage;
    }

}

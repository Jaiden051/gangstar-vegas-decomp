// Decompiled from classes.dex (SourceFile: NotificationCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.os.Build;
public class NotificationCompat {
    // Fields
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    public static int e;
    public static int f;
    private static final android.support.v4.app.ap g;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 16 )
      {
        if ( Build.VERSION.SDK_INT < 14 )
        {
          if ( Build.VERSION.SDK_INT < 11 )
            g = (android.support.v4.app.ap)new android.support.v4.app.aq();
          else
            g = (android.support.v4.app.ap)new android.support.v4.app.ar();
        }
        else
        {
          g = (android.support.v4.app.ap)new android.support.v4.app.as();
        }
      }
      else
      {
        g = (android.support.v4.app.ap)new android.support.v4.app.at();
      }
    }

    public NotificationCompat()
    {
      super();
    }

    /* synthetic */ static android.support.v4.app.ap access$000()
    {
      return g;
    }

}
